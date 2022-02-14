
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wpabuf*,int,int ) ;
 struct wpabuf* FUNC_1 (int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

struct wpabuf * FUNC_3(u8 VAR_0, u16 VAR_1,
          u8 VAR_2, u8 VAR_3,
          u16 VAR_4, size_t VAR_5)
{
 struct wpabuf *VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1,
          VAR_2, VAR_3, VAR_4, 4 + VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_6, 0x7f, 0);

 FUNC_2(VAR_6, 2);

 return VAR_6;
}
