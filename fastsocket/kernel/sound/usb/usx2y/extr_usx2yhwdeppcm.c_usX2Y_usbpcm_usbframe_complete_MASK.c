
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct snd_usX2Y_substream {struct urb* completed_urb; int state; struct urb** urb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_2 (struct snd_usX2Y_substream*,struct urb*) ;
 int FUNC_3 (struct snd_usX2Y_substream*,struct urb*) ;
 int FUNC_4 (struct snd_usX2Y_substream*,struct urb*,int) ;
 int FUNC_5 (struct snd_usX2Y_substream*,struct urb*) ;
 int FUNC_6 (struct snd_usX2Y_substream*) ;

__attribute__((used)) static inline int FUNC_7(struct snd_usX2Y_substream *VAR_3,
       struct snd_usX2Y_substream *VAR_4,
       struct snd_usX2Y_substream *VAR_5,
       int VAR_6)
{
 int VAR_7, VAR_8;
 struct urb *VAR_9 = VAR_5->completed_urb;

 VAR_8 = FUNC_1(&VAR_5->state);
 if (((void*)0) != VAR_9) {
  if (VAR_8 == VAR_2)
   FUNC_3(VAR_5, VAR_9);
  else if (VAR_8 >= VAR_1)
   FUNC_0(&VAR_5->state);
 } else {
  switch (VAR_8) {
  case 129:
   VAR_9 = VAR_5->urb[0];
   FUNC_0(&VAR_5->state);
   break;
  case 128:
   VAR_9 = VAR_5->urb[1];
   FUNC_0(&VAR_5->state);
   break;
  }
 }
 if (VAR_9) {
  if ((VAR_7 = FUNC_2(VAR_5, VAR_9)) ||
      (VAR_7 = FUNC_4(VAR_5, VAR_9, VAR_6))) {
   return VAR_7;
  }
 }

 VAR_5->completed_urb = ((void*)0);

 VAR_8 = FUNC_1(&VAR_3->state);
 if (VAR_8 >= VAR_0) {
  if (VAR_8 == VAR_2) {
   if ((VAR_7 = FUNC_6(VAR_3)))
    return VAR_7;
  } else if (VAR_8 >= VAR_1)
   FUNC_0(&VAR_3->state);
  FUNC_5(VAR_3, VAR_3->completed_urb);
  if (((void*)0) != VAR_4)
   FUNC_5(((void*)0), VAR_4->completed_urb);
  if ((VAR_7 = FUNC_4(VAR_3, VAR_3->completed_urb, VAR_6)))
   return VAR_7;
  if (((void*)0) != VAR_4)
   if ((VAR_7 = FUNC_4(VAR_4, VAR_4->completed_urb, VAR_6)))
    return VAR_7;
 }
 VAR_3->completed_urb = ((void*)0);
 if (((void*)0) != VAR_4)
  VAR_4->completed_urb = ((void*)0);
 return 0;
}
