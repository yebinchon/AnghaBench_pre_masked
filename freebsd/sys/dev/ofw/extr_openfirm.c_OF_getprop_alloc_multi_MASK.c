
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,void*,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (int,int ,int ) ;

ssize_t
FUNC_4(phandle_t VAR_2, const char *VAR_3, int VAR_4, void **VAR_5)
{
 int VAR_6;

 *VAR_5 = ((void*)0);
 if ((VAR_6 = FUNC_1(VAR_2, VAR_3)) == -1 ||
     VAR_6 % VAR_4 != 0)
  return (-1);

 if (VAR_6 > 0) {
  *VAR_5 = FUNC_3(VAR_6, VAR_0, VAR_1);
  if (FUNC_0(VAR_2, VAR_3, *VAR_5, VAR_6) == -1) {
   FUNC_2(*VAR_5, VAR_0);
   *VAR_5 = ((void*)0);
   return (-1);
  }
 }
 return (VAR_6 / VAR_4);
}
