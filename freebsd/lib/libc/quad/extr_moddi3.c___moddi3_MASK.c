
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_quad_t ;
typedef scalar_t__ quad_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*) ;

quad_t
FUNC_1(quad_t VAR_0, quad_t VAR_1)
{
 u_quad_t VAR_2, VAR_3, VAR_4;
 int VAR_5;

 if (VAR_0 < 0)
  VAR_2 = -(u_quad_t)VAR_0, VAR_5 = 1;
 else
  VAR_2 = VAR_0, VAR_5 = 0;
 if (VAR_1 < 0)
  VAR_3 = -(u_quad_t)VAR_1;
 else
  VAR_3 = VAR_1;
 (void)FUNC_0(VAR_2, VAR_3, &VAR_4);
 return (VAR_5 ? -VAR_4 : VAR_4);
}
