
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int bt_type; scalar_t__ bt_size; scalar_t__ bt_start; } ;
struct TYPE_13__ {int vm_quantum_mask; int vm_hash0; int vm_hashlist; int vm_hashsize; int * vm_freelist; TYPE_10__ vm_cursor; int vm_seglist; scalar_t__ vm_inuse; scalar_t__ vm_limit; scalar_t__ vm_size; scalar_t__ vm_nbusytag; scalar_t__ vm_quantum_shift; int vm_name; int vm_freetags; scalar_t__ vm_nfreetags; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;
typedef int vmem_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_10__*,int ) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (int ,char const*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ,int,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

vmem_t *
FUNC_16(vmem_t *VAR_7, const char *VAR_8, vmem_addr_t VAR_9, vmem_size_t VAR_10,
    vmem_size_t VAR_11, vmem_size_t VAR_12, int VAR_13)
{
 int VAR_14;

 FUNC_2(VAR_11 > 0);
 FUNC_2((VAR_11 & (VAR_11 - 1)) == 0);

 FUNC_7(VAR_7, sizeof(*VAR_7));

 FUNC_5(VAR_7, VAR_8);
 FUNC_6(VAR_7, VAR_8);
 VAR_7->vm_nfreetags = 0;
 FUNC_0(&VAR_7->vm_freetags);
 FUNC_13(VAR_7->vm_name, VAR_8, sizeof(VAR_7->vm_name));
 VAR_7->vm_quantum_mask = VAR_11 - 1;
 VAR_7->vm_quantum_shift = FUNC_8(VAR_11) - 1;
 VAR_7->vm_nbusytag = 0;
 VAR_7->vm_size = 0;
 VAR_7->vm_limit = 0;
 VAR_7->vm_inuse = 0;
 FUNC_12(VAR_7, VAR_12);

 FUNC_3(&VAR_7->vm_seglist);
 VAR_7->vm_cursor.bt_start = VAR_7->vm_cursor.bt_size = 0;
 VAR_7->vm_cursor.bt_type = VAR_0;
 FUNC_4(&VAR_7->vm_seglist, &VAR_7->vm_cursor, VAR_3);

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  FUNC_0(&VAR_7->vm_freelist[VAR_14]);

 FUNC_9(&VAR_7->vm_hash0, 0, sizeof(VAR_7->vm_hash0));
 VAR_7->vm_hashsize = VAR_1;
 VAR_7->vm_hashlist = VAR_7->vm_hash0;

 if (VAR_10 != 0) {
  if (FUNC_14(VAR_7, VAR_9, VAR_10, VAR_13) != 0) {
   FUNC_15(VAR_7);
   return ((void*)0);
  }
 }

 FUNC_10(&VAR_6);
 FUNC_1(&VAR_5, VAR_7, VAR_4);
 FUNC_11(&VAR_6);

 return VAR_7;
}
