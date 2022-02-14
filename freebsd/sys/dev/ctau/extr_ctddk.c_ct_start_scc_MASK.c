
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* sccrx; char* scctx; TYPE_1__* board; scalar_t__ num; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {scalar_t__ type; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int) ;

void FUNC_1 (ct_chan_t *VAR_9, char *VAR_10, char *VAR_11)
{
 VAR_9->sccrx = VAR_10;
 VAR_9->scctx = VAR_11;


 if (VAR_9->board->type != VAR_4 && VAR_9->board->type != VAR_5 &&
     VAR_9->board->type != VAR_3)
  return;

 FUNC_0 (VAR_9->board->port, VAR_9->num ? VAR_1 : VAR_1 | VAR_0,
   VAR_7 | VAR_6);
 FUNC_0 (VAR_9->board->port, VAR_2, VAR_8);
}
