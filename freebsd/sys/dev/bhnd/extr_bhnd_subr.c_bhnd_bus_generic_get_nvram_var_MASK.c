
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int bhnd_nvram_type ;


 int FUNC_0 (int *,int *,char const*,void*,size_t*,int ) ;
 int FUNC_1 (int *,char const*,void*,size_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (int *) ;

int
FUNC_4(device_t VAR_2, device_t VAR_3, const char *VAR_4,
    void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 device_t VAR_8;
 device_t VAR_9;


 VAR_1;


 if ((VAR_8 = FUNC_2(VAR_2, "bhnd_nvram", -1)) != ((void*)0))
  return FUNC_1(VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);


 if ((VAR_9 = FUNC_3(VAR_2)) == ((void*)0))
  return (VAR_0);

 return (FUNC_0(FUNC_3(VAR_2), VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7));
}
