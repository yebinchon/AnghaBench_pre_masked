
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int curstat; int* out; int** posns; int accept; scalar_t__** gototab; TYPE_1__* re; scalar_t__ reset; } ;
typedef TYPE_2__ fa ;
struct TYPE_5__ {int* lfollow; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;

int FUNC_4(fa *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_2->curstat = 2;
 VAR_2->out[2] = 0;
 VAR_2->reset = 0;
 VAR_5 = *(VAR_2->re[0].lfollow);
 FUNC_3(VAR_2->posns[2]);
 if ((VAR_2->posns[2] = (int *) FUNC_0(VAR_5+1, sizeof(int))) == ((void*)0))
  FUNC_2("out of space in makeinit");
 for (VAR_4=0; VAR_4 <= VAR_5; VAR_4++) {
  (VAR_2->posns[2])[VAR_4] = (VAR_2->re[0].lfollow)[VAR_4];
 }
 if ((VAR_2->posns[2])[1] == VAR_2->accept)
  VAR_2->out[2] = 1;
 for (VAR_4=0; VAR_4 < VAR_1; VAR_4++)
  VAR_2->gototab[2][VAR_4] = 0;
 VAR_2->curstat = FUNC_1(VAR_2, 2, VAR_0);
 if (VAR_3) {
  *VAR_2->posns[2] = VAR_5-1;
  for (VAR_4=0; VAR_4 < VAR_5; VAR_4++) {
   (VAR_2->posns[0])[VAR_4] = (VAR_2->posns[2])[VAR_4];
  }

  VAR_2->out[0] = VAR_2->out[2];
  if (VAR_2->curstat != 2)
   --(*VAR_2->posns[VAR_2->curstat]);
 }
 return VAR_2->curstat;
}
