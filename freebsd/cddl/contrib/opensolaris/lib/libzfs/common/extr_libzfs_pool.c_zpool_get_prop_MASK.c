
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zpool_prop_t ;
struct TYPE_10__ {int * zpool_props; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_11__ {int vs_aux; } ;
typedef TYPE_2__ vdev_stat_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int *,int ,int**,int *) ;
 int FUNC_3 (char*,size_t,char*,...) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,size_t) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 char const* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int,int *) ;
 char const* FUNC_11 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 char const* FUNC_13 (scalar_t__) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int,char const**) ;
 char const* FUNC_16 (int,int ) ;

int
FUNC_17(zpool_handle_t *VAR_6, zpool_prop_t VAR_7, char *VAR_8, size_t VAR_9,
    zprop_source_t *VAR_10, boolean_t VAR_11)
{
 uint64_t VAR_12;
 const char *VAR_13;
 zprop_source_t VAR_14 = VAR_5;
 nvlist_t *VAR_15;
 vdev_stat_t *VAR_16;
 uint_t VAR_17;

 if (FUNC_12(VAR_6) == VAR_0) {
  switch (VAR_7) {
  case 130:
   (void) FUNC_4(VAR_8, FUNC_9(VAR_6), VAR_9);
   break;

  case 132:
   (void) FUNC_4(VAR_8,
       FUNC_13(VAR_0), VAR_9);
   break;

  case 133:
   VAR_12 = FUNC_10(VAR_6, VAR_7, &VAR_14);
   (void) FUNC_3(VAR_8, VAR_9, "%llu", VAR_12);
   break;

  case 144:
  case 142:
  case 139:
   if (VAR_6->zpool_props != ((void*)0) ||
       FUNC_7(VAR_6) == 0) {
    (void) FUNC_4(VAR_8,
        FUNC_11(VAR_6, VAR_7, &VAR_14),
        VAR_9);
    break;
   }

  default:
   (void) FUNC_4(VAR_8, "-", VAR_9);
   break;
  }

  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_14;
  return (0);
 }

 if (VAR_6->zpool_props == ((void*)0) && FUNC_7(VAR_6) &&
     VAR_7 != 130)
  return (-1);

 switch (FUNC_14(VAR_7)) {
 case 146:
  (void) FUNC_4(VAR_8, FUNC_11(VAR_6, VAR_7, &VAR_14),
      VAR_9);
  break;

 case 147:
  VAR_12 = FUNC_10(VAR_6, VAR_7, &VAR_14);

  switch (VAR_7) {
  case 129:
  case 145:
  case 135:
  case 134:
  case 131:
   if (VAR_11) {
    (void) FUNC_3(VAR_8, VAR_9, "%llu",
        (u_longlong_t)VAR_12);
   } else {
    (void) FUNC_6(VAR_12, VAR_8, VAR_9);
   }
   break;
  case 143:
  case 137:
  case 140:
   if (VAR_12 == 0) {
    (void) FUNC_4(VAR_8, "-", VAR_9);
   } else if (VAR_11) {
    (void) FUNC_3(VAR_8, VAR_9, "%llu",
        (u_longlong_t)VAR_12);
   } else {
    (void) FUNC_6(VAR_12, VAR_8, VAR_9);
   }
   break;
  case 141:
   if (VAR_11) {
    (void) FUNC_3(VAR_8, VAR_9, "%llu",
        (u_longlong_t)VAR_12);
   } else {
    (void) FUNC_3(VAR_8, VAR_9, "%llu%%",
        (u_longlong_t)VAR_12);
   }
   break;
  case 136:
   if (VAR_12 == VAR_2) {
    (void) FUNC_4(VAR_8, "-", VAR_9);
   } else {
    (void) FUNC_3(VAR_8, VAR_9, "%llu%%",
        (u_longlong_t)VAR_12);
   }
   break;
  case 138:
   (void) FUNC_3(VAR_8, VAR_9, "%llu.%02llux",
       (u_longlong_t)(VAR_12 / 100),
       (u_longlong_t)(VAR_12 % 100));
   break;
  case 132:
   FUNC_5(FUNC_1(FUNC_8(VAR_6, ((void*)0)),
       VAR_4, &VAR_15) == 0);
   FUNC_5(FUNC_2(VAR_15,
       VAR_3, (uint64_t **)&VAR_16, &VAR_17)
       == 0);

   (void) FUNC_4(VAR_8, FUNC_16(VAR_12,
       VAR_16->vs_aux), VAR_9);
   break;
  case 128:
   if (VAR_12 >= VAR_1) {
    (void) FUNC_3(VAR_8, VAR_9, "-");
    break;
   }

  default:
   (void) FUNC_3(VAR_8, VAR_9, "%llu", VAR_12);
  }
  break;

 case 148:
  VAR_12 = FUNC_10(VAR_6, VAR_7, &VAR_14);
  if (FUNC_15(VAR_7, VAR_12, &VAR_13)
      != 0)
   return (-1);
  (void) FUNC_4(VAR_8, VAR_13, VAR_9);
  break;

 default:
  FUNC_0();
 }

 if (VAR_10)
  *VAR_10 = VAR_14;

 return (0);
}
