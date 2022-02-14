
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_cred {unsigned int num_roaming_consortiums; int * roaming_consortiums_len; int * roaming_consortiums; } ;


 scalar_t__ FUNC_0 (int const*,struct wpabuf const*,int ,int ) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0,
       const struct wpabuf *VAR_1,
       const struct wpa_cred *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_roaming_consortiums; VAR_3++) {
  if (FUNC_0(VAR_0, VAR_1,
          VAR_2->roaming_consortiums[VAR_3],
          VAR_2->roaming_consortiums_len[VAR_3]))
   return 1;
 }

 return 0;
}
