
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int dack_re; } ;
struct TYPE_7__ {TYPE_1__ tp; } ;
struct TYPE_8__ {TYPE_2__ params; } ;
typedef TYPE_3__ adapter_t ;


 unsigned int FUNC_0 (TYPE_3__ const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(const adapter_t *VAR_0,
           unsigned int VAR_1)
{
 return (VAR_1 << VAR_0->params.tp.dack_re) / FUNC_0(VAR_0);
}
