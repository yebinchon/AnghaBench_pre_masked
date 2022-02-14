
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usX2Ydev {struct snd_usX2Y_substream* prepare_subs; } ;
struct snd_usX2Y_substream {TYPE_1__** urb; struct usX2Ydev* usX2Y; } ;
struct TYPE_2__ {int start_frame; } ;


 int VAR_0 ;
 int FUNC_0 (struct usX2Ydev*,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct snd_usX2Y_substream *VAR_1)
{
 struct usX2Ydev *VAR_2 = VAR_1->usX2Y;
 VAR_2->prepare_subs = VAR_1;
 VAR_1->urb[0]->start_frame = -1;
 FUNC_1();
 FUNC_0(VAR_2, VAR_0);
}
