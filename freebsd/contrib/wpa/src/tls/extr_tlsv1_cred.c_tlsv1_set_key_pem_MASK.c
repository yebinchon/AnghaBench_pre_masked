
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_private_key {int dummy; } ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int const*,int,size_t*) ;
 struct crypto_private_key* FUNC_1 (unsigned char*,size_t,int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int * FUNC_4 (char*,int const*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static struct crypto_private_key * FUNC_6(const u8 *VAR_5, size_t VAR_6)
{
 const u8 *VAR_7, *VAR_8;
 unsigned char *VAR_9;
 size_t VAR_10;
 struct crypto_private_key *VAR_11;

 VAR_7 = FUNC_4(VAR_3, VAR_5, VAR_6);
 if (!VAR_7) {
  VAR_7 = FUNC_4(VAR_1, VAR_5, VAR_6);
  if (!VAR_7)
   return ((void*)0);
  VAR_7 += FUNC_3(VAR_1);
  VAR_8 = FUNC_4(VAR_2, VAR_7, VAR_5 + VAR_6 - VAR_7);
  if (!VAR_8)
   return ((void*)0);
 } else {
  const u8 *VAR_12;
  VAR_7 += FUNC_3(VAR_3);
  VAR_8 = FUNC_4(VAR_4, VAR_7, VAR_5 + VAR_6 - VAR_7);
  if (!VAR_8)
   return ((void*)0);
  VAR_12 = FUNC_4("Proc-Type: 4,ENCRYPTED", VAR_7, VAR_8 - VAR_7);
  if (VAR_12) {
   FUNC_5(VAR_0, "TLSv1: Unsupported private key "
       "format (Proc-Type/DEK-Info)");
   return ((void*)0);
  }
 }

 VAR_9 = FUNC_0(VAR_7, VAR_8 - VAR_7, &VAR_10);
 if (!VAR_9)
  return ((void*)0);
 VAR_11 = FUNC_1(VAR_9, VAR_10, ((void*)0));
 FUNC_2(VAR_9);
 return VAR_11;
}
