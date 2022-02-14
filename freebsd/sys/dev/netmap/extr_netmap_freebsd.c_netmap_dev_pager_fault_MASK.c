
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_memattr_t ;
struct netmap_vm_handle_t {struct netmap_priv_d* priv; } ;
struct netmap_priv_d {struct netmap_adapter* np_na; } ;
struct netmap_adapter {int nm_mem; } ;
typedef int intmax_t ;
struct TYPE_16__ {int memattr; struct netmap_vm_handle_t* handle; } ;
struct TYPE_15__ {int flags; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,TYPE_2__*,int ,int,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(vm_object_t VAR_3, vm_ooffset_t VAR_4,
 int VAR_5, vm_page_t *VAR_6)
{
 struct netmap_vm_handle_t *VAR_7 = VAR_3->handle;
 struct netmap_priv_d *VAR_8 = VAR_7->priv;
 struct netmap_adapter *VAR_9 = VAR_8->np_na;
 vm_paddr_t VAR_10;
 vm_page_t VAR_11;
 vm_memattr_t VAR_12;
 vm_pindex_t VAR_13;

 FUNC_4("object %p offset %jd prot %d mres %p",
   VAR_3, (intmax_t)VAR_4, VAR_5, VAR_6);
 VAR_12 = VAR_3->memattr;
 VAR_13 = FUNC_0(VAR_4);
 VAR_10 = FUNC_3(VAR_9->nm_mem, VAR_4);
 if (VAR_10 == 0)
  return VAR_1;

 if (((*VAR_6)->flags & VAR_0) != 0) {




  VAR_11 = *VAR_6;
  FUNC_8(VAR_11, VAR_10, VAR_12);
 } else {
  FUNC_0(VAR_3);
  VAR_11 = FUNC_6(VAR_10, VAR_12);
  FUNC_0(VAR_3);
  FUNC_5(*VAR_6);
  *VAR_6 = VAR_11;
  FUNC_7(VAR_11, VAR_3, VAR_13);
 }
 FUNC_9(VAR_11);
 return (VAR_2);
}
