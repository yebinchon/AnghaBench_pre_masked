
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int rpc ;
struct TYPE_5__ {scalar_t__ mod; int id; } ;
struct TYPE_6__ {int method; int dataoffs; int datasz; int mask; TYPE_1__ attr; int mgtclass; } ;
typedef TYPE_2__ ib_rpc_t ;
typedef int ib_portid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_2__*,int *,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_4, ib_portid_t * VAR_5, int VAR_6,
          uint64_t VAR_7, uint8_t * VAR_8)
{
 ib_rpc_t VAR_9;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.mgtclass = VAR_1;
 VAR_9.method = VAR_6;
 VAR_9.attr.id = VAR_0;
 VAR_9.attr.mod = 0;
 VAR_9.mask = VAR_7;
 VAR_9.datasz = VAR_3;
 VAR_9.dataoffs = VAR_2;

 FUNC_0(VAR_4, &VAR_9, VAR_5, ((void*)0), VAR_8);
}
