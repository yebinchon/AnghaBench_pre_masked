
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct wpabuf const*,int const*,size_t) ;
 scalar_t__ FUNC_1 (int const*,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_0, const struct wpabuf *VAR_1,
        const u8 *VAR_2, size_t VAR_3)
{
 return FUNC_1(VAR_0, VAR_2, VAR_3) ||
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
