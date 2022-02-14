
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_conf_addr_filter {int dummy; } ;


 int FUNC_0 (struct pt_conf_addr_filter const*,int ) ;
 int FUNC_1 (struct pt_conf_addr_filter const*,int ) ;

int FUNC_2(const struct pt_conf_addr_filter *VAR_0,
    uint64_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 <= 0)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
