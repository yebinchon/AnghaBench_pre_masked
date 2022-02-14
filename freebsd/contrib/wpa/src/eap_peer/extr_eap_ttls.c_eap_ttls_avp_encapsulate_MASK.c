
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct ttls_avp {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int ,int,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 struct wpabuf* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf*) ;
 int * FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_9(struct wpabuf **VAR_0, u32 VAR_1,
        int VAR_2)
{
 struct wpabuf *VAR_3;
 u8 *VAR_4, *VAR_5;

 VAR_3 = FUNC_3(sizeof(struct ttls_avp) + FUNC_6(*VAR_0) + 4);
 if (VAR_3 == ((void*)0)) {
  FUNC_4(*VAR_0);
  *VAR_0 = ((void*)0);
  return -1;
 }

 VAR_4 = FUNC_7(VAR_3);
 VAR_5 = FUNC_1(VAR_4, VAR_1, 0, VAR_2, FUNC_6(*VAR_0));
 FUNC_2(VAR_5, FUNC_5(*VAR_0), FUNC_6(*VAR_0));
 VAR_5 += FUNC_6(*VAR_0);
 FUNC_0(VAR_4, VAR_5);
 FUNC_4(*VAR_0);
 FUNC_8(VAR_3, VAR_5 - VAR_4);
 *VAR_0 = VAR_3;
 return 0;
}
