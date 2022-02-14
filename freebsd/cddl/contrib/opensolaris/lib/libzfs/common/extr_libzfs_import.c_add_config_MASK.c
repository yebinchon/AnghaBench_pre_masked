
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ve_guid; TYPE_5__* ve_configs; struct TYPE_8__* ve_next; } ;
typedef TYPE_1__ vdev_entry_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {TYPE_4__* names; TYPE_3__* pools; } ;
typedef TYPE_2__ pool_list_t ;
struct TYPE_10__ {scalar_t__ pe_guid; TYPE_1__* pe_vdevs; struct TYPE_10__* pe_next; } ;
typedef TYPE_3__ pool_entry_t ;
typedef int nvlist_t ;
struct TYPE_11__ {struct TYPE_11__* ne_next; scalar_t__ ne_guid; int * ne_name; } ;
typedef TYPE_4__ name_entry_t ;
typedef int libzfs_handle_t ;
struct TYPE_12__ {scalar_t__ ce_txg; struct TYPE_12__* ce_next; int ce_config; } ;
typedef TYPE_5__ config_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*) ;
 void* FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,char const*) ;

__attribute__((used)) static int
FUNC_5(libzfs_handle_t *VAR_7, pool_list_t *VAR_8, const char *VAR_9,
    nvlist_t *VAR_10)
{
 uint64_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 pool_entry_t *VAR_16;
 vdev_entry_t *VAR_17;
 config_entry_t *VAR_18;
 name_entry_t *VAR_19;






 if (FUNC_2(VAR_10, VAR_4,
     &VAR_15) == 0 &&
     (VAR_15 == VAR_1 || VAR_15 == VAR_0) &&
     FUNC_2(VAR_10, VAR_2, &VAR_12) == 0) {
  if ((VAR_19 = FUNC_3(VAR_7, sizeof (name_entry_t))) == ((void*)0))
   return (-1);

  if ((VAR_19->ne_name = FUNC_4(VAR_7, VAR_9)) == ((void*)0)) {
   FUNC_1(VAR_19);
   return (-1);
  }

  VAR_19->ne_guid = VAR_12;
  VAR_19->ne_next = VAR_8->names;
  VAR_8->names = VAR_19;

  return (0);
 }
 if (FUNC_2(VAR_10, VAR_3,
     &VAR_11) != 0 ||
     FUNC_2(VAR_10, VAR_2,
     &VAR_12) != 0 ||
     FUNC_2(VAR_10, VAR_6,
     &VAR_13) != 0 ||
     FUNC_2(VAR_10, VAR_5,
     &VAR_14) != 0 || VAR_14 == 0) {
  return (0);
 }





 for (VAR_16 = VAR_8->pools; VAR_16 != ((void*)0); VAR_16 = VAR_16->pe_next) {
  if (VAR_16->pe_guid == VAR_11)
   break;
 }

 if (VAR_16 == ((void*)0)) {
  if ((VAR_16 = FUNC_3(VAR_7, sizeof (pool_entry_t))) == ((void*)0)) {
   return (-1);
  }
  VAR_16->pe_guid = VAR_11;
  VAR_16->pe_next = VAR_8->pools;
  VAR_8->pools = VAR_16;
 }





 for (VAR_17 = VAR_16->pe_vdevs; VAR_17 != ((void*)0); VAR_17 = VAR_17->ve_next) {
  if (VAR_17->ve_guid == VAR_13)
   break;
 }

 if (VAR_17 == ((void*)0)) {
  if ((VAR_17 = FUNC_3(VAR_7, sizeof (vdev_entry_t))) == ((void*)0)) {
   return (-1);
  }
  VAR_17->ve_guid = VAR_13;
  VAR_17->ve_next = VAR_16->pe_vdevs;
  VAR_16->pe_vdevs = VAR_17;
 }






 for (VAR_18 = VAR_17->ve_configs; VAR_18 != ((void*)0); VAR_18 = VAR_18->ce_next) {
  if (VAR_18->ce_txg == VAR_14)
   break;
 }

 if (VAR_18 == ((void*)0)) {
  if ((VAR_18 = FUNC_3(VAR_7, sizeof (config_entry_t))) == ((void*)0)) {
   return (-1);
  }
  VAR_18->ce_txg = VAR_14;
  VAR_18->ce_config = FUNC_0(VAR_10);
  VAR_18->ce_next = VAR_17->ve_configs;
  VAR_17->ve_configs = VAR_18;
 }







 if ((VAR_19 = FUNC_3(VAR_7, sizeof (name_entry_t))) == ((void*)0))
  return (-1);

 if ((VAR_19->ne_name = FUNC_4(VAR_7, VAR_9)) == ((void*)0)) {
  FUNC_1(VAR_19);
  return (-1);
 }

 VAR_19->ne_guid = VAR_12;
 VAR_19->ne_next = VAR_8->names;
 VAR_8->names = VAR_19;

 return (0);
}
