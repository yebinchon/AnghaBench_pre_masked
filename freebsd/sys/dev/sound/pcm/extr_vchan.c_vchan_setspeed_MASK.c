
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int maxspeed; } ;
struct vchan_info {TYPE_1__ caps; int channel; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t
FUNC_1(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct vchan_info *VAR_3;

 VAR_3 = VAR_1;

 FUNC_0(VAR_3->channel);

 return (VAR_3->caps.maxspeed);
}
