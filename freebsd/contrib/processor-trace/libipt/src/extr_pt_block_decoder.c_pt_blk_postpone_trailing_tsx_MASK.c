
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ip; } ;
struct TYPE_10__ {TYPE_4__ tsx; } ;
struct pt_event {TYPE_5__ variant; scalar_t__ ip_suppressed; } ;
struct TYPE_6__ {scalar_t__ bdm64; } ;
struct TYPE_7__ {TYPE_1__ errata; } ;
struct TYPE_8__ {TYPE_2__ config; } ;
struct pt_block_decoder {scalar_t__ ip; TYPE_3__ query; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_block*,struct pt_event const*) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct pt_block_decoder *VAR_1,
            struct pt_block *VAR_2,
            const struct pt_event *VAR_3)
{
 int VAR_4;

 if (!VAR_1 || !VAR_3)
  return -VAR_0;

 if (VAR_3->ip_suppressed)
  return 0;

 if (VAR_2 && VAR_1->query.config.errata.bdm64) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   return 1;
 }

 if (VAR_1->ip != VAR_3->variant.tsx.ip)
  return 1;

 return 0;
}
