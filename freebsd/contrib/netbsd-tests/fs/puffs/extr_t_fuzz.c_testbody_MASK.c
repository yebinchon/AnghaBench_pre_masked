
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct puffs_kargs {int pa_fd; } ;
typedef int pthread_t ;
typedef int kargs ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct puffs_kargs*) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (int ,char*,int ,struct puffs_kargs*,int) ;
 int FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (struct puffs_kargs*,int) ;
 unsigned long FUNC_16 (int *) ;
 int FUNC_17 (int,struct puffs_kargs*) ;

__attribute__((used)) static void
FUNC_18(int VAR_7)
{
 pthread_t VAR_8;
 struct puffs_kargs VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_10 = FUNC_16(((void*)0));
 FUNC_14(VAR_10);
 FUNC_2("test seeded RNG with %lu\n", VAR_10);

 FUNC_9();

 FUNC_6(&VAR_5, ((void*)0));
 FUNC_3(&VAR_3, ((void*)0));
 FUNC_5(&VAR_8, ((void*)0), VAR_6, ((void*)0));

 FUNC_0(FUNC_10("/mnt", 0777) == 0);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_15(&VAR_9, sizeof(VAR_9));
  FUNC_1(VAR_7, &VAR_9);
  if (FUNC_11(VAR_2, "/mnt", 0,
      &VAR_9, sizeof(VAR_9)) == 0) {
   struct stat VAR_12;

   FUNC_7(&VAR_5);
   VAR_4 = VAR_9.pa_fd;
   FUNC_4(&VAR_3);
   FUNC_8(&VAR_5);

   FUNC_12("/mnt", &VAR_12);
   FUNC_13("/mnt", VAR_1);
  }
  FUNC_17(VAR_7, &VAR_9);

  FUNC_7(&VAR_5);
  VAR_4 = -1;
  FUNC_8(&VAR_5);
 }
}
