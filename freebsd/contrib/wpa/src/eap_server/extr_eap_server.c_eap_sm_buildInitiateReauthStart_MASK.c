
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
typedef int EapType ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (struct eap_sm*) ;
 struct wpabuf* FUNC_1 (int ,int ,size_t,int ,int ) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (struct wpabuf*,char const*,size_t) ;
 int FUNC_4 (struct wpabuf*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_4,
             u8 VAR_5)
{
 const char *VAR_6;
 size_t VAR_7 = 1;
 struct wpabuf *VAR_8;
 size_t VAR_9 = 0;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6) {
  VAR_9 = FUNC_2(VAR_6);
  VAR_7 += 2 + VAR_9;
 }

 VAR_8 = FUNC_1(VAR_3,
       (EapType) VAR_2, VAR_7,
       VAR_0, VAR_5);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_8, 0);
 if (VAR_6) {

  FUNC_4(VAR_8, VAR_1);
  FUNC_4(VAR_8, VAR_9);
  FUNC_3(VAR_8, VAR_6, VAR_9);
 }

 return VAR_8;
}
