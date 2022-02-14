
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* op_filter ) (TYPE_1__ const**,void const*,size_t,scalar_t__) ;scalar_t__ native_type; } ;
typedef TYPE_1__ bhnd_nvram_val_fmt ;
typedef scalar_t__ bhnd_nvram_type ;


 int VAR_0 ;
 int FUNC_0 (void const*,size_t,scalar_t__) ;
 int FUNC_1 (TYPE_1__ const**,void const*,size_t,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(const bhnd_nvram_val_fmt **VAR_1, const void *VAR_2,
    size_t VAR_3, bhnd_nvram_type VAR_4)
{
 const bhnd_nvram_val_fmt *VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5 = *VAR_1;


 if ((VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4)))
  return (VAR_7);



 if (VAR_5->op_filter == ((void*)0)) {
  if (VAR_4 == VAR_5->native_type)
   return (0);

  return (VAR_0);
 }



 VAR_7 = VAR_5->op_filter(&VAR_6, VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return (VAR_7);


 if (VAR_5 != VAR_6) {
  VAR_7 = FUNC_2(&VAR_6, VAR_2, VAR_3, VAR_4);
  if (VAR_7)
   return (VAR_7);


  *VAR_1 = VAR_6;
 }


 return (0);
}
