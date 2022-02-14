
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,int const*,int ) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,int) ;
 scalar_t__ FUNC_5 (struct wpabuf**,int) ;

__attribute__((used)) static int FUNC_6(struct wpabuf **VAR_6, const u8 *VAR_7,
      u32 VAR_8, u8 VAR_9, u8 VAR_10, u8 VAR_11,
      u8 VAR_12)
{
 if (FUNC_1(*VAR_6) + 18 >
     VAR_2 - VAR_1) {
  FUNC_0(VAR_3,
      "WNM: No room in frame for Neighbor Report element");
  return -1;
 }

 if (FUNC_5(VAR_6, 18) < 0) {
  FUNC_0(VAR_3,
      "WNM: Failed to allocate memory for Neighbor Report element");
  return -1;
 }

 FUNC_4(*VAR_6, VAR_4);

 FUNC_4(*VAR_6, 16);
 FUNC_2(*VAR_6, VAR_7, VAR_0);
 FUNC_3(*VAR_6, VAR_8);
 FUNC_4(*VAR_6, VAR_9);
 FUNC_4(*VAR_6, VAR_10);
 FUNC_4(*VAR_6, VAR_11);
 FUNC_4(*VAR_6, VAR_5);
 FUNC_4(*VAR_6, 1);
 FUNC_4(*VAR_6, VAR_12);
 return 0;
}
