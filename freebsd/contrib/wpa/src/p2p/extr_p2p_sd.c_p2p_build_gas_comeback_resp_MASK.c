
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,scalar_t__ const*,size_t) ;
 int FUNC_4 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_5(u8 VAR_2,
         u16 VAR_3,
         u16 VAR_4,
         const u8 *VAR_5, size_t VAR_6,
         u8 VAR_7, u8 VAR_8,
         u16 VAR_9)
{
 struct wpabuf *VAR_10;

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_7,
        VAR_8, 0, 100 + VAR_6);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 if (VAR_7 == 0) {

  FUNC_4(VAR_10, VAR_0);
  FUNC_4(VAR_10, 3 + 1 + 2 + VAR_9);
  FUNC_2(VAR_10, VAR_1);

  FUNC_4(VAR_10, VAR_4);
 }

 FUNC_3(VAR_10, VAR_5, VAR_6);
 FUNC_1(VAR_10);

 return VAR_10;
}
