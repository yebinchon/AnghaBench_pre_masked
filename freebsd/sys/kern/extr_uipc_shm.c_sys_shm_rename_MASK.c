
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct shmfd {scalar_t__ shm_refs; } ;
struct shm_rename_args {int flags; int path_to; int path_from; } ;
typedef int Fnv32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (struct shmfd*) ;
 int FUNC_6 (struct shmfd*) ;
 int FUNC_7 (char*,int ,struct shmfd*) ;
 struct shmfd* FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,int ) ;
 scalar_t__ FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int
FUNC_13(struct thread *VAR_10, struct shm_rename_args *VAR_11)
{
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 Fnv32_t VAR_14, VAR_15;
 struct shmfd *VAR_16;
 struct shmfd *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_19 = VAR_11->flags;





 if ((VAR_19 & ~(
     VAR_8 |
     VAR_7
     )) != 0) {
  VAR_18 = VAR_1;
  goto out;
 }





 if ((VAR_19 & VAR_8) != 0 &&
     (VAR_19 & VAR_7) != 0) {
  VAR_18 = VAR_1;
  goto out;
 }





 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6);
 VAR_18 = FUNC_1(VAR_11->path_from, VAR_12, VAR_4, ((void*)0));
 if (VAR_18)
  goto out;

 VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_6);
 VAR_18 = FUNC_1(VAR_11->path_to, VAR_13, VAR_4, ((void*)0));
 if (VAR_18)
  goto out;


 if (FUNC_10(VAR_12, VAR_13, VAR_4) == 0)
  goto out;

 VAR_14 = FUNC_2(VAR_12, VAR_3);
 VAR_15 = FUNC_2(VAR_13, VAR_3);

 FUNC_11(&VAR_9);

 VAR_16 = FUNC_8(VAR_12, VAR_14);
 if (VAR_16 == ((void*)0)) {
  FUNC_12(&VAR_9);
  VAR_18 = VAR_2;
  goto out;
 }

 VAR_17 = FUNC_8(VAR_13, VAR_15);
 if ((VAR_19 & VAR_8) != 0 && VAR_17 != ((void*)0)) {
  FUNC_12(&VAR_9);
  VAR_18 = VAR_0;
  goto out;
 }





 FUNC_6(VAR_16);
 VAR_18 = FUNC_9(VAR_12, VAR_14, VAR_10->td_ucred);





 FUNC_0(VAR_18 != VAR_2, ("Our shm disappeared during shm_rename: %s",
     VAR_12));
 if (VAR_18) {
  FUNC_5(VAR_16);
  FUNC_12(&VAR_9);
  goto out;
 }





 if ((VAR_19 & VAR_7) != 0 && VAR_17 != ((void*)0))
  FUNC_6(VAR_17);
 VAR_18 = FUNC_9(VAR_13, VAR_15, VAR_10->td_ucred);
 if (VAR_18 && VAR_18 != VAR_2) {
  FUNC_7(VAR_12, VAR_14, VAR_16);
  FUNC_5(VAR_16);

  VAR_12 = ((void*)0);
  FUNC_12(&VAR_9);
  goto out;
 }

 FUNC_7(VAR_13, VAR_15, VAR_16);


 VAR_13 = ((void*)0);


 FUNC_5(VAR_16);





 if ((VAR_19 & VAR_7) != 0 && VAR_17 != ((void*)0)) {
  FUNC_7(VAR_12, VAR_14, VAR_17);
  VAR_12 = ((void*)0);
  FUNC_5(VAR_17);




 }

 VAR_18 = 0;
 FUNC_12(&VAR_9);

out:
 if (VAR_12 != ((void*)0))
  FUNC_3(VAR_12, VAR_5);
 if (VAR_13 != ((void*)0))
  FUNC_3(VAR_13, VAR_5);
 return(VAR_18);
}
