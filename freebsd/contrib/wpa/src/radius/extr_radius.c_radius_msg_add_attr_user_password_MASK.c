
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg {int dummy; } ;
struct radius_attr_hdr {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 struct radius_attr_hdr* FUNC_0 (struct radius_msg*,int ,int *,int) ;
 int FUNC_1 (struct radius_msg*,int const*,size_t,int const*,size_t,int *,int) ;

struct radius_attr_hdr *
FUNC_2(struct radius_msg *VAR_1,
      const u8 *VAR_2, size_t VAR_3,
      const u8 *VAR_4, size_t VAR_5)
{
 u8 VAR_6[128];
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_0,
       VAR_6, VAR_7);
}
