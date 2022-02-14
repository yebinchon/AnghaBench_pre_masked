
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wpabuf*,int,int ) ;
 struct wpabuf* FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

struct wpabuf * FUNC_3(u8 VAR_0, u16 VAR_1,
         u16 VAR_2, size_t VAR_3)
{
 struct wpabuf *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2,
         4 + VAR_3);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_4, 0x7f, 0);

 FUNC_2(VAR_4, 2);

 return VAR_4;
}
