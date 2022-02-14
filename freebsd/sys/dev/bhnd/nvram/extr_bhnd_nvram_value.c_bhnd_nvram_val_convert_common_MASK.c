
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int bhnd_nvram_val_storage ;
struct TYPE_14__ {int native_type; } ;
typedef TYPE_1__ bhnd_nvram_val_fmt ;
struct TYPE_15__ {int data_storage; } ;
typedef TYPE_2__ bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;





 TYPE_2__ FUNC_0 (TYPE_1__ const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (TYPE_2__*,size_t,int ,int) ;
 void* FUNC_2 (TYPE_2__*,size_t*,int *) ;
 int FUNC_3 (TYPE_2__*,void*,size_t*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__ const**,void const*,size_t,int ) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_1__ const*,void const*,size_t,int ,int) ;

__attribute__((used)) static int
FUNC_6(bhnd_nvram_val *VAR_3,
    bhnd_nvram_val_storage VAR_4, const bhnd_nvram_val_fmt *VAR_5,
    bhnd_nvram_val *VAR_6, uint32_t VAR_7)
{
 const void *VAR_8;
 void *VAR_9;
 bhnd_nvram_type VAR_10, VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;



 VAR_8 = FUNC_2(VAR_6, &VAR_12, &VAR_10);
 if (FUNC_4(&VAR_5, VAR_8, VAR_12, VAR_10) == 0) {

  switch (VAR_6->data_storage) {
  case 128:
  case 129:
  case 130:
  case 132:
   break;

  case 131:


   if (VAR_7 & VAR_0)
    VAR_7 |= VAR_1;

   break;
  }


  return (FUNC_5(VAR_3, VAR_4, VAR_5, VAR_8,
      VAR_12, VAR_10, VAR_7));
 }


 VAR_11 = VAR_5->native_type;


 *VAR_3 = FUNC_0(VAR_5, VAR_4);


 if ((VAR_14 = FUNC_3(VAR_6, ((void*)0), &VAR_13, VAR_11)))
  return (VAR_14);


 VAR_9 = FUNC_1(VAR_3, VAR_13, VAR_11, VAR_7);
 if (VAR_9 == ((void*)0))
  return (VAR_2);


 if ((VAR_14 = FUNC_3(VAR_6, VAR_9, &VAR_13, VAR_11)))
  return (VAR_14);

 return (0);
}
