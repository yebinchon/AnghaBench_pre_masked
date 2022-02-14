
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** urbs; } ;
struct ua101 {TYPE_3__ capture; int states; scalar_t__ rate_feedback_count; scalar_t__ rate_feedback_start; } ;
struct TYPE_5__ {int complete; } ;
struct TYPE_6__ {TYPE_1__ urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ua101*,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ua101*) ;
 int FUNC_5 (struct ua101*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ua101 *VAR_6)
{
 int VAR_7;

 if (FUNC_6(VAR_1, &VAR_6->states))
  return -VAR_2;

 if (FUNC_6(VAR_4, &VAR_6->states))
  return 0;

 FUNC_2(&VAR_6->capture);

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_0, &VAR_6->states);
 VAR_6->capture.urbs[0]->urb.complete = VAR_5;
 VAR_6->rate_feedback_start = 0;
 VAR_6->rate_feedback_count = 0;

 FUNC_3(VAR_4, &VAR_6->states);
 VAR_7 = FUNC_5(VAR_6, &VAR_6->capture);
 if (VAR_7 < 0)
  FUNC_4(VAR_6);
 return VAR_7;
}
