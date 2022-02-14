
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(void)
{
 char *VAR_3;

 if (VAR_2 == 0)
  VAR_2 = 1024;
 else
  VAR_2 *= 2;

 VAR_3 = VAR_1;
 VAR_1 = FUNC_2(VAR_3, VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_3);
  VAR_2 = 0;
  return (VAR_0);
 }
 FUNC_1(VAR_1, 0, VAR_2);

 return (0);
}
