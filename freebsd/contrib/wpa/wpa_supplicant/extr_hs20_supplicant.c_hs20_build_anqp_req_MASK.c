
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;


 struct wpabuf* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int const*,size_t,struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_2(u32 VAR_0, const u8 *VAR_1,
        size_t VAR_2)
{
 struct wpabuf *VAR_3;

 VAR_3 = FUNC_0(0, 100 + VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_3;
}
