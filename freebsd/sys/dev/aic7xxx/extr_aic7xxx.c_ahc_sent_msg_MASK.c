
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahc_softc {size_t msgout_len; scalar_t__* msgout_buf; size_t msgout_index; } ;
typedef scalar_t__ ahc_msgtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(struct ahc_softc *VAR_7, ahc_msgtype VAR_8, u_int VAR_9, int VAR_10)
{
 int VAR_11;
 u_int VAR_12;

 VAR_11 = VAR_2;
 VAR_12 = 0;

 while (VAR_12 < VAR_7->msgout_len) {
  if (VAR_7->msgout_buf[VAR_12] == VAR_3) {
   u_int VAR_13;

   VAR_13 = VAR_12 + 1 + VAR_7->msgout_buf[VAR_12 + 1];
   if (VAR_7->msgout_buf[VAR_12+2] == VAR_9
    && VAR_8 == VAR_1) {

    if (VAR_10) {
     if (VAR_7->msgout_index > VAR_13)
      VAR_11 = VAR_6;
    } else if (VAR_7->msgout_index > VAR_12)
     VAR_11 = VAR_6;
   }
   VAR_12 = VAR_13;
  } else if (VAR_7->msgout_buf[VAR_12] >= VAR_5
   && VAR_7->msgout_buf[VAR_12] <= VAR_4) {


   VAR_12 += 2;
  } else {

   if (VAR_8 == VAR_0
    && VAR_7->msgout_buf[VAR_12] == VAR_9
    && VAR_7->msgout_index > VAR_12)
    VAR_11 = VAR_6;
   VAR_12++;
  }

  if (VAR_11)
   break;
 }
 return (VAR_11);
}
