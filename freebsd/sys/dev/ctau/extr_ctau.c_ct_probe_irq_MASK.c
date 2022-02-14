
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bcr0; int port; } ;
typedef TYPE_1__ ct_board_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int) ;
 int* VAR_10 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;

int FUNC_11 (ct_board_t *VAR_11, int VAR_12)
{
 int VAR_13;

 FUNC_9 (0x20, 0x0a);
 VAR_13 = FUNC_8 (0x20);
 FUNC_9 (0xa0, 0x0a);
 VAR_13 |= FUNC_8 (0xa0) << 8;

 if (VAR_12 > 0) {
  FUNC_9 (FUNC_0(VAR_11->port), VAR_0 | VAR_10[VAR_12]);
  FUNC_9 (FUNC_6(VAR_11->port,VAR_5), 0);
  FUNC_10 (FUNC_6(VAR_11->port,VAR_3), 1);
  FUNC_10 (FUNC_6(VAR_11->port,VAR_2), 0);
  FUNC_9 (FUNC_6(VAR_11->port,VAR_4), VAR_8 | VAR_9);
  FUNC_9 (FUNC_5(VAR_11->port), VAR_6);
 } else if (VAR_12 < 0) {
  FUNC_9 (FUNC_0(VAR_11->port), VAR_0 | VAR_10[-VAR_12]);
  FUNC_9 (FUNC_3(VAR_11->port), 0);
  FUNC_9 (FUNC_4(VAR_11->port), 0);
  FUNC_9 (FUNC_5(VAR_11->port), 0);
  FUNC_9 (FUNC_6(VAR_11->port,VAR_4), 0);
  FUNC_7 (FUNC_1 (VAR_11->port), VAR_1, 0);
  FUNC_7 (FUNC_2 (VAR_11->port), VAR_1, 0);
  if (-VAR_12 > 7) {
   FUNC_9 (0xa0, 0x60 | ((-VAR_12) & 7));
   FUNC_9 (0x20, 0x62);
  } else
   FUNC_9 (0x20, 0x60 | (-VAR_12));
 } else {
  FUNC_9 (FUNC_0(VAR_11->port), VAR_11->bcr0);
  FUNC_7 (FUNC_1 (VAR_11->port), VAR_1, VAR_7);
  FUNC_7 (FUNC_2 (VAR_11->port), VAR_1, VAR_7);
 }

 return VAR_13;
}
