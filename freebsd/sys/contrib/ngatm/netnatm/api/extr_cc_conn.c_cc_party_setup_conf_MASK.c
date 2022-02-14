
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccparty {size_t state; } ;
struct TYPE_2__ {int epref; } ;
struct ccconn {TYPE_1__ epref; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 struct ccparty* FUNC_0 (struct ccconn*,int ) ;
 int FUNC_1 (struct ccparty*,char*,int ,...) ;
 int FUNC_2 (struct ccparty*,int ) ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct ccconn *VAR_5)
{
 struct ccparty *VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_5->epref.epref);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_6, "no party for %s",
      VAR_3[VAR_0]);
  return;
 }
 if (VAR_6->state != VAR_2) {
  FUNC_1(VAR_6, "bad state=%s for signal=%s",
      VAR_4[VAR_6->state], VAR_3[VAR_0]);
  return;
 }
 FUNC_2(VAR_6, VAR_1);
}
