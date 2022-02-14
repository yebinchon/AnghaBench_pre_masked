
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int present; } ;
struct TYPE_5__ {int len; int * ie; } ;
struct TYPE_6__ {TYPE_1__ ie; } ;
struct uni_ie_cause {TYPE_3__ h; TYPE_2__ u; } ;
struct call {TYPE_4__* uni; } ;
struct TYPE_8__ {struct uni_ie_cause cause; } ;


 int FUNC_0 (struct uni_ie_cause) ;
 scalar_t__ FUNC_1 (struct uni_ie_cause) ;
 int FUNC_2 (struct uni_ie_cause,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct call *VAR_5, struct uni_ie_cause *VAR_6)
{

 if (!FUNC_0(*VAR_6)) {

  if (FUNC_1(*VAR_6))
   FUNC_2(VAR_5->uni->cause, VAR_2,
       VAR_0);
  else
   FUNC_2(VAR_5->uni->cause, VAR_2,
       VAR_3);
  VAR_5->uni->cause.u.ie.len = 1;
  VAR_5->uni->cause.u.ie.ie[0] = VAR_4;
  VAR_5->uni->cause.h.present |= VAR_1;

 } else if (!FUNC_0(VAR_5->uni->cause))
  VAR_5->uni->cause = *VAR_6;
}
