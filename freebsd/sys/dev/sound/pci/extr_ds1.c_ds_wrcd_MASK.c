
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int cd2id; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sc_info*,int) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_3, void *VAR_4, int VAR_5, u_int32_t VAR_6)
{
 struct sc_info *VAR_7 = (struct sc_info *)VAR_4;
 int VAR_8, VAR_9;
 u_int32_t VAR_10;

 VAR_8 = VAR_5 & 0x100;
 VAR_5 &= 0xff;
 VAR_9 = VAR_8? (VAR_7->cd2id << 8) : 0;
 if (VAR_8 && VAR_9 == 0)
  return VAR_0;

 VAR_10 = VAR_2 | VAR_9 | VAR_5;
 VAR_10 <<= 16;
 VAR_10 |= VAR_6;
 FUNC_1(VAR_7, VAR_1, VAR_10, 4);

 return FUNC_0(VAR_7, VAR_8);
}
