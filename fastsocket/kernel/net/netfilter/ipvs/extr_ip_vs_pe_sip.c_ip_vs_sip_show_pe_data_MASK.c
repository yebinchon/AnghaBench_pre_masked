
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int pe_data_len; int pe_data; } ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(const struct ip_vs_conn *VAR_0, char *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->pe_data, VAR_0->pe_data_len);
 return VAR_0->pe_data_len;
}
