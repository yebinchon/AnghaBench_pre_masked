
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (int,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, unsigned VAR_3)
{
 char VAR_4[VAR_0];
 unsigned VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_2(VAR_6, VAR_4, &VAR_5) < 0)
   continue;
  if (FUNC_1(VAR_2, VAR_4, VAR_0))
   continue;
  if (VAR_3 != VAR_5)
   continue;

  FUNC_0("mapped %s %d to %d", VAR_2, VAR_3, VAR_6);
  return VAR_6;
 }

 return -1;
}
