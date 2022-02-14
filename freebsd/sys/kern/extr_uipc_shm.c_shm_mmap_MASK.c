
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_offset_t ;
typedef int vm_map_t ;
struct thread {int td_ucred; } ;
struct shmfd {int shm_seals; int shm_mtx; int shm_rl; int shm_object; int shm_atime; } ;
struct file {int f_flag; struct shmfd* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,struct shmfd*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int ,scalar_t__,int *) ;
 int FUNC_4 (int *,void*,int *) ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,scalar_t__,int,int,int,int ,scalar_t__,int,struct thread*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int ,int ,scalar_t__) ;

int
FUNC_11(struct file *VAR_13, vm_map_t VAR_14, vm_offset_t *VAR_15, vm_size_t VAR_16,
    vm_prot_t VAR_17, vm_prot_t VAR_18, int VAR_19,
    vm_ooffset_t VAR_20, struct thread *VAR_21)
{
 struct shmfd *VAR_22;
 vm_prot_t VAR_23;
 int VAR_24;
 bool VAR_25;
 void *VAR_26;

 VAR_22 = VAR_13->f_data;
 VAR_23 = VAR_9;

 VAR_26 = FUNC_3(&VAR_22->shm_rl, 0, VAR_16,
     &VAR_22->shm_mtx);

 if ((VAR_13->f_flag & VAR_3) != 0)
  VAR_23 |= VAR_8 | VAR_10;
 if ((VAR_13->f_flag & VAR_4) != 0)
  VAR_23 |= VAR_11;

 VAR_25 = (VAR_19 & VAR_6) != 0 && (VAR_17 & VAR_11) != 0;

 if (VAR_25 && (VAR_22->shm_seals & VAR_5) != 0) {
  VAR_24 = VAR_2;
  goto out;
 }


 if (VAR_25 && (VAR_23 & VAR_11) == 0) {
  VAR_24 = VAR_0;
  goto out;
 }
 VAR_23 &= VAR_18;


 if (

     VAR_16 > VAR_7 ||

     VAR_20 < 0 || VAR_20 > VAR_7 - VAR_16) {
  VAR_24 = VAR_1;
  goto out;
 }







 FUNC_1(&VAR_12);
 FUNC_5(&VAR_22->shm_atime);
 FUNC_2(&VAR_12);
 FUNC_8(VAR_22->shm_object);

 if (VAR_25)
  FUNC_10(VAR_22->shm_object, 0, VAR_16);
 VAR_24 = FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17, VAR_23, VAR_19,
     VAR_22->shm_object, VAR_20, VAR_25, VAR_21);
 if (VAR_24 != 0) {
  if (VAR_25)
   FUNC_9(VAR_22->shm_object, 0,
       VAR_16);
  FUNC_7(VAR_22->shm_object);
 }
out:
 FUNC_4(&VAR_22->shm_rl, VAR_26, &VAR_22->shm_mtx);
 return (VAR_24);
}
