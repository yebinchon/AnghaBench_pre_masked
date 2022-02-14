
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int bhnd_nvram_val_storage ;
struct TYPE_6__ {scalar_t__ native_type; } ;
typedef TYPE_1__ bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_val ;
typedef scalar_t__ bhnd_nvram_type ;


 int FUNC_0 (TYPE_1__ const*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int *,size_t,scalar_t__,int ) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__ const**,void const*,size_t,scalar_t__) ;
 int FUNC_4 (int *,void const*,size_t,scalar_t__,int ) ;
 int FUNC_5 (void const*,size_t,scalar_t__,void*,size_t*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(bhnd_nvram_val *VAR_1,
    bhnd_nvram_val_storage VAR_2, const bhnd_nvram_val_fmt *VAR_3,
    const void *VAR_4, size_t VAR_5, bhnd_nvram_type VAR_6, uint32_t VAR_7)
{
 void *VAR_8;
 bhnd_nvram_type VAR_9;
 size_t VAR_10;
 int VAR_11;



 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_2(VAR_6);



 if ((VAR_11 = FUNC_3(&VAR_3, VAR_4, VAR_5, VAR_6))) {



  VAR_9 = VAR_3->native_type;
 } else {

  VAR_9 = VAR_6;
 }


 *VAR_1 = FUNC_0(VAR_3, VAR_2);


 if (VAR_9 == VAR_6) {
  VAR_11 = FUNC_4(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_11)
   return (VAR_11);

  return (0);
 }


 VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_6, ((void*)0), &VAR_10, VAR_9);
 if (VAR_11)
  return (VAR_11);


 VAR_8 = FUNC_1(VAR_1, VAR_10, VAR_9, VAR_7);
 if (VAR_8 == ((void*)0))
  return (VAR_0);


 VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_8, &VAR_10, VAR_9);
 if (VAR_11)
  return (VAR_11);

 return (0);
}
