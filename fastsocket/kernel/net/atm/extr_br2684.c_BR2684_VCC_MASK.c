
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct br2684_vcc {int dummy; } ;
struct atm_vcc {scalar_t__ user_back; } ;



__attribute__((used)) static inline struct br2684_vcc *FUNC_0(const struct atm_vcc *VAR_0)
{
 return (struct br2684_vcc *)(VAR_0->user_back);
}
