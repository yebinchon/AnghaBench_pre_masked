
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_3__ {int num; unsigned char* atbuf; void** attach; unsigned char* btbuf; scalar_t__ mode; int port; } ;
typedef TYPE_1__ cx_chan_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*,char*,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11 (cx_chan_t *VAR_8, char *VAR_9, int VAR_10,
 void *VAR_11)
{
 unsigned char *VAR_12;
 port_t VAR_13, VAR_14;
 void **VAR_15;


 FUNC_9 (FUNC_4(VAR_8->port), VAR_8->num & 3);


 if (FUNC_7 (FUNC_5(VAR_8->port)) & VAR_3) {
  if (FUNC_7 (FUNC_3(VAR_8->port)) & VAR_2) {
   VAR_12 = VAR_8->atbuf;
   VAR_13 = FUNC_0(VAR_8->port);
   VAR_14 = FUNC_1(VAR_8->port);
   VAR_15 = &VAR_8->attach[0];
  } else {
   VAR_12 = VAR_8->btbuf;
   VAR_13 = FUNC_2(VAR_8->port);
   VAR_14 = FUNC_3(VAR_8->port);
   VAR_15 = &VAR_8->attach[1];
  }
 } else {
  if (FUNC_7 (FUNC_1(VAR_8->port)) & VAR_2) {
   VAR_12 = VAR_8->btbuf;
   VAR_13 = FUNC_2(VAR_8->port);
   VAR_14 = FUNC_3(VAR_8->port);
   VAR_15 = &VAR_8->attach[1];
  } else {
   VAR_12 = VAR_8->atbuf;
   VAR_13 = FUNC_0(VAR_8->port);
   VAR_14 = FUNC_1(VAR_8->port);
   VAR_15 = &VAR_8->attach[0];
  }
 }

 if (FUNC_7 (VAR_14) & VAR_2)
  return -1;

 FUNC_8 (VAR_12, VAR_9, VAR_10);
 *VAR_15 = VAR_11;


 FUNC_10 (VAR_13, VAR_10);
 FUNC_9 (VAR_14, VAR_0 | VAR_1 | VAR_2);



 if (VAR_8->mode != VAR_7) {
  if ((FUNC_7(FUNC_1(VAR_8->port)) & VAR_2) &&
      (FUNC_7(FUNC_3(VAR_8->port)) & VAR_2)) {
   FUNC_9 (FUNC_6(VAR_8->port), VAR_4 | VAR_5 | VAR_6);
  } else
   FUNC_9 (FUNC_6(VAR_8->port), VAR_4 | VAR_5);
 }
 return 0;
}
