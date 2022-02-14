
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void const*,size_t,int,void*,size_t*,int) ;
 int FUNC_3 (void const*,size_t,int,void*,size_t*,int) ;
 int FUNC_4 (void const*,size_t,int,void*,size_t*,int) ;
 int FUNC_5 (void const*,size_t,int,void*,size_t*,int) ;
 int FUNC_6 (void const*,size_t,int,void*,size_t*,int) ;

int
FUNC_7(bhnd_nvram_val *VAR_0, const void *VAR_1,
    size_t VAR_2, void *VAR_3, size_t *VAR_4, bhnd_nvram_type VAR_5)
{
 bhnd_nvram_type VAR_6;

 VAR_6 = FUNC_1(VAR_0);
 switch (VAR_6) {
 case 133:
  return (FUNC_5(VAR_1, VAR_2, VAR_6, VAR_3, VAR_4,
      VAR_5));

 case 138:
  return (FUNC_3(VAR_1, VAR_2, VAR_6, VAR_3,
      VAR_4, VAR_5));

 case 132:
 case 139:
  return (FUNC_6(VAR_1, VAR_2, VAR_6, VAR_3,
      VAR_4, VAR_5));

 case 140:
  return (FUNC_2(VAR_1, VAR_2, VAR_6, VAR_3, VAR_4,
      VAR_5));

 case 128:
 case 131:
 case 130:
 case 129:
 case 134:
 case 137:
 case 136:
 case 135:
  return (FUNC_4(VAR_1, VAR_2, VAR_6, VAR_3, VAR_4,
      VAR_5));
 default:
  FUNC_0("missing encode_elem() implementation");
 }
}
