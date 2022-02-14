
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_vardefn {int * fmt; } ;
struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_val_fmt ;
typedef scalar_t__ bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bhnd_nvram_data*) ;
 char* FUNC_2 (struct bhnd_nvram_data*,void*) ;
 void* FUNC_3 (struct bhnd_nvram_data*,void*,size_t*,scalar_t__*) ;
 struct bhnd_nvram_vardefn* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;
 int VAR_3 ;
 int * FUNC_6 (scalar_t__) ;

__attribute__((used)) static const void *
FUNC_7(struct bhnd_nvram_data *VAR_4, void *VAR_5,
    size_t *VAR_6, bhnd_nvram_type *VAR_7, const bhnd_nvram_val_fmt **VAR_8)
{
 const struct bhnd_nvram_vardefn *VAR_9;
 const char *VAR_10;
 const void *VAR_11;

 FUNC_0(FUNC_1(VAR_4) & VAR_1,
     ("instance does not advertise READ_PTR support"));


 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_11 == ((void*)0))
  return (((void*)0));





 VAR_10 = FUNC_2(VAR_4, VAR_5);



 if (FUNC_1(VAR_4) & VAR_0)
  VAR_10 = FUNC_5(VAR_10);



 VAR_9 = FUNC_4(VAR_10);
 if (VAR_9 != ((void*)0)) {
  FUNC_0(VAR_9->fmt != ((void*)0),
      ("NULL format for %s", VAR_10));
  *VAR_8 = VAR_9->fmt;
 } else if (*VAR_7 == VAR_2) {

  *VAR_8 = &VAR_3;
 } else {

  *VAR_8 = FUNC_6(*VAR_7);
 }

 return (VAR_11);
}
