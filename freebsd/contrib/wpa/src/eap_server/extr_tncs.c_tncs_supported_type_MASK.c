
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {int* supported_types; size_t num_supported_types; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tnc_if_imv *VAR_2, unsigned int VAR_3)
{
 size_t VAR_4;
 unsigned int VAR_5, VAR_6;

 if (VAR_2 == ((void*)0) || VAR_2->supported_types == ((void*)0))
  return 0;

 VAR_5 = VAR_3 >> 8;
 VAR_6 = VAR_3 & 0xff;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_supported_types; VAR_4++) {
  unsigned int VAR_7, VAR_8;
  VAR_7 = VAR_2->supported_types[VAR_4] >> 8;
  VAR_8 = VAR_2->supported_types[VAR_4] & 0xff;
  if ((VAR_5 == VAR_7 || VAR_7 == VAR_1) &&
      (VAR_6 == VAR_8 || VAR_8 == VAR_0))
   return 1;
 }

 return 0;
}
