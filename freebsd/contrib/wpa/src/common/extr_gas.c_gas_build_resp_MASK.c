
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf *
FUNC_3(u8 VAR_2, u8 VAR_3, u16 VAR_4, u8 VAR_5,
        u8 VAR_6, u16 VAR_7, size_t VAR_8)
{
 struct wpabuf *VAR_9;

 VAR_9 = FUNC_0(100 + VAR_8);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 FUNC_2(VAR_9, VAR_0);
 FUNC_2(VAR_9, VAR_2);
 FUNC_2(VAR_9, VAR_3);
 FUNC_1(VAR_9, VAR_4);
 if (VAR_2 == VAR_1)
  FUNC_2(VAR_9, VAR_5 | (VAR_6 ? 0x80 : 0));
 FUNC_1(VAR_9, VAR_7);

 return VAR_9;
}
