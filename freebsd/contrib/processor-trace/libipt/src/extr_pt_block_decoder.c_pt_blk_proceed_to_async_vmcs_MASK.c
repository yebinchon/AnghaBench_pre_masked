
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ip; } ;
struct TYPE_4__ {TYPE_1__ async_vmcs; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ ip_suppressed; } ;
struct pt_block_decoder {scalar_t__ ip; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_block*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_block_decoder *VAR_1,
     struct pt_block *VAR_2,
     const struct pt_event *VAR_3)
{
 int VAR_4;

 if (!VAR_1 || !VAR_3)
  return -VAR_0;


 if (VAR_3->ip_suppressed)
  return 1;

 VAR_4 = FUNC_0(VAR_1, VAR_2,
       VAR_3->variant.async_vmcs.ip);
 if (VAR_4 < 0)
  return VAR_4;


 return (VAR_1->ip == VAR_3->variant.async_vmcs.ip ? 1 : 0);
}
