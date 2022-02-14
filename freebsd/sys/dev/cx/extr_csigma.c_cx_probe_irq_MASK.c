
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_3__ {int port; } ;
typedef TYPE_1__ cx_board_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int* VAR_8 ;
 int FUNC_12 (int,int) ;

int FUNC_13 (cx_board_t *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
        port_t VAR_13;

 VAR_12 = FUNC_11 (FUNC_1(VAR_9->port));
        VAR_13 = ((VAR_12 & VAR_1) != VAR_6) ? FUNC_4(VAR_9->port) : FUNC_5(VAR_9->port);

 FUNC_12 (0x20, 0x0a);
 VAR_11 = FUNC_11 (0x20);
 FUNC_12 (0xa0, 0x0a);
 VAR_11 |= FUNC_11 (0xa0) << 8;

 if (VAR_10 > 0) {
  FUNC_12 (FUNC_0(VAR_9->port), VAR_0 | VAR_8[VAR_10]);
  FUNC_12 (FUNC_2(VAR_13), 0);
  FUNC_9 (VAR_13, VAR_2);
  FUNC_12 (FUNC_3(VAR_13), VAR_5);
  FUNC_12 (FUNC_8(VAR_13), 0);
  FUNC_12 (FUNC_7(VAR_13), 1);
  FUNC_9 (VAR_13, VAR_4 | VAR_3);
  FUNC_12 (FUNC_6(VAR_13), VAR_7);
 } else if (VAR_10 < 0) {
  FUNC_10 (VAR_13);
  if (-VAR_10 > 7) {
   FUNC_12 (0xa0, 0x60 | ((-VAR_10) & 7));
   FUNC_12 (0x20, 0x62);
  } else
   FUNC_12 (0x20, 0x60 | (-VAR_10));
 } else
  FUNC_12 (FUNC_0(VAR_9->port), 0);
 return VAR_11;
}
