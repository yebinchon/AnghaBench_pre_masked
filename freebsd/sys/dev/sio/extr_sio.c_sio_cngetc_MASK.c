
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siocnstate {int dummy; } ;
struct consdev {scalar_t__ cn_unit; } ;
typedef int speed_t ;
typedef scalar_t__ Port_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct siocnstate*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct siocnstate*,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct consdev *VAR_8)
{
 int VAR_9;
 Port_t VAR_10;
 int VAR_11;
 struct siocnstate VAR_12;
 speed_t VAR_13;

 if (VAR_8 != ((void*)0) && VAR_8->cn_unit == VAR_6) {
  VAR_10 = VAR_5;
  VAR_13 = VAR_3;
 } else {




  return (-1);

 }
 VAR_11 = FUNC_3();
 FUNC_2(&VAR_12, VAR_10, VAR_13);
 if (FUNC_0(VAR_10 + VAR_2) & VAR_0)
  VAR_9 = FUNC_0(VAR_10 + VAR_1);
 else
  VAR_9 = -1;
 FUNC_1(&VAR_12, VAR_10);
 FUNC_4(VAR_11);
 return (VAR_9);
}
