
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void const*,size_t,int,size_t*,void*,size_t*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void const*,size_t,int ,void*,size_t*,int ) ;

__attribute__((used)) static int
FUNC_4(bhnd_nvram_val *VAR_1,
    const void *VAR_2, size_t VAR_3, void *VAR_4, size_t *VAR_5,
    bhnd_nvram_type VAR_6)
{
 size_t VAR_7;
 int VAR_8;



 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, 16, &VAR_7, VAR_4,
      VAR_5, VAR_6);
  if (VAR_8)
   return (VAR_8);

  if (VAR_7 != VAR_3)
   return (VAR_0);

  return (0);
 }


 return (FUNC_3(VAR_2, VAR_3,
     FUNC_2(VAR_1), VAR_4, VAR_5, VAR_6));
}
