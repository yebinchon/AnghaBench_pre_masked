
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nl_addr {int dummy; } ;
typedef int mac_addr ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct nl_addr* FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 (struct nl_addr*) ;

__attribute__((used)) static int FUNC_3(struct nl_addr *VAR_2, struct nl_addr **VAR_3)
{
 uint8_t VAR_4[6] = {0x01, 0x00, 0x5E};
 uint32_t VAR_5 = FUNC_0(*(__be32 *)FUNC_2(VAR_2));

 VAR_4[5] = VAR_5 & 0xFF;
 VAR_5 >>= 8;
 VAR_4[4] = VAR_5 & 0xFF;
 VAR_5 >>= 8;
 VAR_4[3] = VAR_5 & 0x7F;

 *VAR_3 = FUNC_1(VAR_0, VAR_4, sizeof(VAR_4));

 return *VAR_3 == ((void*)0) ? -VAR_1 : 0;
}
