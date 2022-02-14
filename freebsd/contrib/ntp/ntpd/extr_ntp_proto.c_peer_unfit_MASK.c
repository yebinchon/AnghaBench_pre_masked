
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {scalar_t__ leap; int stratum; int flags; int flash; int reach; int hpoll; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct peer*) ;
 scalar_t__ FUNC_2 (struct peer*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int
FUNC_3(
 struct peer *VAR_12
 )
{
 int VAR_13 = 0;






 if ( VAR_12->leap == VAR_2
     || VAR_12->stratum < VAR_10
     || VAR_12->stratum >= VAR_9) {
  VAR_13 |= VAR_4;
 }






 if ( !(VAR_12->flags & VAR_1)
     && FUNC_2(VAR_12) >= VAR_11
          + VAR_8 * FUNC_0(VAR_12->hpoll)) {
  VAR_13 |= VAR_5;
 }







 if (VAR_12->stratum > 1 && FUNC_1(VAR_12)) {
  VAR_13 |= VAR_6;
 }





 if (!VAR_12->reach || (VAR_12->flags & VAR_0)) {
  VAR_13 |= VAR_7;
 }

 VAR_12->flash &= ~VAR_3;
 VAR_12->flash |= VAR_13;
 return (VAR_13);
}
