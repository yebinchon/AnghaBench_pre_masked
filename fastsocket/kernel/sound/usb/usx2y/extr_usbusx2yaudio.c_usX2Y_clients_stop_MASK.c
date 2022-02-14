
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int prepare_wait_queue; int * prepare_subs; struct snd_usX2Y_substream** subs; } ;
struct urb {scalar_t__ start_frame; struct snd_usX2Y_substream* status; } ;
struct snd_usX2Y_substream {struct urb** urb; int pcm_substream; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,struct snd_usX2Y_substream*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct usX2Ydev *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  struct snd_usX2Y_substream *VAR_7 = VAR_4->subs[VAR_5];
  if (VAR_7) {
   FUNC_3("%i %p state=%i\n", VAR_5, VAR_7, FUNC_0(&VAR_7->state));
   FUNC_1(&VAR_7->state, VAR_3);
  }
 }
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  struct snd_usX2Y_substream *VAR_8 = VAR_4->subs[VAR_5];
  if (VAR_8) {
   if (FUNC_0(&VAR_8->state) >= VAR_2) {
    FUNC_2(VAR_8->pcm_substream, VAR_1);
   }
   for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    struct urb *VAR_9 = VAR_8->urb[VAR_6];
    if (((void*)0) != VAR_9)
     FUNC_3("%i status=%i start_frame=%i\n",
          VAR_6, VAR_9->status, VAR_9->start_frame);
   }
  }
 }
 VAR_4->prepare_subs = ((void*)0);
 FUNC_4(&VAR_4->prepare_wait_queue);
}
