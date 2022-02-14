
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* vp_nvlist; } ;
struct TYPE_6__ {TYPE_1__ vl_vdev_phys; } ;
typedef TYPE_2__ vdev_label_t ;
typedef int uint64_t ;
struct stat64 {int st_size; int st_mode; } ;
typedef int path ;
typedef int nvlist_t ;
typedef int label ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*,...) ;
 scalar_t__ FUNC_7 (int,struct stat64*) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int **) ;
 scalar_t__ FUNC_11 (int *,int ,int *) ;
 scalar_t__ FUNC_12 (char*,size_t,int **,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int,TYPE_2__*,int,int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_17 (char*,struct stat64*) ;
 int VAR_12 ;
 char* FUNC_18 (char const*,char) ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (char*,char const*,int) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (char const*,int ,int) ;
 char* FUNC_24 (char const*,char) ;
 int FUNC_25 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_26(const char *VAR_13)
{
 int VAR_14;
 vdev_label_t VAR_15;
 char VAR_16[VAR_2];
 char *VAR_17 = VAR_15.vl_vdev_phys.vp_nvlist;
 size_t VAR_18 = sizeof (VAR_15.vl_vdev_phys.vp_nvlist);
 struct stat64 VAR_19;
 uint64_t VAR_20, VAR_21;
 boolean_t VAR_22 = VAR_0;

 (void) FUNC_21(VAR_16, VAR_13, sizeof (VAR_16));
 if (VAR_13[0] == '/') {
  if (FUNC_23(VAR_13, VAR_6,
      FUNC_22(VAR_6)) == 0) {
   (void) FUNC_16(VAR_16, sizeof (VAR_16), "%s%s",
       VAR_7, VAR_13 + FUNC_22(VAR_6));
  }
 } else if (FUNC_17(VAR_16, &VAR_19) != 0) {
  char *VAR_23;

  (void) FUNC_16(VAR_16, sizeof (VAR_16), "%s%s", VAR_7,
      VAR_13);
  if (((VAR_23 = FUNC_24(VAR_13, 's')) == ((void*)0) &&
      (VAR_23 = FUNC_18(VAR_13, 'p')) == ((void*)0)) ||
      !FUNC_8(*(VAR_23 + 1)))
   (void) FUNC_20(VAR_16, "s0", sizeof (VAR_16));
 }

 if ((VAR_14 = FUNC_13(VAR_16, VAR_3)) < 0) {
  (void) FUNC_6(VAR_12, "cannot open '%s': %s\n", VAR_16,
      FUNC_19(VAR_11));
  FUNC_5(1);
 }

 if (FUNC_7(VAR_14, &VAR_19) != 0) {
  (void) FUNC_6(VAR_12, "failed to stat '%s': %s\n", VAR_16,
      FUNC_19(VAR_11));
  (void) FUNC_2(VAR_14);
  FUNC_5(1);
 }

 if (FUNC_1(VAR_19.st_mode)) {
  (void) FUNC_6(VAR_12,
      "cannot use '%s': character device required\n", VAR_16);
  (void) FUNC_2(VAR_14);
  FUNC_5(1);
 }

 VAR_20 = VAR_19.st_size;
 VAR_20 = FUNC_0(VAR_20, (uint64_t)sizeof (vdev_label_t));

 for (int VAR_24 = 0; VAR_24 < VAR_5; VAR_24++) {
  nvlist_t *VAR_25 = ((void*)0);

  if (!VAR_10['q']) {
   (void) FUNC_15("------------------------------------\n");
   (void) FUNC_15("LABEL %d\n", VAR_24);
   (void) FUNC_15("------------------------------------\n");
  }

  if (FUNC_14(VAR_14, &VAR_15, sizeof (VAR_15),
      FUNC_25(VAR_20, VAR_24, 0)) != sizeof (VAR_15)) {
   if (!VAR_10['q'])
    (void) FUNC_15("failed to read label %d\n", VAR_24);
   continue;
  }

  if (FUNC_12(VAR_17, VAR_18, &VAR_25, 0) != 0) {
   if (!VAR_10['q'])
    (void) FUNC_15("failed to unpack label %d\n", VAR_24);
   VAR_21 = VAR_4;
  } else {
   nvlist_t *VAR_26 = ((void*)0);

   if (!VAR_10['q'])
    FUNC_4(VAR_25, 4);
   if ((FUNC_10(VAR_25,
       VAR_9, &VAR_26) != 0) ||
       (FUNC_11(VAR_26,
       VAR_8, &VAR_21) != 0))
    VAR_21 = VAR_4;
   FUNC_9(VAR_25);
   VAR_22 = VAR_1;
  }
  if (VAR_10['u'])
   FUNC_3(&VAR_15, VAR_21);
 }

 (void) FUNC_2(VAR_14);

 return (VAR_22 ? 0 : 2);
}
