
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {int tncs; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *) ;
 char* FUNC_3 () ;
 char* FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 struct wpabuf* FUNC_7 (size_t) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int * FUNC_10 (struct wpabuf*,int) ;
 int FUNC_11 (struct wpabuf*,char*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_12(struct eap_sm *VAR_1,
         struct eap_tnc_data *VAR_2)
{
 struct wpabuf *VAR_3;
 u8 *VAR_4, *VAR_5;
 size_t VAR_6;
 char *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;
 size_t VAR_11;

 VAR_11 = FUNC_5(VAR_2->tncs);

 VAR_7 = FUNC_4(VAR_2->tncs);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_9 = FUNC_1(VAR_7);
 VAR_8 = FUNC_3();
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_7);
  return ((void*)0);
 }
 VAR_10 = FUNC_1(VAR_8);

 VAR_6 = VAR_9 + VAR_11 + VAR_10;
 VAR_3 = FUNC_7(VAR_6);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_7);
  FUNC_0(VAR_8);
  return ((void*)0);
 }

 FUNC_11(VAR_3, VAR_7, VAR_9);
 FUNC_0(VAR_7);

 VAR_5 = FUNC_10(VAR_3, 0);
 VAR_4 = FUNC_2(VAR_2->tncs, VAR_5);
 FUNC_10(VAR_3, VAR_4 - VAR_5);

 FUNC_11(VAR_3, VAR_8, VAR_10);
 FUNC_0(VAR_8);

 FUNC_6(VAR_0, "EAP-TNC: Request",
     FUNC_8(VAR_3), FUNC_9(VAR_3));

 return VAR_3;
}
