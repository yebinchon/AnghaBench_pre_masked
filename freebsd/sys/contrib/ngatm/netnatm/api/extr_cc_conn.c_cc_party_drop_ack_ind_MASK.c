
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int epref; } ;
struct uni_drop_party {int cause; TYPE_1__ epref; } ;
struct TYPE_5__ {int epref; } ;
struct ccparty {int state; TYPE_2__ epref; } ;
struct ccconn {TYPE_3__* user; } ;
struct TYPE_6__ {int * cause; } ;


 size_t VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 struct ccparty* FUNC_0 (struct ccconn*,int ) ;
 int FUNC_1 (struct ccparty*,char*,int ,...) ;
 int FUNC_2 (struct ccparty*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct ccconn *VAR_7,
    const struct uni_drop_party *VAR_8)
{
 struct ccparty *VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_8->epref.epref);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_9, "no party for %s",
      VAR_5[VAR_0]);
  return;
 }
 switch (VAR_9->state) {

   case 132:
  FUNC_4(&VAR_7->user->cause[1], 0, sizeof(VAR_7->user->cause[1]));
  VAR_7->user->cause[0] = VAR_8->cause;
  FUNC_2(VAR_9, VAR_1);
  FUNC_3(VAR_7->user, VAR_3,
      ((void*)0), VAR_9->epref.epref);
  break;

   case 131:
  FUNC_4(&VAR_7->user->cause[1], 0, sizeof(VAR_7->user->cause[1]));
  VAR_7->user->cause[0] = VAR_8->cause;
  FUNC_2(VAR_9, VAR_1);
  FUNC_3(VAR_7->user, VAR_2,
      ((void*)0), VAR_9->epref.epref);
  break;

   case 130:
  FUNC_2(VAR_9, VAR_1);
  FUNC_3(VAR_7->user, VAR_4, ((void*)0), 0);
  break;

   case 129:
   case 128:
  FUNC_2(VAR_9, VAR_1);
  break;

   default:
  FUNC_1(VAR_9, "bad state=%s for signal=%s",
      VAR_6[VAR_9->state],
      VAR_5[VAR_0]);
  break;
 }
}
