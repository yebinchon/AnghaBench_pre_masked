
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpabuf*,int ,int ) ;
 int * FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,int ,int ,int ,int *,int *) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,int *) ;
 struct wpabuf* FUNC_5 (int) ;
 int FUNC_6 (struct wpabuf*,int const*,size_t) ;
 int FUNC_7 (struct wpabuf*,size_t) ;
 int FUNC_8 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_9(u8 VAR_2, const u8 *VAR_3,
            size_t VAR_4, u8 VAR_5)
{
 struct wpabuf *VAR_6;
 u8 *VAR_7;

 VAR_6 = FUNC_5(100 + VAR_4);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_6, VAR_1, VAR_5);
 VAR_7 = FUNC_1(VAR_6);
 FUNC_3(VAR_6, VAR_2);
 if (VAR_3) {
  FUNC_8(VAR_6, VAR_0);
  FUNC_7(VAR_6, VAR_4);
  FUNC_6(VAR_6, VAR_3, VAR_4);
 } else
  FUNC_2(VAR_6, 0, 0, 0, ((void*)0), ((void*)0));
 FUNC_4(VAR_6, VAR_7);

 return VAR_6;
}
