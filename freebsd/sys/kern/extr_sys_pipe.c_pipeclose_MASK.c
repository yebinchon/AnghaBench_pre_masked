
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipepair {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct pipe {scalar_t__ pipe_present; struct pipepair* pipe_pair; TYPE_1__ pipe_sel; int pipe_state; struct pipe* pipe_peer; scalar_t__ pipe_busy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct pipe*) ;
 int FUNC_3 (struct pipe*) ;
 int FUNC_4 (struct pipe*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pipepair*) ;
 int FUNC_8 (struct pipe*,int ,int ,char*,int ) ;
 int FUNC_9 (struct pipe*) ;
 int VAR_6 ;
 int FUNC_10 (struct pipe*,int ) ;
 int FUNC_11 (struct pipe*) ;
 int FUNC_12 (struct pipe*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,struct pipepair*) ;
 int FUNC_15 (struct pipe*) ;

__attribute__((used)) static void
FUNC_16(struct pipe *VAR_7)
{
 struct pipepair *VAR_8;
 struct pipe *VAR_9;

 FUNC_0(VAR_7 != ((void*)0), ("pipeclose: cpipe == NULL"));

 FUNC_2(VAR_7);
 FUNC_10(VAR_7, 0);
 VAR_8 = VAR_7->pipe_pair;

 FUNC_11(VAR_7);





 VAR_7->pipe_state |= VAR_2;
 while (VAR_7->pipe_busy) {
  FUNC_15(VAR_7);
  VAR_7->pipe_state |= VAR_4;
  FUNC_12(VAR_7);
  FUNC_8(VAR_7, FUNC_3(VAR_7), VAR_5, "pipecl", 0);
  FUNC_10(VAR_7, 0);
 }





 VAR_9 = VAR_7->pipe_peer;
 if (VAR_9->pipe_present == VAR_0) {
  FUNC_11(VAR_9);

  VAR_9->pipe_state |= VAR_2;
  FUNC_15(VAR_9);
  FUNC_1(&VAR_9->pipe_sel.si_note, 0);
 }







 FUNC_4(VAR_7);
 FUNC_9(VAR_7);
 FUNC_2(VAR_7);
 VAR_7->pipe_present = VAR_1;
 FUNC_12(VAR_7);






 FUNC_5(&VAR_7->pipe_sel.si_note, 1);
 VAR_7->pipe_present = VAR_3;
 FUNC_13(&VAR_7->pipe_sel);
 FUNC_6(&VAR_7->pipe_sel.si_note);





 if (VAR_9->pipe_present == VAR_3) {
  FUNC_4(VAR_7);



  FUNC_14(VAR_6, VAR_7->pipe_pair);
 } else
  FUNC_4(VAR_7);
}
