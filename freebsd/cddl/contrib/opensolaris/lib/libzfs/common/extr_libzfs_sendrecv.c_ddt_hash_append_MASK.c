
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zio_cksum_t ;
typedef int uint64_t ;
typedef int libzfs_handle_t ;
struct TYPE_6__ {scalar_t__ cur_ddt_size; scalar_t__ max_ddt_size; scalar_t__ ddt_full; int ddt_count; int ddecache; } ;
typedef TYPE_1__ dedup_table_t ;
struct TYPE_7__ {int dde_ref; int dde_prop; int dde_chksum; int * dde_next; } ;
typedef TYPE_2__ dedup_entry_t ;
typedef int dataref_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(libzfs_handle_t *VAR_4, dedup_table_t *VAR_5, dedup_entry_t **VAR_6,
    zio_cksum_t *VAR_7, uint64_t VAR_8, dataref_t *VAR_9)
{
 dedup_entry_t *VAR_10;

 if (VAR_5->cur_ddt_size >= VAR_5->max_ddt_size) {
  if (VAR_5->ddt_full == VAR_0) {
   FUNC_3(VAR_4, FUNC_1(VAR_2,
       "Dedup table full.  Deduplication will continue "
       "with existing table entries"));
   VAR_5->ddt_full = VAR_1;
  }
  return;
 }

 if ((VAR_10 = FUNC_2(VAR_5->ddecache, VAR_3))
     != ((void*)0)) {
  FUNC_0(*VAR_6 == ((void*)0));
  VAR_10->dde_next = ((void*)0);
  VAR_10->dde_chksum = *VAR_7;
  VAR_10->dde_prop = VAR_8;
  VAR_10->dde_ref = *VAR_9;
  *VAR_6 = VAR_10;
  VAR_5->cur_ddt_size += sizeof (dedup_entry_t);
  VAR_5->ddt_count++;
 }
}
