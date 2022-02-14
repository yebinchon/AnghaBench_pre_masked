
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct wpabuf*,int ) ;
 struct wpabuf* FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf*,int ) ;
 int FUNC_6 (struct wpabuf*,struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_8(u8 VAR_2, u16 VAR_3,
          u16 VAR_4,
          u16 VAR_5,
          const struct wpabuf *VAR_6)
{
 struct wpabuf *VAR_7;
 u8 *VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_3,
       VAR_4,
       100 + (VAR_6 ? FUNC_4(VAR_6) : 0));
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 if (VAR_6) {

  VAR_8 = FUNC_0(VAR_7, VAR_0);
  FUNC_5(VAR_7, VAR_1);

  FUNC_7(VAR_7, VAR_5);
  FUNC_6(VAR_7, VAR_6);
  FUNC_2(VAR_7, VAR_8);
 }

 FUNC_3(VAR_7);

 return VAR_7;
}
