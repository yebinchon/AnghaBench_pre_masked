
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vatpit_callout_arg {size_t channel_num; struct vatpit* vatpit; } ;
struct vatpit {int vm; struct channel* channel; } ;
struct callout {int dummy; } ;
struct channel {scalar_t__ mode; struct callout callout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vatpit*) ;
 int FUNC_1 (struct vatpit*) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (struct callout*) ;
 int FUNC_4 (struct callout*) ;
 scalar_t__ FUNC_5 (struct callout*) ;
 int FUNC_6 (struct vatpit*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 struct vatpit_callout_arg *VAR_2 = VAR_1;
 struct vatpit *VAR_3;
 struct callout *VAR_4;
 struct channel *VAR_5;

 VAR_3 = VAR_2->vatpit;
 VAR_5 = &VAR_3->channel[VAR_2->channel_num];
 VAR_4 = &VAR_5->callout;

 FUNC_2(VAR_3->vm, "atpit t%d fired", VAR_2->channel_num);

 FUNC_0(VAR_3);

 if (FUNC_5(VAR_4))
  goto done;

 if (!FUNC_3(VAR_4))
  goto done;

 FUNC_4(VAR_4);

 if (VAR_5->mode == VAR_0) {
  FUNC_6(VAR_3);
 }

 FUNC_7(VAR_3->vm, 0);
 FUNC_8(VAR_3->vm, 2);

done:
 FUNC_1(VAR_3);
 return;
}
