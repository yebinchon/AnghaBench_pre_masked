
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tp_mib_data {int dummy; } ;
struct cudbg_init {struct adapter* adap; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ addr; int value; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct adapter*,int *,int,size_t,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct cudbg_init *VAR_2,
       struct tp_mib_data **VAR_3)
{
 struct adapter *VAR_4 = VAR_2->adap;
 u32 VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_4, &VAR_1[VAR_5].value, 1,
      (u32)VAR_1[VAR_5].addr, 1);
 }
 *VAR_3 = (struct tp_mib_data *)&VAR_1[0];

 return 0;
}
