
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_quad_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u_quad_t
FUNC_0(u_quad_t VAR_3, u_quad_t VAR_4)
{
    u_quad_t VAR_5, VAR_6;
    int VAR_7, VAR_8;

    static int VAR_9 = 0;


    if (VAR_3 == 0 || VAR_4 == 0)
 return 0;
    if (VAR_3 == 1)
 return VAR_4;
    if (VAR_4 == 1)
 return VAR_3;





    if (!VAR_9) {
 VAR_9 = sizeof(u_quad_t) * 8;
 while (((u_quad_t)1 << (VAR_9-1)) == 0)
     --VAR_9;
    }






    for (VAR_7 = VAR_9; (((u_quad_t)1 << (VAR_7-1)) & VAR_3) == 0; --VAR_7)
 ;
    for (VAR_8 = VAR_9; (((u_quad_t)1 << (VAR_8-1)) & VAR_4) == 0; --VAR_8)
 ;
    if (VAR_7 + VAR_8 - 2 > VAR_9) {
 VAR_2 = VAR_0;
 return (VAR_1);
    }
    VAR_5 = (VAR_3 >> 1) * (VAR_4 >> 1);
    if (VAR_5 >= ((u_quad_t)1 << (VAR_9-2))) {
 VAR_2 = VAR_0;
 return (VAR_1);
    }
    VAR_5 *= 4;

    VAR_6 = (VAR_3 & VAR_4 & 1)
 + (VAR_4 & 1) * (VAR_3 & ~(u_quad_t)1)
 + (VAR_3 & 1) * (VAR_4 & ~(u_quad_t)1);

    if ((u_quad_t)(VAR_5 + VAR_6) < VAR_5) {
 VAR_2 = VAR_0;
 return (VAR_1);
    }
    VAR_5 += VAR_6;

    return (VAR_5);
}
