
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u_char ;
typedef int bhnd_nvram_type ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (void const*,size_t,int ,int) ;

const void *
FUNC_4(const void *VAR_0, size_t VAR_1, bhnd_nvram_type VAR_2,
    const void *VAR_3, size_t *VAR_4)
{
 const u_char *VAR_5;
 size_t VAR_6;


 if (VAR_3 == ((void*)0)) {

  if (VAR_1 == 0)
   return (((void*)0));

  *VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, 1);
  return (VAR_0);
 }


 FUNC_0(VAR_3 >= (const void *)VAR_0, ("invalid cookiep"));
 VAR_5 = (const u_char *)VAR_3 + *VAR_4;
 VAR_6 = (size_t)(VAR_5 - (const u_char *)VAR_0);

 if (VAR_6 >= VAR_1) {

  return (((void*)0));
 }


 *VAR_4 = FUNC_3(VAR_5, VAR_1 - VAR_6, VAR_2, 1);
 if (VAR_1 - VAR_6 < *VAR_4) {
  FUNC_1("short element of type %s -- misaligned "
      "representation", FUNC_2(VAR_2));
  return (((void*)0));
 }

 return (VAR_5);
}
