
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, unsigned long *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1, '+');
 if (VAR_3) {

  VAR_4 = FUNC_1(VAR_3 + 1, 0, VAR_2);
  if (VAR_4)
   return VAR_4;
  *VAR_3 = '\0';
 } else
  *VAR_2 = 0;
 return 0;
}
