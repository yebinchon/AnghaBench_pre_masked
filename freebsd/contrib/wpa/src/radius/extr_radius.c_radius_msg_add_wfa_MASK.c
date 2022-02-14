
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg {int dummy; } ;
struct radius_attr_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;
 struct radius_attr_hdr* FUNC_4 (struct radius_msg*,int ,int *,size_t) ;

int FUNC_5(struct radius_msg *VAR_2, u8 VAR_3, const u8 *VAR_4,
         size_t VAR_5)
{
 struct radius_attr_hdr *VAR_6;
 u8 *VAR_7, *VAR_8;
 size_t VAR_9;

 VAR_9 = 4 + 2 + VAR_5;
 VAR_7 = FUNC_2(VAR_9);
 if (VAR_7 == ((void*)0))
  return 0;
 VAR_8 = VAR_7;
 FUNC_0(VAR_8, VAR_1);
 VAR_8 += 4;
 *VAR_8++ = VAR_3;
 *VAR_8++ = 2 + VAR_5;
 FUNC_3(VAR_8, VAR_4, VAR_5);
 VAR_6 = FUNC_4(VAR_2, VAR_0,
       VAR_7, VAR_9);
 FUNC_1(VAR_7);
 if (VAR_6 == ((void*)0))
  return 0;

 return 1;
}
