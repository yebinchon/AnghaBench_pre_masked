
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vint64 ;
typedef int uint32_t ;
typedef int time_t ;
struct TYPE_5__ {int expire; } ;
struct TYPE_6__ {TYPE_1__ head; } ;
typedef TYPE_2__ leap_table_t ;
typedef int int32_t ;
struct TYPE_7__ {int hi; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_3__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int *,int *) ;

int32_t
FUNC_4(
 uint32_t VAR_1,
 const time_t * VAR_2)
{
 const leap_table_t * VAR_3;
 vint64 VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_1, VAR_2);
 VAR_4 = FUNC_3(&VAR_3->head.expire, &VAR_4);
 return FUNC_1(&VAR_4).hi;
}
