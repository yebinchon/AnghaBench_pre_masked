
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct bhnd_nvram_store {int data_caps; int data; } ;
struct TYPE_4__ {int * pending; } ;
typedef TYPE_1__ bhnd_nvstore_path ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_prop ;
typedef int bhnd_nvram_plist ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,void*,int **) ;
 char* FUNC_2 (int ,void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char const*,int *) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (struct bhnd_nvram_store*,TYPE_1__*,void**) ;

__attribute__((used)) static int
FUNC_11(struct bhnd_nvram_store *VAR_4,
    bhnd_nvstore_path *VAR_5, bhnd_nvram_plist *VAR_6, uint32_t VAR_7)
{
 void *VAR_8, *VAR_9;
 int VAR_10;


 if (FUNC_0(VAR_7, VAR_3)) {
  bhnd_nvram_prop *VAR_11;

  VAR_11 = ((void*)0);
  while ((VAR_11 = FUNC_6(VAR_5->pending, VAR_11))) {

   if (!FUNC_0(VAR_7, VAR_2)) {
    if (FUNC_7(VAR_11))
     continue;
   }


   VAR_10 = FUNC_3(VAR_6, VAR_11);
   if (VAR_10)
    return (VAR_10);
  }
 }


 if (!FUNC_0(VAR_7, VAR_1))
  return (0);


 VAR_9 = ((void*)0);
 while ((VAR_8 = FUNC_10(VAR_4, VAR_5, &VAR_9))) {
  const char *VAR_12;
  bhnd_nvram_val *VAR_13;


  VAR_12 = FUNC_2(VAR_4->data, VAR_8);


  if (VAR_4->data_caps & VAR_0)
   VAR_12 = FUNC_8(VAR_12);


  if (FUNC_0(VAR_7, VAR_3)) {
   if (FUNC_5(VAR_5->pending, VAR_12))
    continue;
  }





  if (FUNC_5(VAR_6, VAR_12))
   continue;


  if ((VAR_10 = FUNC_1(VAR_4->data, VAR_8, &VAR_13)))
   return (VAR_10);


  VAR_10 = FUNC_4(VAR_6, VAR_12, VAR_13);
  FUNC_9(VAR_13);
  if (VAR_10)
   return (VAR_10);
 }

 return (0);
}
