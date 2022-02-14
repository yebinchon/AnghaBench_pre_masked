
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;


 struct wpabuf* FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,struct wpabuf*) ;

struct wpabuf * FUNC_4(u8 VAR_0,
       u16 VAR_1,
       u8 VAR_2, u8 VAR_3,
       u16 VAR_4,
       struct wpabuf *VAR_5)
{
 struct wpabuf *VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2,
        VAR_3, VAR_4,
        VAR_5 ? FUNC_2(VAR_5) : 0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (VAR_5)
  FUNC_3(VAR_6, VAR_5);

 FUNC_1(VAR_6);

 return VAR_6;
}
