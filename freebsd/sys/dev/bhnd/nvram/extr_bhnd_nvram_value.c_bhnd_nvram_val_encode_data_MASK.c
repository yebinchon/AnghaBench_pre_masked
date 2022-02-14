
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bhnd_nvram_type ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (void const*,size_t,int ,void*,size_t*,scalar_t__) ;
 int FUNC_2 (char*,void const*,size_t,int ,void*,size_t*,char*) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_2, size_t VAR_3, bhnd_nvram_type VAR_4,
    void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 FUNC_0(VAR_4 == VAR_0,
     ("unsupported type: %d", VAR_4));


 switch (VAR_7) {
 case 129:
 case 128:



  return (FUNC_2("H%[]02hhX", VAR_2, VAR_3,
      VAR_1, VAR_5, VAR_6, ""));

 default:


  return (FUNC_1(VAR_2, VAR_3,
      VAR_1, VAR_5, VAR_6, VAR_7));
 }
}
