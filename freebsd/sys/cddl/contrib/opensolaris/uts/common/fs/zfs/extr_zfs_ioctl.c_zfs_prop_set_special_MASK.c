
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zfsvfs_t ;
typedef int zfs_prop_t ;
struct TYPE_5__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int **) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int **) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (char const*,int *) ;
 scalar_t__ FUNC_18 (char const*) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (char const*,int ,int **,int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (char const*,int ) ;

__attribute__((used)) static int
FUNC_23(const char *VAR_9, zprop_source_t VAR_10,
    nvpair_t *VAR_11)
{
 const char *VAR_12 = FUNC_9(VAR_11);
 zfs_prop_t VAR_13 = FUNC_15(VAR_12);
 uint64_t VAR_14;
 int VAR_15 = -1;

 if (VAR_13 == VAR_7) {
  if (FUNC_18(VAR_12))
   return (FUNC_17(VAR_9, VAR_11));
  return (-1);
 }

 if (FUNC_10(VAR_11) == VAR_1) {
  nvlist_t *VAR_16;
  FUNC_0(FUNC_11(VAR_11, &VAR_16) == 0);
  FUNC_0(FUNC_8(VAR_16, VAR_8,
      &VAR_11) == 0);
 }

 if (FUNC_16(VAR_13) == VAR_4)
  return (-1);

 FUNC_0(0 == FUNC_12(VAR_11, &VAR_14));

 switch (VAR_13) {
 case 134:
  VAR_15 = FUNC_4(VAR_9, VAR_10, VAR_14);
  break;
 case 133:
  VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_14);
  break;
 case 135:
 case 130:
  if (VAR_14 == VAR_5) {

   VAR_15 = 0;
  } else {
   VAR_15 = FUNC_3(VAR_9);
  }




  if (VAR_15 == 0)
   VAR_15 = -1;
  break;
 case 131:
  VAR_15 = FUNC_5(VAR_9, VAR_10, VAR_14);
  break;
 case 132:
  VAR_15 = FUNC_2(VAR_9, VAR_10, VAR_14);
  break;
 case 128:
  VAR_15 = FUNC_22(VAR_9, VAR_14);
  break;
 case 129:
 {
  zfsvfs_t *VAR_17;

  if ((VAR_15 = FUNC_20(VAR_9, VAR_2, &VAR_17, VAR_0)) != 0)
   break;

  VAR_15 = FUNC_19(VAR_17, VAR_14);
  FUNC_21(VAR_17, VAR_2);

  if (VAR_15 == 0 && VAR_14 >= VAR_6) {
   zfs_cmd_t *VAR_18;

   VAR_18 = FUNC_7(sizeof (zfs_cmd_t), VAR_3);
   (void) FUNC_13(VAR_18->zc_name, VAR_9);
   (void) FUNC_14(VAR_18);
   FUNC_6(VAR_18, sizeof (zfs_cmd_t));
  }
  break;
 }
 default:
  VAR_15 = -1;
 }

 return (VAR_15);
}
