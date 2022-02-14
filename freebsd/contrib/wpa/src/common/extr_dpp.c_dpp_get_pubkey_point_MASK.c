
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int used; } ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned char**) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (int ,char*,...) ;
 struct wpabuf* FUNC_6 (int) ;
 int FUNC_7 (struct wpabuf*) ;
 unsigned char* FUNC_8 (struct wpabuf*) ;
 unsigned char* FUNC_9 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_10(EVP_PKEY *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 EC_KEY *VAR_6;
 struct wpabuf *VAR_7;
 unsigned char *VAR_8;

 VAR_6 = FUNC_2(VAR_2);
 if (!VAR_6)
  return ((void*)0);
 FUNC_1(VAR_6, VAR_1);
 VAR_4 = FUNC_3(VAR_6, ((void*)0));
 if (VAR_4 <= 0) {
  FUNC_5(VAR_0,
      "DDP: Failed to determine public key encoding length");
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_7 = FUNC_6(VAR_4);
 if (!VAR_7) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_8 = FUNC_9(VAR_7, VAR_4);
 VAR_5 = FUNC_3(VAR_6, &VAR_8);
 FUNC_0(VAR_6);
 if (VAR_5 != VAR_4) {
  FUNC_5(VAR_0,
      "DDP: Failed to encode public key (res=%d/%d)",
      VAR_5, VAR_4);
  FUNC_7(VAR_7);
  return ((void*)0);
 }

 if (!VAR_3) {

  VAR_8 = FUNC_8(VAR_7);
  FUNC_4(VAR_8, VAR_8 + 1, VAR_4 - 1);
  VAR_7->used--;
 }

 return VAR_7;
}
