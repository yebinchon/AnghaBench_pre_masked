
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ndis_allocwork {int * na_iw; void* na_ctx; int na_len; int na_cached; } ;
typedef int ndis_status ;
struct TYPE_4__ {int nmb_deviceobj; } ;
typedef TYPE_1__ ndis_miniport_block ;
typedef TYPE_1__* ndis_handle ;
typedef scalar_t__ io_workitem_func ;
typedef int io_workitem ;
typedef int funcptr ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int ,struct ndis_allocwork*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ndis_allocwork* FUNC_2 (int,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ndis_status
FUNC_4(ndis_handle VAR_6, uint32_t VAR_7,
    uint8_t VAR_8, void *VAR_9)
{
 ndis_miniport_block *VAR_10;
 struct ndis_allocwork *VAR_11;
 io_workitem *VAR_12;
 io_workitem_func VAR_13;

 if (VAR_6 == ((void*)0))
  return (VAR_2);

 VAR_10 = VAR_6;

 VAR_12 = FUNC_0(VAR_10->nmb_deviceobj);
 if (VAR_12 == ((void*)0))
  return (VAR_2);

 VAR_11 = FUNC_2(sizeof(struct ndis_allocwork), VAR_1, VAR_0);

 if (VAR_11 == ((void*)0))
  return (VAR_2);

 VAR_11->na_cached = VAR_8;
 VAR_11->na_len = VAR_7;
 VAR_11->na_ctx = VAR_9;
 VAR_11->na_iw = VAR_12;

 VAR_13 = (io_workitem_func)FUNC_3((funcptr)VAR_5);
 FUNC_1(VAR_12, VAR_13, VAR_4, VAR_11);

 return (VAR_3);
}
