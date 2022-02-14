
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sval ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;
typedef int bhnd_nvram_val ;
typedef scalar_t__ bhnd_nvram_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,void const*,size_t,void*,size_t*,scalar_t__) ;
 int FUNC_6 (void const*,size_t,scalar_t__,scalar_t__*,size_t*,scalar_t__) ;
 int FUNC_7 (char*,void const*,size_t,scalar_t__,void*,size_t*,int) ;

__attribute__((used)) static int
FUNC_8(bhnd_nvram_val *VAR_2, const void *VAR_3,
    size_t VAR_4, void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 bhnd_nvram_type VAR_8;
 ssize_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_2);
 FUNC_0(FUNC_1(VAR_8), ("invalid type"));


 if (VAR_7 != VAR_1)
  return (FUNC_5(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7));



 if (FUNC_2(VAR_8)) {
  int64_t VAR_11;
  size_t VAR_12;
  bhnd_nvram_type VAR_13;

  VAR_13 = VAR_0;
  VAR_12 = sizeof(VAR_11);


  VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_8, &VAR_11, &VAR_12,
      VAR_13);
  if (VAR_10)
   return (VAR_10);


  if (VAR_11 < 0)
   return (FUNC_7("%I64d", &VAR_11, VAR_12,
       VAR_13, VAR_5, VAR_6, VAR_7));
 }
 VAR_9 = FUNC_3(VAR_8) * 2;
 return (FUNC_7("0x%0*I64X", VAR_3, VAR_4, VAR_8,
     VAR_5, VAR_6, VAR_9));
}
