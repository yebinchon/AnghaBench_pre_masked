
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int method; int vendor; } ;
struct eap_teap_data {int * phase2_priv; TYPE_2__* phase2_method; TYPE_1__ phase2_type; scalar_t__ inner_method_done; } ;
struct eap_sm {int init_phase2; } ;
struct TYPE_4__ {int * (* init ) (struct eap_sm*) ;} ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 int * FUNC_1 (struct eap_sm*) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_0,
           struct eap_teap_data *VAR_1)
{
 VAR_1->inner_method_done = 0;
 VAR_1->phase2_method =
  FUNC_0(VAR_1->phase2_type.vendor,
     VAR_1->phase2_type.method);
 if (!VAR_1->phase2_method)
  return -1;

 VAR_0->init_phase2 = 1;
 VAR_1->phase2_priv = VAR_1->phase2_method->init(VAR_0);
 VAR_0->init_phase2 = 0;

 return VAR_1->phase2_priv == ((void*)0) ? -1 : 0;
}
