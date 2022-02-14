
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(int VAR_4, u16 VAR_5)
{
 struct wpabuf *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2, 10,
       VAR_0, VAR_4);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_3(VAR_6, 0x80);
 FUNC_3(VAR_6, VAR_1);
 FUNC_1(VAR_6, 6);
 FUNC_2(VAR_6, 0);
 FUNC_1(VAR_6, VAR_5);

 return VAR_6;
}
