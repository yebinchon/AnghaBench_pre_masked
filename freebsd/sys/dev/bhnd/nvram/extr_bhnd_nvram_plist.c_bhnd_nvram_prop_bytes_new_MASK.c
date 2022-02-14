
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;
typedef int bhnd_nvram_prop ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,int *) ;
 int FUNC_2 (int **,int *,void const*,size_t,int ,int ) ;
 int FUNC_3 (int *) ;

bhnd_nvram_prop *
FUNC_4(const char *VAR_2, const void *VAR_3, size_t VAR_4,
    bhnd_nvram_type VAR_5)
{
 bhnd_nvram_prop *VAR_6;
 bhnd_nvram_val *VAR_7;
 int VAR_8;


 VAR_8 = FUNC_2(&VAR_7, ((void*)0), VAR_3, VAR_4, VAR_5,
     VAR_0);
 if (VAR_8) {
  if (VAR_8 != VAR_1) {
   FUNC_0("invalid input data; initialization "
       "failed: %d\n", VAR_8);
  }

  return (((void*)0));
 }


 VAR_6 = FUNC_1(VAR_2, VAR_7);


 FUNC_3(VAR_7);
 return (VAR_6);
}
