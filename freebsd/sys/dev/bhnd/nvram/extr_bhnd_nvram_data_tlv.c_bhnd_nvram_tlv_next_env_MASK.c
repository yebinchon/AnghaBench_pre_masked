
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bhnd_nvram_tlv_env {int dummy; } ;
struct bhnd_nvram_tlv {int data; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct bhnd_nvram_tlv_env* FUNC_1 (struct bhnd_nvram_tlv*,void*) ;
 int FUNC_2 (int ,size_t*,size_t*,scalar_t__*) ;
 void* FUNC_3 (struct bhnd_nvram_tlv*,size_t) ;

__attribute__((used)) static struct bhnd_nvram_tlv_env *
FUNC_4(struct bhnd_nvram_tlv *VAR_2, size_t *VAR_3,
    void **VAR_4)
{
 uint8_t VAR_5;
 int VAR_6;


 do {
  void *VAR_7;
  size_t VAR_8;


  VAR_6 = FUNC_2(VAR_2->data, VAR_3, &VAR_8,
      &VAR_5);
  if (VAR_6) {
   FUNC_0("unexpected error in next_record(): %d\n",
       VAR_6);
   return (((void*)0));
  }


  if (VAR_5 != VAR_1)
   continue;


  VAR_7 = FUNC_3(VAR_2, VAR_8);


  if (VAR_4 != ((void*)0))
   *VAR_4 = VAR_7;

  return (FUNC_1(VAR_2, VAR_7));
 } while (VAR_5 != VAR_0);


 return (((void*)0));
}
