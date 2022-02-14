
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int begin; } ;
struct pt_encoder {TYPE_1__ config; int pos; } ;
struct pt_config {int dummy; } ;


 int FUNC_0 (struct pt_encoder*,int ,int) ;
 int FUNC_1 (TYPE_1__*,struct pt_config const*) ;
 int VAR_0 ;

int FUNC_2(struct pt_encoder *VAR_1, const struct pt_config *VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_3 = FUNC_1(&VAR_1->config, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->pos = VAR_1->config.begin;

 return 0;
}
