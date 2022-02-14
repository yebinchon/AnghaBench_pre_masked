
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpabuf*,int const*,size_t) ;
 int FUNC_1 (struct wpabuf*,int) ;
 scalar_t__ FUNC_2 (struct wpabuf**,int) ;

__attribute__((used)) static int FUNC_3(struct wpabuf **VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
    const u8 *VAR_5, size_t VAR_6)
{
 if (FUNC_2(VAR_1, 5 + VAR_6))
  return -1;

 FUNC_1(*VAR_1, VAR_0);
 FUNC_1(*VAR_1, 3 + VAR_6);
 FUNC_1(*VAR_1, VAR_2);
 FUNC_1(*VAR_1, VAR_3);
 FUNC_1(*VAR_1, VAR_4);

 if (VAR_6)
  FUNC_0(*VAR_1, VAR_5, VAR_6);

 return 0;
}
