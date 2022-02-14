
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct tlsv1_credentials {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (char const*,size_t*) ;
 int FUNC_2 (struct tlsv1_credentials*,int const*,size_t) ;
 int FUNC_3 (int ,char*,char const*) ;

int FUNC_4(struct tlsv1_credentials *VAR_1, const char *VAR_2,
         const u8 *VAR_3, size_t VAR_4)
{
 if (VAR_3)
  return FUNC_2(VAR_1, VAR_3, VAR_4);

 if (VAR_2) {
  u8 *VAR_5;
  size_t VAR_6;
  int VAR_7;

  VAR_5 = (u8 *) FUNC_1(VAR_2, &VAR_6);
  if (VAR_5 == ((void*)0)) {
   FUNC_3(VAR_0, "TLSv1: Failed to read '%s'",
       VAR_2);
   return -1;
  }

  VAR_7 = FUNC_2(VAR_1, VAR_5, VAR_6);
  FUNC_0(VAR_5);
  return VAR_7;
 }

 return 0;
}
