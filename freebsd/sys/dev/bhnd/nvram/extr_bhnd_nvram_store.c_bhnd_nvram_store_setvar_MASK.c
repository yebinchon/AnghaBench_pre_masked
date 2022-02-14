
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_store {int dummy; } ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bhnd_nvram_store*) ;
 int FUNC_1 (struct bhnd_nvram_store*) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct bhnd_nvram_store*,char const*,int *) ;
 int FUNC_4 (int *,int *,void const*,size_t,int ,int) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bhnd_nvram_store *VAR_3, const char *VAR_4,
    const void *VAR_5, size_t VAR_6, bhnd_nvram_type VAR_7)
{
 bhnd_nvram_val VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(&VAR_8, ((void*)0), VAR_5, VAR_6, VAR_7,
     VAR_1|VAR_0);
 if (VAR_9) {
  FUNC_2("error initializing value: %d\n", VAR_9);
  return (VAR_2);
 }

 FUNC_0(VAR_3);
 VAR_9 = FUNC_3(VAR_3, VAR_4, &VAR_8);
 FUNC_1(VAR_3);

 FUNC_5(&VAR_8);

 return (VAR_9);
}
