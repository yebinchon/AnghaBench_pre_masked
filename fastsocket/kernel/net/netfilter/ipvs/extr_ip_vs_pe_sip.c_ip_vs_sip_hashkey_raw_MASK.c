
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ip_vs_conn_param {int pe_data_len; int pe_data; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(const struct ip_vs_conn_param *VAR_0,
     u32 VAR_1, bool VAR_2)
{
 return FUNC_0(VAR_0->pe_data, VAR_0->pe_data_len, VAR_1);
}
