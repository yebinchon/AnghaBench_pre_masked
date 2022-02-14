
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
 struct wpabuf* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,int ) ;
 int FUNC_6 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_8(u16 VAR_2,
       struct wpabuf *VAR_3)
{
 struct wpabuf *VAR_4;
 u8 *VAR_5;

 VAR_4 = FUNC_1(0, 100 + FUNC_4(VAR_3));
 if (VAR_4 == ((void*)0))
  return ((void*)0);


 VAR_5 = FUNC_0(VAR_4, VAR_0);
 FUNC_5(VAR_4, VAR_1);
 FUNC_7(VAR_4, VAR_2);
 FUNC_6(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_5);

 FUNC_3(VAR_4);

 return VAR_4;
}
