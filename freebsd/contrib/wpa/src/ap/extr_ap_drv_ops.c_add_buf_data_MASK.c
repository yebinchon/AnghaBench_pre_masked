
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wpabuf*,int const*,size_t) ;
 scalar_t__ FUNC_1 (struct wpabuf**,size_t) ;

__attribute__((used)) static int FUNC_2(struct wpabuf **VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return 0;
 if (FUNC_1(VAR_0, VAR_2) != 0)
  return -1;
 FUNC_0(*VAR_0, VAR_1, VAR_2);
 return 0;
}
