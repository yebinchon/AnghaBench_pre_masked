
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_store {int data_caps; int data; int * root_path; } ;
typedef int bhnd_nvstore_name_info ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int VAR_2 ;
 char* FUNC_3 (int ,void**) ;
 int FUNC_4 (char const*,int ,int,int *) ;
 int FUNC_5 (struct bhnd_nvram_store*,int *,void*) ;

__attribute__((used)) static int
FUNC_6(struct bhnd_nvram_store *VAR_3)
{
 const char *VAR_4;
 void *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3, VAR_2);



 if (!(VAR_3->data_caps & VAR_0)) {
  FUNC_1(VAR_3->root_path != ((void*)0), ("missing root path"));
  return (0);
 }


 VAR_5 = ((void*)0);
 while ((VAR_4 = FUNC_3(VAR_3->data, &VAR_5))) {
  bhnd_nvstore_name_info VAR_7;


  VAR_6 = FUNC_4(VAR_4,
      VAR_1, VAR_3->data_caps, &VAR_7);
  if (VAR_6)
   return (VAR_6);


  VAR_6 = FUNC_5(VAR_3, &VAR_7, VAR_5);
  if (VAR_6) {
   FUNC_2("failed to register path for %s: %d\n",
       VAR_4, VAR_6);
   return (VAR_6);
  }
 }

 return (0);
}
