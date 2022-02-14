
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_tlv_env {char const* envp; } ;
struct bhnd_nvram_tlv {int dummy; } ;
struct bhnd_nvram_data {int dummy; } ;


 int FUNC_0 (char*) ;
 struct bhnd_nvram_tlv_env* FUNC_1 (struct bhnd_nvram_tlv*,size_t*,void**) ;
 size_t FUNC_2 (struct bhnd_nvram_tlv*,void*) ;

__attribute__((used)) static const char *
FUNC_3(struct bhnd_nvram_data *VAR_0, void **VAR_1)
{
 struct bhnd_nvram_tlv *VAR_2;
 struct bhnd_nvram_tlv_env *VAR_3;
 size_t VAR_4;

 VAR_2 = (struct bhnd_nvram_tlv *)VAR_0;


 if (*VAR_1 == ((void*)0)) {

  VAR_4 = 0x0;
  VAR_3 = FUNC_1(VAR_2, &VAR_4, VAR_1);
 } else {

  VAR_4 = FUNC_2(VAR_2, *VAR_1);
  VAR_3 = FUNC_1(VAR_2, &VAR_4, ((void*)0));
  if (VAR_3 == ((void*)0))
   FUNC_0("invalid cookiep; record missing");


  VAR_3 = FUNC_1(VAR_2, &VAR_4, VAR_1);
 }


 if (VAR_3 == ((void*)0))
  return (((void*)0));


 return (VAR_3->envp);
}
