
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int pathbuf ;
typedef int nvlist_t ;
struct TYPE_4__ {char* zo_pool; int zo_dir; } ;
struct TYPE_3__ {scalar_t__ zs_vdev_aux; int zs_vdev_next_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char*) ;
 scalar_t__ FUNC_3 (int,size_t) ;
 scalar_t__ FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int,char*,int ,char*,scalar_t__,...) ;
 char* VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_9 () ;
 TYPE_2__ VAR_11 ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static nvlist_t *
FUNC_10(char *VAR_13, char *VAR_14, char *VAR_15, size_t VAR_16, uint64_t VAR_17)
{
 char VAR_18[VAR_0];
 uint64_t VAR_19;
 nvlist_t *VAR_20;

 if (VAR_17 == 0)
  VAR_17 = FUNC_9();

 if (VAR_13 == ((void*)0)) {
  VAR_13 = VAR_18;

  if (VAR_14 != ((void*)0)) {
   VAR_19 = VAR_12->zs_vdev_aux;
   (void) FUNC_8(VAR_13, sizeof (VAR_18),
       VAR_9, VAR_11.zo_dir,
       VAR_15 == ((void*)0) ? VAR_11.zo_pool : VAR_15,
       VAR_14, VAR_19);
  } else {
   VAR_19 = VAR_12->zs_vdev_next_leaf++;
   (void) FUNC_8(VAR_13, sizeof (VAR_18),
       VAR_10, VAR_11.zo_dir,
       VAR_15 == ((void*)0) ? VAR_11.zo_pool : VAR_15, VAR_19);
  }
 }

 if (VAR_16 != 0) {
  int VAR_21 = FUNC_7(VAR_13, VAR_3 | VAR_2 | VAR_4, 0666);
  if (VAR_21 == -1)
   FUNC_2(1, "can't open %s", VAR_13);
  if (FUNC_3(VAR_21, VAR_16) != 0)
   FUNC_2(1, "can't ftruncate %s", VAR_13);
  (void) FUNC_1(VAR_21);
 }

 FUNC_0(FUNC_6(&VAR_20, VAR_1, 0) == 0);
 FUNC_0(FUNC_4(VAR_20, VAR_8, VAR_5) == 0);
 FUNC_0(FUNC_4(VAR_20, VAR_7, VAR_13) == 0);
 FUNC_0(FUNC_5(VAR_20, VAR_6, VAR_17) == 0);

 return (VAR_20);
}
