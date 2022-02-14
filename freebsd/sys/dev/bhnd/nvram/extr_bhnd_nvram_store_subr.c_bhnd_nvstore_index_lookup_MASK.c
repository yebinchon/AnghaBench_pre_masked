
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bhnd_nvram_store {int data_caps; int data; } ;
struct TYPE_3__ {int count; void** cookiep; } ;
typedef TYPE_1__ bhnd_nvstore_index ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 char* FUNC_2 (int ,void*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

void *
FUNC_5(struct bhnd_nvram_store *VAR_2,
    bhnd_nvstore_index *VAR_3, const char *VAR_4)
{
 void *VAR_5;
 const char *VAR_6;
 size_t VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_3 != ((void*)0), ("NULL index"));




 if (VAR_3->count == 0)
  return (((void*)0));

 VAR_10 = VAR_2->data_caps;
 VAR_7 = 0;
 VAR_9 = VAR_3->count - 1;

 while (VAR_9 >= VAR_7) {

  VAR_8 = (VAR_7 + VAR_9) / 2;
  VAR_5 = VAR_3->cookiep[VAR_8];


  VAR_6 = FUNC_2(VAR_2->data, VAR_5);


  if (VAR_10 & VAR_0)
   VAR_6 = FUNC_3(VAR_6);


  VAR_11 = FUNC_4(VAR_6, VAR_4);
  if (VAR_11 < 0) {

   VAR_7 = VAR_8 + 1;
  } else if (VAR_11 > 0) {

   if (VAR_8 == 0)
    break;
   VAR_9 = VAR_8 - 1;
  } else if (VAR_11 == 0) {
   size_t VAR_12;
   VAR_12 = VAR_8;
   while (VAR_12 > 0) {
    void *VAR_13;
    const char *VAR_14;


    VAR_12--;
    VAR_13 = VAR_3->cookiep[VAR_12];
    VAR_14 = FUNC_2(VAR_2->data,
        VAR_13);


    if (VAR_10 & VAR_0) {
     VAR_14 = FUNC_3(
         VAR_14);
    }



    if (FUNC_4(VAR_6, VAR_14) != 0)
     return (VAR_5);




    VAR_5 = VAR_13;
   }

   return (VAR_5);
  }
 }


 return (((void*)0));
}
