
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nl_addr {int dummy; } ;
typedef int mac_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 struct nl_addr* FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 (struct nl_addr*) ;

__attribute__((used)) static int FUNC_3(struct nl_addr *VAR_2,
       struct nl_addr **VAR_3)
{
 uint8_t VAR_4[6];

 FUNC_0(VAR_4 + 3, (uint8_t *)FUNC_2(VAR_2) + 13, 3);
 FUNC_0(VAR_4, (uint8_t *)FUNC_2(VAR_2) + 8, 3);
 VAR_4[0] ^= 2;

 *VAR_3 = FUNC_1(VAR_0, VAR_4, sizeof(VAR_4));
 return *VAR_3 == ((void*)0) ? -VAR_1 : 0;
}
