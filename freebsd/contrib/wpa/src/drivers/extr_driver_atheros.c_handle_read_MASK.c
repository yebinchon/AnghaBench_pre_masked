
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2_ethhdr {int dummy; } ;
struct atheros_driver_data {int hapd; } ;


 int FUNC_0 (int ,int const*,int const*,size_t) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const u8 *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 struct atheros_driver_data *VAR_4 = VAR_0;
 FUNC_0(VAR_4->hapd, VAR_1, VAR_2 + sizeof(struct l2_ethhdr),
      VAR_3 - sizeof(struct l2_ethhdr));
}
