
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vint64 ;
typedef int u_int32 ;
typedef int time_t ;
struct TYPE_3__ {int hi; } ;
typedef TYPE_1__ ntpcal_split ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int *) ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int) ;

u_int32
FUNC_3(u_int32 VAR_2, const time_t *VAR_3)
{
 u_int32 VAR_4;
 vint64 VAR_5;
 ntpcal_split VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 VAR_6 = FUNC_0(&VAR_5);
 VAR_4 = FUNC_2(VAR_6.hi + VAR_0)
       - VAR_0;

 return (u_int32)(VAR_4 * VAR_1);
}
