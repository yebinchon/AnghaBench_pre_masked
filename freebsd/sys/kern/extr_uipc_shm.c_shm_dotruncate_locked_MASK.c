
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef int * vm_page_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct shmfd {int shm_size; int shm_seals; scalar_t__ shm_kmappings; int shm_ctime; int shm_mtime; TYPE_1__* shm_object; } ;
typedef int off_t ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ type; int charge; int cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (void*,int ) ;
 int VAR_14 ;
 int FUNC_10 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_1__*,int **,int,int *,int *) ;
 scalar_t__ FUNC_23 (TYPE_1__*,scalar_t__,int *,int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int
FUNC_25(struct shmfd *VAR_15, off_t VAR_16, void *VAR_17)
{
 vm_object_t VAR_18;
 vm_page_t VAR_19;
 vm_pindex_t VAR_20, VAR_21;
 vm_ooffset_t VAR_22;
 int VAR_23, VAR_24;

 FUNC_1(VAR_16 >= 0, ("shm_dotruncate: length < 0"));
 VAR_18 = VAR_15->shm_object;
 FUNC_4(VAR_18);
 FUNC_9(VAR_17, VAR_9);
 if (VAR_16 == VAR_15->shm_size)
  return (0);
 VAR_21 = FUNC_3(VAR_16 + VAR_7);


 if (VAR_16 < VAR_15->shm_size) {
  if ((VAR_15->shm_seals & VAR_5) != 0)
   return (VAR_3);





  if (VAR_15->shm_kmappings > 0)
   return (VAR_0);




  VAR_23 = VAR_16 & VAR_7;
  if (VAR_23 != 0) {
   VAR_20 = FUNC_3(VAR_16);
retry:
   VAR_19 = FUNC_19(VAR_18, VAR_20, VAR_10);
   if (VAR_19 != ((void*)0)) {
    FUNC_2(FUNC_15(VAR_19));
   } else if (FUNC_23(VAR_18, VAR_20, ((void*)0), ((void*)0))) {
    VAR_19 = FUNC_16(VAR_18, VAR_20,
        VAR_11 | VAR_12);
    if (VAR_19 == ((void*)0))
     goto retry;
    VAR_24 = FUNC_22(VAR_18, &VAR_19, 1, ((void*)0),
        ((void*)0));
    if (VAR_24 == VAR_13) {
     FUNC_20(VAR_19);
    } else {
     FUNC_18(VAR_19);
     FUNC_5(VAR_18);
     return (VAR_1);
    }
   }
   if (VAR_19 != ((void*)0)) {
    FUNC_8(VAR_19, VAR_23, VAR_8 - VAR_23);
    FUNC_1(FUNC_15(VAR_19),
        ("shm_dotruncate: page %p is invalid", VAR_19));
    FUNC_17(VAR_19);
    FUNC_21(VAR_19);
    FUNC_24(VAR_19);
   }
  }
  VAR_22 = FUNC_0(VAR_18->size - VAR_21);


  if (VAR_21 < VAR_18->size)
   FUNC_14(VAR_18, VAR_21, VAR_18->size,
       0);


  if (VAR_18->type == VAR_6)
   FUNC_10(VAR_18, VAR_21, VAR_22);


  FUNC_11(VAR_22, VAR_18->cred);
  VAR_18->charge -= VAR_22;
 } else {
  if ((VAR_15->shm_seals & VAR_4) != 0)
   return (VAR_3);


  VAR_22 = FUNC_0(VAR_21 - VAR_18->size);
  if (!FUNC_12(VAR_22, VAR_18->cred))
   return (VAR_2);
  VAR_18->charge += VAR_22;
 }
 VAR_15->shm_size = VAR_16;
 FUNC_6(&VAR_14);
 FUNC_13(&VAR_15->shm_ctime);
 VAR_15->shm_mtime = VAR_15->shm_ctime;
 FUNC_7(&VAR_14);
 VAR_18->size = VAR_21;
 return (0);
}
