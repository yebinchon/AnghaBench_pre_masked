
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usX2Ydev {int prepare_wait_queue; struct snd_usX2Y_substream* prepare_subs; } ;
struct urb {scalar_t__ start_frame; struct snd_usX2Y_substream* context; } ;
struct snd_usX2Y_substream {int state; TYPE_1__** urb; struct usX2Ydev* usX2Y; } ;
struct TYPE_2__ {scalar_t__ start_frame; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct usX2Ydev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 struct snd_usX2Y_substream *VAR_1 = VAR_0->context;
 struct usX2Ydev *VAR_2 = VAR_1->usX2Y;
 struct snd_usX2Y_substream *VAR_3 = VAR_2->prepare_subs;
 if (((void*)0) != VAR_3)
  if (VAR_0->start_frame == VAR_3->urb[0]->start_frame) {
   FUNC_2(VAR_2);
   FUNC_0(&VAR_3->state);
   FUNC_3(&VAR_2->prepare_wait_queue);
  }

 FUNC_1(VAR_0);
}
