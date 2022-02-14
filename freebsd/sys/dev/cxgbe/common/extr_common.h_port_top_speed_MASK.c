
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int supported; } ;
struct port_info {TYPE_1__ link_cfg; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(const struct port_info *VAR_0)
{


 return (FUNC_0(VAR_0->link_cfg.supported) / 1000);
}
