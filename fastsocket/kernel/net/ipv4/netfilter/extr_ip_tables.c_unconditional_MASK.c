
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uncond ;
struct ipt_ip {int dummy; } ;


 scalar_t__ FUNC_0 (struct ipt_ip const*,struct ipt_ip const*,int) ;

__attribute__((used)) static inline bool FUNC_1(const struct ipt_ip *VAR_0)
{
 static const struct ipt_ip VAR_1;

 return FUNC_0(VAR_0, &VAR_1, sizeof(VAR_1)) == 0;

}
