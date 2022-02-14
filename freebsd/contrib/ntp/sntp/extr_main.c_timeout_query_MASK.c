
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_5__ {TYPE_1__* dctx; int addr; int done; } ;
typedef TYPE_2__ sent_pkt ;
struct TYPE_4__ {int flags; int name; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int ,char,int ) ;
 int VAR_3 ;

void FUNC_4(
 sent_pkt * VAR_4
 )
{
 sockaddr_u * VAR_5;
 char VAR_6;


 switch (VAR_4->dctx->flags & VAR_0) {
     case 129:
  VAR_6 = 'B';
  break;

     case 128:
  VAR_6 = 'U';
  break;

     default:
  FUNC_0(!"spkt->dctx->flags neither UCST nor BCST");
  break;
 }
 VAR_4->done = VAR_2;
 VAR_5 = &VAR_4->addr;
 FUNC_3(VAR_1, "%s no %cCST response after %d seconds",
  FUNC_2(VAR_4->dctx->name, VAR_5), VAR_6,
  VAR_3);
 FUNC_1(VAR_4->dctx->name, VAR_5);
 return;
}
