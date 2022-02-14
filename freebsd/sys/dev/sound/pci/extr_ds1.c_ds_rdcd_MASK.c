
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int cd2id; int type; int rev; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sc_info*,int) ;
 int FUNC_1 (struct sc_info*,int,int) ;
 int FUNC_2 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_4, void *VAR_5, int VAR_6)
{
 struct sc_info *VAR_7 = (struct sc_info *)VAR_5;
 int VAR_8, VAR_9, VAR_10;
 u_int32_t VAR_11, VAR_12;

 VAR_8 = VAR_6 & 0x100;
 VAR_6 &= 0xff;
 VAR_9 = VAR_8? (VAR_7->cd2id << 8) : 0;
 VAR_12 = VAR_8? VAR_2 : VAR_1;
 if (VAR_8 && VAR_9 == 0)
  return 0xffffffff;

 VAR_11 = VAR_3 | VAR_9 | VAR_6;
 FUNC_2(VAR_7, VAR_0, VAR_11, 2);

 if (FUNC_0(VAR_7, VAR_8))
  return 0xffffffff;

 if (VAR_7->type == 11 && VAR_7->rev < 2)
  for (VAR_10 = 0; VAR_10 < 600; VAR_10++)
   FUNC_1(VAR_7, VAR_12, 2);

 return FUNC_1(VAR_7, VAR_12, 2);
}
