
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int fmtlist; } ;
struct vchan_info {TYPE_1__ caps; int channel; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct vchan_info *VAR_3;

 VAR_3 = VAR_1;

 FUNC_0(VAR_3->channel);

 if (!FUNC_1(VAR_2, VAR_3->caps.fmtlist))
  return (-1);

 return (0);
}
