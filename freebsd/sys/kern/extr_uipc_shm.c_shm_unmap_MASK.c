
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef size_t vm_offset_t ;
typedef scalar_t__ vm_object_t ;
typedef int vm_map_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct shmfd {scalar_t__ shm_object; scalar_t__ shm_kmappings; } ;
struct file {scalar_t__ f_type; struct shmfd* f_data; } ;
typedef int boolean_t ;
struct TYPE_4__ {size_t start; size_t end; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (int *,size_t,int,TYPE_1__**,scalar_t__*,int *,int *,int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,size_t,size_t) ;

int
FUNC_8(struct file *VAR_7, void *VAR_8, size_t VAR_9)
{
 struct shmfd *VAR_10;
 vm_map_entry_t VAR_11;
 vm_offset_t VAR_12, VAR_13;
 vm_object_t VAR_14;
 vm_pindex_t VAR_15;
 vm_prot_t VAR_16;
 boolean_t VAR_17;
 vm_map_t VAR_18;
 int VAR_19;

 if (VAR_7->f_type != VAR_0)
  return (VAR_1);
 VAR_10 = VAR_7->f_data;
 VAR_12 = (vm_offset_t)VAR_8;
 VAR_13 = VAR_12 & VAR_3;
 VAR_12 = FUNC_4(VAR_12);
 VAR_9 = FUNC_3(VAR_9 + VAR_13);
 VAR_18 = VAR_6;
 VAR_19 = FUNC_5(&VAR_18, VAR_12, VAR_4 | VAR_5, &VAR_11,
     &VAR_14, &VAR_15, &VAR_16, &VAR_17);
 if (VAR_19 != VAR_2)
  return (VAR_1);
 if (VAR_11->start != VAR_12 || VAR_11->end != VAR_12 + VAR_9) {
  FUNC_6(VAR_18, VAR_11);
  return (VAR_1);
 }
 FUNC_6(VAR_18, VAR_11);
 if (VAR_14 != VAR_10->shm_object)
  return (VAR_1);
 FUNC_7(VAR_18, VAR_12, VAR_12 + VAR_9);
 FUNC_1(VAR_14);
 FUNC_0(VAR_10->shm_kmappings > 0, ("shm_unmap: object not mapped"));
 VAR_10->shm_kmappings--;
 FUNC_2(VAR_14);
 return (0);
}
