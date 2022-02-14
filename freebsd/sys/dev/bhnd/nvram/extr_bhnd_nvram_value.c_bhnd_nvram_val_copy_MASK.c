
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int val_storage; int refs; int data_storage; int fmt; } ;
typedef TYPE_1__ bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;



 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 void* FUNC_4 (TYPE_1__*,size_t*,int *) ;
 int FUNC_5 (TYPE_1__**,int ,void const*,size_t,int ,int) ;
 int FUNC_6 (int*) ;

bhnd_nvram_val *
FUNC_7(bhnd_nvram_val *VAR_3)
{
 bhnd_nvram_val *VAR_4;
 const void *VAR_5;
 bhnd_nvram_type VAR_6;
 size_t VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 switch (VAR_3->val_storage) {
 case 128:

  return (VAR_3);

 case 129:
  if (!FUNC_0(VAR_3)) {
   FUNC_6(&VAR_3->refs);
   return (VAR_3);
  }


  break;

 case 130:
  FUNC_1(VAR_3->refs == 1, ("non-allocated value has "
      "active refcount (%u)", VAR_3->refs));


  break;
 }



 switch (VAR_3->data_storage) {
 case 131:
 case 132:
 case 133:
 case 135:


  VAR_8 = VAR_0|VAR_1;
  break;
 case 134:
  VAR_8 = VAR_2;
  break;
 default:
  FUNC_3("invalid storage type: %d", VAR_3->data_storage);
 }


 VAR_5 = FUNC_4(VAR_3, &VAR_7, &VAR_6);
 VAR_9 = FUNC_5(&VAR_4, VAR_3->fmt, VAR_5, VAR_7, VAR_6,
     VAR_8);
 if (VAR_9) {
  FUNC_2("copy failed: %d", VAR_9);
  return (((void*)0));
 }

 return (VAR_4);
}
