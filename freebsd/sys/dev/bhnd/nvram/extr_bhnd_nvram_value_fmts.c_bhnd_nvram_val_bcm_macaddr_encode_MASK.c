
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int *,size_t*,int *) ;
 int FUNC_2 (int *,char*,void*,size_t*,char*) ;
 int FUNC_3 (void const*,size_t,int ,void*,size_t*,int ) ;

__attribute__((used)) static int
FUNC_4(bhnd_nvram_val *VAR_1, void *VAR_2,
    size_t *VAR_3, bhnd_nvram_type VAR_4)
{
 const void *VAR_5;
 bhnd_nvram_type VAR_6;
 size_t VAR_7;





 if (FUNC_0(VAR_4) == VAR_0) {
  return (FUNC_2(VAR_1, "%[]02hhX", VAR_2, VAR_3,
      ":"));
 }


 VAR_5 = FUNC_1(VAR_1, &VAR_7, &VAR_6);
 return (FUNC_3(VAR_5, VAR_7, VAR_6, VAR_2, VAR_3, VAR_4));}
