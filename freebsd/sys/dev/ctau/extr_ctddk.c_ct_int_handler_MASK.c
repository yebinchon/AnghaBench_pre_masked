
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ct_chan_t ;
struct TYPE_4__ {scalar_t__ type; int * chan; int port; int bcr1; } ;
typedef TYPE_1__ ct_board_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 unsigned char VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned char) ;
 unsigned char FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7 (ct_board_t *VAR_10)
{
 unsigned char VAR_11, VAR_12;
 ct_chan_t *VAR_13;

 while ((VAR_11 = FUNC_5 (FUNC_1(VAR_10->port))) & VAR_2) {
  if (VAR_11 & VAR_3) {
   FUNC_6 (FUNC_0(VAR_10->port), VAR_10->bcr1);
  } else if (VAR_11 & VAR_0) {
   if (VAR_10->type == VAR_6 || VAR_10->type == VAR_7 ||
       VAR_10->type == VAR_8 || VAR_10->type == VAR_4 ||
       VAR_10->type == VAR_5)
    FUNC_3 (VAR_10);
  } else if (VAR_11 & VAR_1) {

   VAR_12 = FUNC_5 (FUNC_2(VAR_10->port));
   VAR_13 = VAR_10->chan + (VAR_12 & VAR_9 ? 1 : 0);
   FUNC_4 (VAR_13, VAR_12);
  }
 }
}
