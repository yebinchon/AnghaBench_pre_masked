
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int wait_iso_frame; struct snd_usX2Y_substream** subs; int dev; } ;
struct urb {int status; int start_frame; int pipe; struct snd_usX2Y_substream* context; } ;
struct snd_usX2Y_substream {int state; struct urb* completed_urb; int endpoint; struct usX2Ydev* usX2Y; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct usX2Ydev*) ;
 int FUNC_6 (struct usX2Ydev*,struct snd_usX2Y_substream*,struct urb*) ;
 int FUNC_7 (struct usX2Ydev*,struct snd_usX2Y_substream*,struct urb*) ;
 int FUNC_8 (struct snd_usX2Y_substream*,struct snd_usX2Y_substream*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_3)
{
 struct snd_usX2Y_substream *VAR_4 = VAR_3->context;
 struct usX2Ydev *VAR_5 = VAR_4->usX2Y;

 if (FUNC_4(FUNC_0(&VAR_4->state) < VAR_2)) {
  FUNC_3("hcd_frame=%i ep=%i%s status=%i start_frame=%i\n",
       FUNC_9(VAR_5->dev),
       VAR_4->endpoint, FUNC_10(VAR_3->pipe) ? "in" : "out",
       VAR_3->status, VAR_3->start_frame);
  return;
 }
 if (FUNC_4(VAR_3->status)) {
  FUNC_7(VAR_5, VAR_4, VAR_3);
  return;
 }
 if (FUNC_1((VAR_3->start_frame & 0xFFFF) == (VAR_5->wait_iso_frame & 0xFFFF)))
  VAR_4->completed_urb = VAR_3;
 else {
  FUNC_6(VAR_5, VAR_4, VAR_3);
  return;
 }
 {
  struct snd_usX2Y_substream *VAR_6 = VAR_5->subs[VAR_0],
   *VAR_7 = VAR_5->subs[VAR_1];
  if (VAR_6->completed_urb &&
      FUNC_0(&VAR_6->state) >= VAR_2 &&
      (VAR_7->completed_urb ||
       FUNC_0(&VAR_7->state) < VAR_2)) {
   if (!FUNC_8(VAR_6, VAR_7, VAR_3->start_frame))
    VAR_5->wait_iso_frame += FUNC_2();
   else {
    FUNC_3("\n");
    FUNC_5(VAR_5);
   }
  }
 }
}
