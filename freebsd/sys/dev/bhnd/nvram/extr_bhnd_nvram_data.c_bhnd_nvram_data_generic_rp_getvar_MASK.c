
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
 int FUNC_3 (int *,void*,size_t*,int ) ;
 int FUNC_4 (int *,int const*,void const*,size_t,int ,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bhnd_nvram_data *VAR_3, void *VAR_4,
    void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 bhnd_nvram_val VAR_8;
 const bhnd_nvram_val_fmt *VAR_9;
 const void *VAR_10;
 bhnd_nvram_type VAR_11;
 size_t VAR_12;
 int VAR_13;

 FUNC_0(FUNC_1(VAR_3) & VAR_0,
     ("instance does not advertise READ_PTR support"));


 VAR_10 = FUNC_2(VAR_3, VAR_4, &VAR_12, &VAR_11,
     &VAR_9);
 if (VAR_10 == ((void*)0))
  return (VAR_2);


 VAR_13 = FUNC_4(&VAR_8, VAR_9, VAR_10, VAR_12, VAR_11,
     VAR_1);
 if (VAR_13)
  return (VAR_13);

 VAR_13 = FUNC_3(&VAR_8, VAR_5, VAR_6, VAR_7);


 FUNC_5(&VAR_8);
 return (VAR_13);
}
