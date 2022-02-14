
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,size_t,char const*,int) ;
 size_t FUNC_3 (char const*) ;
 int * VAR_1 ;
 int VAR_2 ;

int
FUNC_4(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 size_t VAR_6;


 if (VAR_3 == ((void*)0) || (VAR_6 = FUNC_3(VAR_3)) == 0) {
  VAR_2 = VAR_0;
  return (-1);
 }


 if (FUNC_1() == -1 || (VAR_1 == ((void*)0) && FUNC_0() == -1))
  return (-1);

 return (FUNC_2(VAR_3, VAR_6, VAR_4, VAR_5));
}
