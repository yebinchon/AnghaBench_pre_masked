
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int datalen; int quotalen; TYPE_1__* user; int flags; } ;
struct TYPE_2__ {scalar_t__ uid; int qnbytes; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct key*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct key *VAR_4, size_t VAR_5)
{
 int VAR_6 = (int)VAR_5 - VAR_4->datalen;
 int VAR_7 = 0;

 FUNC_0(VAR_4);


 if (VAR_6 != 0 && FUNC_3(VAR_1, &VAR_4->flags)) {
  unsigned VAR_8 = (VAR_4->user->uid == 0) ?
   VAR_3 : VAR_2;

  FUNC_1(&VAR_4->user->lock);

  if (VAR_6 > 0 &&
      (VAR_4->user->qnbytes + VAR_6 >= VAR_8 ||
       VAR_4->user->qnbytes + VAR_6 < VAR_4->user->qnbytes)) {
   VAR_7 = -VAR_0;
  }
  else {
   VAR_4->user->qnbytes += VAR_6;
   VAR_4->quotalen += VAR_6;
  }
  FUNC_2(&VAR_4->user->lock);
 }


 if (VAR_7 == 0)
  VAR_4->datalen = VAR_5;

 return VAR_7;
}
