
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int dtrace_hdl_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,void const*,int) ;

ssize_t
FUNC_2(dtrace_hdl_t *VAR_1, int VAR_2, const void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5 = VAR_4;
 ssize_t VAR_6;

 while (VAR_5 != 0) {
  if ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5)) <= 0)
   break;

  VAR_5 -= VAR_6;
  VAR_3 = (char *)VAR_3 + VAR_6;
 }

 if (VAR_5 == VAR_4 && VAR_4 != 0)
  return (FUNC_0(VAR_1, VAR_0));

 return (VAR_4 - VAR_5);
}
