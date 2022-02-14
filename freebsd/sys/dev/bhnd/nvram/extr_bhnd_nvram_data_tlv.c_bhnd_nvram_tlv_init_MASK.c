
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_tlv_env {char* envp; } ;
struct bhnd_nvram_tlv {scalar_t__ count; int * data; } ;
struct bhnd_nvram_io {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (struct bhnd_nvram_tlv_env*) ;
 int * FUNC_3 (struct bhnd_nvram_io*,int,size_t) ;
 int FUNC_4 (char*,size_t,char,int *,size_t*,int *,int *) ;
 struct bhnd_nvram_tlv_env* FUNC_5 (struct bhnd_nvram_tlv*,size_t*,int *) ;
 int FUNC_6 (struct bhnd_nvram_io*,size_t*) ;

__attribute__((used)) static int
FUNC_7(struct bhnd_nvram_tlv *VAR_2, struct bhnd_nvram_io *VAR_3)
{
 struct bhnd_nvram_tlv_env *VAR_4;
 size_t VAR_5;
 size_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_2->data == ((void*)0), ("tlv data already initialized"));


 if ((VAR_7 = FUNC_6(VAR_3, &VAR_5)))
  return (VAR_7);


 if ((VAR_2->data = FUNC_3(VAR_3, 0x0, VAR_5)) == ((void*)0))
  return (VAR_1);


 VAR_2->count = 0;
 VAR_6 = 0;
 while ((VAR_4 = FUNC_5(VAR_2, &VAR_6, ((void*)0))) != ((void*)0)) {
  size_t VAR_8;
  size_t VAR_9;


  VAR_8 = FUNC_2(VAR_4);
  if (VAR_8 == 0) {
   FUNC_1("cannot parse zero-length TLV_ENV record "
       "data\n");
   return (VAR_0);
  }




  VAR_7 = FUNC_4(VAR_4->envp, VAR_8, '=', ((void*)0),
      &VAR_9, ((void*)0), ((void*)0));
  if (VAR_7) {
   FUNC_1("error parsing TLV_ENV data: %d\n", VAR_7);
   return (VAR_7);
  }


  *(VAR_4->envp + VAR_9) = '\0';


  VAR_2->count++;
 };

 return (0);
}
