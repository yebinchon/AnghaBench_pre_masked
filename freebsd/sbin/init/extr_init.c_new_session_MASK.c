
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ttyent {int ty_status; scalar_t__ ty_name; scalar_t__ ty_getty; } ;
struct TYPE_7__ {struct TYPE_7__* se_prev; struct TYPE_7__* se_next; int se_device; int se_flags; } ;
typedef TYPE_1__ session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct ttyent*) ;

__attribute__((used)) static session_t *
FUNC_5(session_t *VAR_8, struct ttyent *VAR_9)
{
 session_t *VAR_10;

 if ((VAR_9->ty_status & VAR_5) == 0 ||
     VAR_9->ty_name == 0 ||
     VAR_9->ty_getty == 0)
  return 0;

 VAR_10 = (session_t *) FUNC_1(1, sizeof (session_t));

 VAR_10->se_flags |= VAR_2;

 if ((VAR_9->ty_status & VAR_4) != 0)
  VAR_10->se_flags |= VAR_1;

 if ((VAR_9->ty_status & VAR_3) != 0)
  VAR_10->se_flags |= VAR_0;

 if (FUNC_0(&VAR_10->se_device, "%d%ld", VAR_6, VAR_9->ty_name) < 0)
  FUNC_2(1, "asprintf");

 if (FUNC_4(VAR_10, VAR_9) == 0) {
  FUNC_3(VAR_10);
  return (0);
 }

 VAR_10->se_next = 0;
 if (VAR_8 == ((void*)0)) {
  VAR_7 = VAR_10;
  VAR_10->se_prev = 0;
 } else {
  VAR_8->se_next = VAR_10;
  VAR_10->se_prev = VAR_8;
 }

 return VAR_10;
}
