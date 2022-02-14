
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
 int VAR_2 ;
 TYPE_1__ FUNC_0 (int *) ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int,int ) ;

u_int32
FUNC_3(u_int32 VAR_3, const time_t *VAR_4)
{
 u_int32 VAR_5;
 vint64 VAR_6;
 ntpcal_split VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 VAR_7 = FUNC_0(&VAR_6);
 VAR_5 = FUNC_2(VAR_7.hi + VAR_1, VAR_0)
       - VAR_1;

 return (u_int32)(VAR_5 * VAR_2);
}
