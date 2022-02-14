
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct timeval {long tv_sec; } ;
struct TYPE_8__ {scalar_t__ stime; TYPE_1__* dctx; int addr; scalar_t__ done; struct TYPE_8__* link; } ;
typedef TYPE_2__ sent_pkt ;
struct TYPE_9__ {long tv_sec; } ;
struct TYPE_7__ {int flags; int name; } ;


 size_t FUNC_0 (TYPE_2__**) ;


 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 TYPE_2__** VAR_3 ;
 int FUNC_4 (int ,struct timeval*) ;
 long VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(void)
{
 struct timeval VAR_7;
 u_int VAR_8;
 sent_pkt * VAR_9;
 sent_pkt * VAR_10;
 sent_pkt * VAR_11;
 long VAR_12;
 int VAR_13 = 0;

 FUNC_2(3, ("timeout_queries: called to check %u items\n",
    (unsigned)FUNC_0(VAR_3)));

 FUNC_4(VAR_2, &VAR_7);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  VAR_9 = VAR_3[VAR_8];
  for (VAR_10 = VAR_9; VAR_10 != ((void*)0); VAR_10 = VAR_11) {
   char VAR_14;

   VAR_13 = 1;
   switch (VAR_10->dctx->flags & VAR_0) {
       case 129:
    VAR_14 = 'B';
    break;

       case 128:
    VAR_14 = 'U';
    break;

       default:
    FUNC_1(!"spkt->dctx->flags neither UCST nor BCST");
    break;
   }

   VAR_11 = VAR_10->link;
   if (0 == VAR_10->stime || VAR_10->done)
    continue;
   VAR_12 = VAR_7.tv_sec - VAR_10->stime;
   FUNC_2(3, ("%s %s %cCST age %ld\n",
      FUNC_5(&VAR_10->addr),
      VAR_10->dctx->name, VAR_14, VAR_12));
   if (VAR_12 > VAR_4)
    FUNC_6(VAR_10);
  }
 }

 FUNC_2(3, ("timeout_queries: didsomething is %d, age is %ld\n",
    VAR_13, (long) (VAR_7.tv_sec - VAR_6.tv_sec)));
 if (VAR_7.tv_sec - VAR_6.tv_sec > VAR_4) {
  FUNC_2(3, ("timeout_queries: bail!\n"));
  FUNC_3(VAR_2, ((void*)0));
  VAR_5 = VAR_1;
 }
}
