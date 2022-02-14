
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct tlsv1_credentials {int * key; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (char const*,size_t*) ;
 int FUNC_3 (struct tlsv1_credentials*,int const*,size_t,char const*) ;
 int FUNC_4 (int ,char*,char const*) ;

int FUNC_5(struct tlsv1_credentials *VAR_1,
     const char *VAR_2,
     const char *VAR_3,
     const u8 *VAR_4,
     size_t VAR_5)
{
 FUNC_0(VAR_1->key);
 VAR_1->key = ((void*)0);

 if (VAR_4)
  return FUNC_3(VAR_1, VAR_4,
         VAR_5,
         VAR_3);

 if (VAR_2) {
  u8 *VAR_6;
  size_t VAR_7;
  int VAR_8;

  VAR_6 = (u8 *) FUNC_2(VAR_2, &VAR_7);
  if (VAR_6 == ((void*)0)) {
   FUNC_4(VAR_0, "TLSv1: Failed to read '%s'",
       VAR_2);
   return -1;
  }

  VAR_8 = FUNC_3(VAR_1, VAR_6, VAR_7, VAR_3);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 return 0;
}
