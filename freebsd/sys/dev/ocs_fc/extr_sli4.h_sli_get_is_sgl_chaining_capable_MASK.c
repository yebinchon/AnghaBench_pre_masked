
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int chaining_capable; } ;
struct TYPE_6__ {TYPE_1__ sgl_chaining_params; } ;
struct TYPE_7__ {TYPE_2__ config; } ;
typedef TYPE_3__ sli4_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(sli4_t *VAR_0)
{
 return VAR_0->config.sgl_chaining_params.chaining_capable;
}
