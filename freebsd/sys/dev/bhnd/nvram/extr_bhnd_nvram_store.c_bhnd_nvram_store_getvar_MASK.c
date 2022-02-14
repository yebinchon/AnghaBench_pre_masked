
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bhnd_nvram_store {int data; int data_caps; } ;
typedef int bhnd_nvstore_path ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ bhnd_nvstore_name_info ;
typedef int bhnd_nvram_type ;
typedef int bhnd_nvram_prop ;


 int FUNC_0 (struct bhnd_nvram_store*) ;
 int VAR_0 ;
 int FUNC_1 (struct bhnd_nvram_store*) ;
 int VAR_1 ;
 int FUNC_2 (int ,void*,void*,size_t*,int ) ;
 int FUNC_3 (int *,void*,size_t*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char const*,int ,int ,TYPE_1__*) ;
 void* FUNC_6 (struct bhnd_nvram_store*,int *,int ) ;
 int * FUNC_7 (struct bhnd_nvram_store*,int *,int ) ;
 int * FUNC_8 (struct bhnd_nvram_store*,TYPE_1__*) ;

int
FUNC_9(struct bhnd_nvram_store *VAR_2, const char *VAR_3,
    void *VAR_4, size_t *VAR_5, bhnd_nvram_type VAR_6)
{
 bhnd_nvstore_name_info VAR_7;
 bhnd_nvstore_path *VAR_8;
 bhnd_nvram_prop *VAR_9;
 void *VAR_10;
 int VAR_11;

 FUNC_0(VAR_2);


 VAR_11 = FUNC_5(VAR_3, VAR_0,
     VAR_2->data_caps, &VAR_7);
 if (VAR_11)
  goto finished;


 if ((VAR_8 = FUNC_8(VAR_2, &VAR_7)) == ((void*)0)) {
  VAR_11 = VAR_1;
  goto finished;
 }


 VAR_9 = FUNC_7(VAR_2, VAR_8, VAR_7.name);
 if (VAR_9 != ((void*)0)) {
  if (FUNC_4(VAR_9)) {

   VAR_11 = VAR_1;
  } else {
   VAR_11 = FUNC_3(VAR_9, VAR_4, VAR_5, VAR_6);
  }
  goto finished;
 }


 VAR_10 = FUNC_6(VAR_2, VAR_8, VAR_7.name);
 if (VAR_10 != ((void*)0)) {

  VAR_11 = FUNC_2(VAR_2->data, VAR_10, VAR_4, VAR_5,
       VAR_6);
  goto finished;
 }


 VAR_11 = VAR_1;

finished:
 FUNC_1(VAR_2);
 return (VAR_11);
}
