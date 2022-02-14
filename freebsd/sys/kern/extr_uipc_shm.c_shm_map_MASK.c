
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef int vm_object_t ;
struct shmfd {scalar_t__ shm_size; int shm_kmappings; int shm_object; } ;
struct file {scalar_t__ f_type; struct shmfd* f_data; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__,size_t*,size_t,int ,int ,int,int,int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ,size_t,size_t) ;
 int FUNC_7 (int ,size_t,size_t,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(struct file *VAR_10, size_t VAR_11, off_t VAR_12, void **VAR_13)
{
 struct shmfd *VAR_14;
 vm_offset_t VAR_15, VAR_16;
 vm_object_t VAR_17;
 int VAR_18;

 if (VAR_10->f_type != VAR_0)
  return (VAR_1);
 VAR_14 = VAR_10->f_data;
 VAR_17 = VAR_14->shm_object;
 FUNC_0(VAR_17);




 if (VAR_12 >= VAR_14->shm_size ||
     VAR_12 + VAR_11 > FUNC_2(VAR_14->shm_size)) {
  FUNC_1(VAR_17);
  return (VAR_1);
 }

 VAR_14->shm_kmappings++;
 FUNC_10(VAR_17);
 FUNC_1(VAR_17);


 VAR_15 = FUNC_5(VAR_9);
 VAR_16 = VAR_12 & VAR_3;
 VAR_12 = FUNC_3(VAR_12);
 VAR_11 = FUNC_2(VAR_11 + VAR_16);
 VAR_18 = FUNC_4(VAR_9, VAR_17, VAR_12, &VAR_15, VAR_11, 0,
     VAR_4, VAR_7 | VAR_8,
     VAR_7 | VAR_8, 0);
 if (VAR_18 == VAR_2) {
  VAR_18 = FUNC_7(VAR_9, VAR_15, VAR_15 + VAR_11,
      VAR_6 | VAR_5);
  if (VAR_18 == VAR_2) {
   *VAR_13 = (void *)(VAR_15 + VAR_16);
   return (0);
  }
  FUNC_6(VAR_9, VAR_15, VAR_15 + VAR_11);
 } else
  FUNC_9(VAR_17);


 FUNC_0(VAR_17);
 VAR_14->shm_kmappings--;
 FUNC_1(VAR_17);

 return (FUNC_8(VAR_18));
}
