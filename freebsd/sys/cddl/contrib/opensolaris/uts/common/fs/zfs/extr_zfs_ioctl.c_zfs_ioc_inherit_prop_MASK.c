
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zprop_type_t ;
typedef int zprop_source_t ;
typedef scalar_t__ zfs_prop_t ;
struct TYPE_3__ {char* zc_value; int zc_name; scalar_t__ zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,char const*,char*) ;
 int FUNC_4 (int *,char const*,int ) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static int
FUNC_13(zfs_cmd_t *VAR_8)
{
 const char *VAR_9 = VAR_8->zc_value;
 zfs_prop_t VAR_10 = FUNC_8(VAR_9);
 boolean_t VAR_11 = VAR_8->zc_cookie;
 zprop_source_t VAR_12 = (VAR_11
     ? VAR_7
     : VAR_6);

 if (VAR_11) {
  nvlist_t *VAR_13;
  nvpair_t *VAR_14;
  zprop_type_t VAR_15;
  int VAR_16;





  if (VAR_10 == VAR_5) {
   if (!FUNC_12(VAR_9))
    return (FUNC_0(VAR_0));

   VAR_15 = 128;
  } else if (VAR_10 == VAR_4 ||
      VAR_10 == VAR_3) {
   return (FUNC_0(VAR_0));
  } else {
   VAR_15 = FUNC_9(VAR_10);
  }

  FUNC_1(FUNC_5(&VAR_13, VAR_2, VAR_1) == 0);

  switch (VAR_15) {
  case 128:
   FUNC_1(0 == FUNC_3(VAR_13, VAR_9, ""));
   break;
  case 129:
  case 130:
   FUNC_1(0 == FUNC_4(VAR_13, VAR_9, 0));
   break;
  default:
   FUNC_6(VAR_13);
   return (FUNC_0(VAR_0));
  }

  VAR_14 = FUNC_7(VAR_13, ((void*)0));
  VAR_16 = FUNC_11(VAR_8->zc_name, VAR_12, VAR_14);
  FUNC_6(VAR_13);
  if (VAR_16 != -1)
   return (VAR_16);
 } else {






  if (VAR_10 != VAR_5 && !FUNC_10(VAR_10))
   return (FUNC_0(VAR_0));
 }


 return (FUNC_2(VAR_8->zc_name, VAR_8->zc_value, VAR_12));
}
