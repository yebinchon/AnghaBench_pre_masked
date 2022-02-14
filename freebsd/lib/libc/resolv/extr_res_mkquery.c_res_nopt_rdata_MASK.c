
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
typedef TYPE_1__* res_state ;
struct TYPE_3__ {unsigned int options; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*) ;

int
FUNC_3(res_state VAR_2,
   int VAR_3,
   u_char *VAR_4,
   int VAR_5,
   u_char *VAR_6,
   u_short VAR_7,
   u_short VAR_8,
   u_char *VAR_9)
{
 register u_char *VAR_10, *VAR_11;






 VAR_10 = VAR_4 + VAR_3;
 VAR_11 = VAR_4 + VAR_5;

 if ((VAR_11 - VAR_10) < (4 + VAR_8))
  return (-1);

 if (VAR_6 < (VAR_4 + 2) || VAR_6 >= VAR_11)
  return (-1);

 FUNC_1(VAR_7, VAR_10);
 VAR_10 += VAR_0;

 FUNC_1(VAR_8, VAR_10);
 VAR_10 += VAR_0;

 FUNC_0(VAR_10, VAR_9, VAR_8);
 VAR_10 += VAR_8;

 VAR_8 = VAR_10 - VAR_6;
 FUNC_1(VAR_8, VAR_6 - 2);

 return (VAR_10 - VAR_4);
}
