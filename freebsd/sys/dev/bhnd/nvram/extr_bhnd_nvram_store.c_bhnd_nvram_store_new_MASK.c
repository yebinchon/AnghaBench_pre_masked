
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_store {int root_path; int * data_opts; int data_caps; int data; int * aliases; scalar_t__ num_aliases; int * paths; scalar_t__ num_paths; } ;
struct bhnd_nvram_data {int dummy; } ;


 int FUNC_0 (struct bhnd_nvram_store*) ;
 int FUNC_1 (struct bhnd_nvram_store*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bhnd_nvram_store*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 struct bhnd_nvram_store* FUNC_5 (int,int) ;
 int FUNC_6 (struct bhnd_nvram_data*) ;
 int * FUNC_7 (struct bhnd_nvram_data*) ;
 int FUNC_8 (struct bhnd_nvram_data*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct bhnd_nvram_store*) ;
 int FUNC_12 (struct bhnd_nvram_store*,int ,int ) ;
 int FUNC_13 (struct bhnd_nvram_store*) ;
 int FUNC_14 (struct bhnd_nvram_store*,int ,int ) ;
 size_t FUNC_15 (int *) ;

int
FUNC_16(struct bhnd_nvram_store **VAR_3,
    struct bhnd_nvram_data *VAR_4)
{
 struct bhnd_nvram_store *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_5(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (VAR_2);

 FUNC_1(VAR_5);
 FUNC_0(VAR_5);


 VAR_5->num_paths = 0;
 for (size_t VAR_7 = 0; VAR_7 < FUNC_15(VAR_5->paths); VAR_7++)
  FUNC_4(&VAR_5->paths[VAR_7]);


 VAR_5->num_aliases = 0;
 for (size_t VAR_8 = 0; VAR_8 < FUNC_15(VAR_5->aliases); VAR_8++)
  FUNC_4(&VAR_5->aliases[VAR_8]);


 VAR_5->data = FUNC_8(VAR_4);
 VAR_5->data_caps = FUNC_6(VAR_4);
 VAR_5->data_opts = FUNC_7(VAR_4);
 if (VAR_5->data_opts != ((void*)0)) {
  FUNC_10(VAR_5->data_opts);
 } else {
  VAR_5->data_opts = FUNC_9();
  if (VAR_5->data_opts == ((void*)0)) {
   VAR_6 = VAR_2;
   goto cleanup;
  }
 }


 VAR_6 = FUNC_14(VAR_5, VAR_0,
     VAR_1);
 if (VAR_6)
  goto cleanup;

 VAR_5->root_path = FUNC_12(VAR_5, VAR_0,
     VAR_1);
 FUNC_3(VAR_5->root_path, ("missing root path"));



 if ((VAR_6 = FUNC_13(VAR_5)))
  goto cleanup;

 *VAR_3 = VAR_5;

 FUNC_2(VAR_5);
 return (0);

cleanup:
 FUNC_2(VAR_5);
 FUNC_11(VAR_5);
 return (VAR_6);
}
