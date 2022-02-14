
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ act; } ;
struct uni_ie_cause {TYPE_1__ h; } ;
struct call {int uni; } ;


 scalar_t__ FUNC_0 (struct uni_ie_cause) ;
 int FUNC_1 (struct uni_ie_cause) ;
 int FUNC_2 (struct uni_ie_cause,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct call *VAR_3, struct uni_ie_cause *VAR_4, int VAR_5)
{

 if (FUNC_0(*VAR_4))
  return;

 if (!FUNC_1(*VAR_4)) {


  FUNC_3(VAR_3->uni);
  return;
 }
 if (VAR_4->h.act != VAR_2)
  return;


 FUNC_3(VAR_3->uni);
 if (VAR_5)
  FUNC_2(*VAR_4, VAR_0, VAR_1);
}
