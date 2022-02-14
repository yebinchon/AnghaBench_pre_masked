
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {int dummy; } ;
struct vatpit_callout_arg {int channel_num; struct vatpit* vatpit; } ;
struct vatpit {TYPE_1__* channel; int freq_bt; int mtx; struct vm* vm; } ;
struct TYPE_2__ {struct vatpit_callout_arg callout_arg; int callout; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 struct vatpit* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;

struct vatpit *
FUNC_4(struct vm *VAR_5)
{
 struct vatpit *VAR_6;
 struct vatpit_callout_arg *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(sizeof(struct vatpit), VAR_1, VAR_2 | VAR_3);
 VAR_6->vm = VAR_5;

 FUNC_3(&VAR_6->mtx, "vatpit lock", ((void*)0), VAR_0);

 FUNC_0(VAR_4, &VAR_6->freq_bt);

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  FUNC_1(&VAR_6->channel[VAR_8].callout, 1);
  VAR_7 = &VAR_6->channel[VAR_8].callout_arg;
  VAR_7->vatpit = VAR_6;
  VAR_7->channel_num = VAR_8;
 }

 return (VAR_6);
}
