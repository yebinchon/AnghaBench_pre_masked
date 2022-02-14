
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_cookie; char* zc_name; char* zc_value; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;
typedef scalar_t__ dmu_objset_type_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 int FUNC_3 (char*,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*,char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int VAR_8 ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(zfs_cmd_t *VAR_9)
{
 objset_t *VAR_10;
 dmu_objset_type_t VAR_11;
 boolean_t VAR_12 = VAR_9->zc_cookie & 1;
 char *VAR_13, *VAR_14;
 boolean_t VAR_15 = VAR_0;
 int VAR_16;





 VAR_9->zc_name[sizeof (VAR_9->zc_name) - 1] = '\0';
 VAR_9->zc_value[sizeof (VAR_9->zc_value) - 1] = '\0';

 VAR_13 = FUNC_9(VAR_9->zc_name, '#');
 if (VAR_13 != ((void*)0)) {

  VAR_14 = FUNC_9(VAR_9->zc_value, '#');
  if (VAR_14 == ((void*)0))
   return (FUNC_0(VAR_4));


  if (VAR_12)
   return (FUNC_0(VAR_5));

  *VAR_13 = '\0';
  *VAR_14 = '\0';
  if (FUNC_10(VAR_9->zc_name, VAR_9->zc_value) == 0) {
   VAR_16 = FUNC_6(VAR_9->zc_name,
       VAR_13 + 1, VAR_14 + 1);
  } else {
   VAR_16 = FUNC_0(VAR_6);
  }
  *VAR_13 = '#';
  *VAR_14 = '#';
  return (VAR_16);
 }


 if (FUNC_1(VAR_9->zc_name, ((void*)0), ((void*)0)) != 0 ||
     FUNC_1(VAR_9->zc_value, ((void*)0), ((void*)0)) != 0 ||
     FUNC_9(VAR_9->zc_name, '%') || FUNC_9(VAR_9->zc_value, '%'))
  return (FUNC_0(VAR_4));

 VAR_16 = FUNC_3(VAR_9->zc_name, VAR_7, &VAR_10);
 if (VAR_16 != 0)
  return (VAR_16);
 VAR_11 = FUNC_5(VAR_10);
 FUNC_4(VAR_10, VAR_7);

 VAR_13 = FUNC_9(VAR_9->zc_name, '@');
 if (VAR_13 != ((void*)0)) {

  VAR_14 = FUNC_9(VAR_9->zc_value, '@');
  if (VAR_14 == ((void*)0))
   return (FUNC_0(VAR_4));
  *VAR_13 = '\0';
  *VAR_14 = '\0';
  if (FUNC_10(VAR_9->zc_name, VAR_9->zc_value) != 0) {
   VAR_16 = FUNC_0(VAR_6);
  } else {
   if (VAR_11 == VAR_1 && !VAR_15) {
    VAR_16 = FUNC_2(VAR_9->zc_name,
        VAR_8, VAR_13 + 1,
        VAR_12 ? VAR_3 : 0);
   }
   if (VAR_16 == 0) {
    VAR_16 = FUNC_7(VAR_9->zc_name,
        VAR_13 + 1, VAR_14 + 1, VAR_12);
   }
  }
  *VAR_13 = '@';
  *VAR_14 = '@';
  return (VAR_16);
 } else {




  return (FUNC_8(VAR_9->zc_name, VAR_9->zc_value));
 }
}
