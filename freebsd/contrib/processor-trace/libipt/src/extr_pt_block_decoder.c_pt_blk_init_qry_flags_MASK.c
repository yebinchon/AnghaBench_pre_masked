
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int keep_tcal_on_ovf; } ;
struct TYPE_4__ {int keep_tcal_on_ovf; } ;
struct TYPE_6__ {TYPE_2__ block; TYPE_1__ query; } ;
struct pt_conf_flags {TYPE_3__ variant; } ;


 int FUNC_0 (struct pt_conf_flags*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_conf_flags *VAR_1,
     const struct pt_conf_flags *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->variant.query.keep_tcal_on_ovf =
  VAR_2->variant.block.keep_tcal_on_ovf;

 return 0;
}
