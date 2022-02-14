
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct bhnd_nvram_data*) ;
 void* FUNC_2 (struct bhnd_nvram_data*,void*,size_t*,int *,int const**) ;
 int FUNC_3 (int **,int const*,void const*,size_t,int ,int ) ;

int
FUNC_4(struct bhnd_nvram_data *VAR_3,
    void *VAR_4, bhnd_nvram_val **VAR_5)
{
 const bhnd_nvram_val_fmt *VAR_6;
 const void *VAR_7;
 bhnd_nvram_type VAR_8;
 size_t VAR_9;

 FUNC_0(FUNC_1(VAR_3) & VAR_0,
     ("instance does not advertise READ_PTR support"));


 VAR_7 = FUNC_2(VAR_3, VAR_4, &VAR_9, &VAR_8,
     &VAR_6);
 if (VAR_7 == ((void*)0))
  return (VAR_2);


 return (FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9, VAR_8,
     VAR_1));
}
