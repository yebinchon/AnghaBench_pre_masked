
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lot_num; } ;
typedef TYPE_1__ sa_lot_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const sa_lot_t *VAR_2 = (const sa_lot_t *)VAR_0;
 const sa_lot_t *VAR_3 = (const sa_lot_t *)VAR_1;

 return (FUNC_0(VAR_2->lot_num, VAR_3->lot_num));
}
