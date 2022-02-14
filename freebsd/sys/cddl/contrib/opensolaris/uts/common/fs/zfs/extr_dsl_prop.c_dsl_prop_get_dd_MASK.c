
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
typedef int objset_t ;
struct TYPE_7__ {struct TYPE_7__* dd_parent; TYPE_3__* dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
typedef int boolean_t ;
struct TYPE_9__ {int dd_props_zapobj; } ;
struct TYPE_8__ {int * dp_meta_objset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,int,int,void*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 TYPE_4__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 char* FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int ,char const*,int,int,void*) ;
 scalar_t__ FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

int
FUNC_13(dsl_dir_t *VAR_7, const char *VAR_8,
    int VAR_9, int VAR_10, void *VAR_11, char *VAR_12, boolean_t VAR_13)
{
 int VAR_14 = VAR_2;
 dsl_dir_t *VAR_15 = VAR_7;
 objset_t *VAR_16 = VAR_7->dd_pool->dp_meta_objset;
 zfs_prop_t VAR_17;
 boolean_t VAR_18;
 boolean_t VAR_19 = VAR_0;
 char *VAR_20;
 char *VAR_21;

 FUNC_0(FUNC_5(VAR_7->dd_pool));

 if (VAR_12)
  VAR_12[0] = '\0';

 VAR_17 = FUNC_11(VAR_8);
 VAR_18 = (VAR_17 == VAR_4 || FUNC_12(VAR_17));
 VAR_20 = FUNC_6("%s%s", VAR_8, VAR_3);
 VAR_21 = FUNC_6("%s%s", VAR_8, VAR_5);





 for (; VAR_7 != ((void*)0); VAR_7 = VAR_7->dd_parent) {
  if (VAR_7 != VAR_15 || VAR_13) {
   if (!VAR_18)
    break;
   VAR_19 = VAR_1;
  }


  VAR_14 = FUNC_10(VAR_16, FUNC_4(VAR_7)->dd_props_zapobj,
      VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_14 != VAR_2) {
   if (VAR_12 != ((void*)0) && VAR_14 == 0)
    FUNC_3(VAR_7, VAR_12);
   break;
  }





  VAR_14 = FUNC_9(VAR_16, FUNC_4(VAR_7)->dd_props_zapobj,
      VAR_20);
  if (VAR_14 != 0 && VAR_14 != VAR_2)
   break;

  if (VAR_14 == VAR_2) {

   VAR_14 = FUNC_10(VAR_16, FUNC_4(VAR_7)->dd_props_zapobj,
       VAR_21, VAR_9, VAR_10, VAR_11);
   if (VAR_14 != VAR_2) {
    if (VAR_12 != ((void*)0) && VAR_14 == 0) {
     if (VAR_19) {
      FUNC_3(VAR_7, VAR_12);
     } else {
      (void) FUNC_7(VAR_12,
          VAR_6);
     }
    }
    break;
   }
  }







  VAR_14 = FUNC_1(VAR_2);
 }

 if (VAR_14 == VAR_2)
  VAR_14 = FUNC_2(VAR_17, VAR_9, VAR_10, VAR_11);

 FUNC_8(VAR_20);
 FUNC_8(VAR_21);

 return (VAR_14);
}
