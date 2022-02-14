
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int,char const*,int ,int *) ;

int
FUNC_3(const char *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_1)) >= 0) {
  if ((VAR_3 = FUNC_2(VAR_2, VAR_0, 0, ((void*)0))) < 0) {
   FUNC_0(VAR_2);
   VAR_2 = VAR_3;
  }
 }
 return (VAR_2);
}
