
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bhnd_nvram_store {int data; TYPE_1__* root_path; } ;
struct TYPE_6__ {int pending; int path_str; } ;
typedef TYPE_1__ bhnd_nvstore_path ;
struct TYPE_7__ {int alias; } ;
typedef TYPE_2__ bhnd_nvstore_alias ;
typedef int bhnd_nvram_val ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_1 (char**,char*,int ,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char const*,int *,int **) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,char const*,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (struct bhnd_nvram_store*,int ) ;
 void* FUNC_12 (struct bhnd_nvram_store*,TYPE_1__*,char const*) ;

int
FUNC_13(struct bhnd_nvram_store *VAR_2,
    bhnd_nvstore_path *VAR_3, const char *VAR_4, bhnd_nvram_val *VAR_5)
{
 bhnd_nvram_val *VAR_6;
 const char *VAR_7;
 void *VAR_8;
 char *VAR_9;
 int VAR_10;
 bool VAR_11;

 VAR_9 = ((void*)0);
 VAR_6 = ((void*)0);



 VAR_11 = 0;
 VAR_8 = FUNC_12(VAR_2, VAR_3, VAR_4);
 if (VAR_8 != ((void*)0)) {

  VAR_11 = 1;


  VAR_7 = FUNC_5(VAR_2->data, VAR_8);
 } else if (VAR_3 == VAR_2->root_path) {

  VAR_7 = VAR_4;
 } else {
  bhnd_nvstore_alias *VAR_12;
  int VAR_13;



  VAR_12 = FUNC_11(VAR_2, VAR_3->path_str);
  if (VAR_12 != ((void*)0)) {

   VAR_13 = FUNC_1(&VAR_9, "%lu:%s", VAR_12->alias,
       VAR_4);
  } else {

   VAR_13 = FUNC_1(&VAR_9, "%s/%s",
       VAR_3->path_str, VAR_4);
  }

  if (VAR_13 < 0)
   return (VAR_1);

  VAR_7 = VAR_9;
 }


 if (FUNC_10(VAR_5) == VAR_0) {
  VAR_10 = FUNC_4(VAR_2->data, VAR_7);
  if (VAR_10) {
   FUNC_0("cannot unset property %s: %d\n", VAR_7,
       VAR_10);
   goto cleanup;
  }

  if ((VAR_6 = FUNC_8(VAR_5)) == ((void*)0)) {
   VAR_10 = VAR_1;
   goto cleanup;
  }
 } else {
  VAR_10 = FUNC_3(VAR_2->data, VAR_7,
      VAR_5, &VAR_6);
  if (VAR_10) {
   FUNC_0("cannot set property %s: %d\n", VAR_7,
       VAR_10);
   goto cleanup;
  }
 }


 if (FUNC_10(VAR_5) == VAR_0 &&
     !VAR_11)
 {



  FUNC_6(VAR_3->pending, VAR_4);
 } else {

  VAR_10 = FUNC_7(VAR_3->pending, VAR_4,
      VAR_6);
  if (VAR_10)
   goto cleanup;
 }


 VAR_10 = 0;

cleanup:
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9);

 if (VAR_6 != ((void*)0))
  FUNC_9(VAR_6);

 return (VAR_10);
}
