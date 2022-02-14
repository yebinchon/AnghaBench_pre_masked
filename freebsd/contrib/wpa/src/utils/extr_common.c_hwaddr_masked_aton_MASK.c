
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 char* FUNC_0 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (scalar_t__*,int,int ) ;

int FUNC_3(const char *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 VAR_4)
{
 const char *VAR_5;


 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5)
  return -1;


 if (*VAR_5 == '\0' || FUNC_1((unsigned char) *VAR_5)) {

  FUNC_2(VAR_3, 0xff, VAR_0);
 } else if (VAR_4 && *VAR_5 == '/') {

  VAR_5 = FUNC_0(VAR_5 + 1, VAR_3);

  if (!VAR_5)
   return -1;
 } else {

  return -1;
 }

 return 0;
}
