
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; int obytes; int port; int opkts; int * attach; int (* call_on_tx ) (TYPE_1__*,int ,int) ;int oerrs; int (* call_on_err ) (TYPE_1__*,int ) ;int tintr; } ;
typedef TYPE_1__ cx_chan_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned char VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_12 (cx_chan_t *VAR_11)
{
 unsigned char VAR_12;
 int VAR_13 = 0;

 ++VAR_11->tintr;
 VAR_12 = FUNC_6 (FUNC_5(VAR_11->port));
 if (VAR_12 & VAR_10) {
  if (VAR_11->call_on_err)
   VAR_11->call_on_err (VAR_11, VAR_1);
  ++VAR_11->oerrs;
 } else if (VAR_12 & (VAR_7 | VAR_9 | VAR_8)) {

  if (VAR_12 & VAR_6) {
   VAR_13 = FUNC_7(FUNC_2(VAR_11->port));
   if (VAR_11->call_on_tx)
    VAR_11->call_on_tx (VAR_11, VAR_11->attach[1], VAR_13);
  } else {
   VAR_13 = FUNC_7(FUNC_0(VAR_11->port));
   if (VAR_11->call_on_tx)
    VAR_11->call_on_tx (VAR_11, VAR_11->attach[0], VAR_13);
  }
  if (VAR_11->mode != VAR_5 && VAR_13 != 0)
   ++VAR_11->opkts;
  VAR_11->obytes += VAR_13;
 }



 if (VAR_11->mode != VAR_5) {
  if ((FUNC_6 (FUNC_1(VAR_11->port)) & VAR_0) &&
     (FUNC_6 (FUNC_3(VAR_11->port)) & VAR_0)) {
   FUNC_8 (FUNC_4(VAR_11->port), VAR_2 | VAR_3 | VAR_4);
  } else
   FUNC_8 (FUNC_4(VAR_11->port), VAR_2 | VAR_3);
 }
}
