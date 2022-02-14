
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siocnstate {int dummy; } ;
struct consdev {scalar_t__ cn_unit; } ;
typedef int speed_t ;
typedef scalar_t__ Port_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct siocnstate*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct siocnstate*,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct consdev *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;
 struct siocnstate VAR_13;
 Port_t VAR_14;
 speed_t VAR_15;

 if (VAR_9 != ((void*)0) && VAR_9->cn_unit == VAR_7) {
  VAR_14 = VAR_6;
  VAR_15 = VAR_1;
 } else {




  return;

 }
 VAR_12 = FUNC_7();
 VAR_11 = 0;
 if (!VAR_3 && VAR_4 == 2 && !FUNC_1(&VAR_5)) {
  FUNC_0(&VAR_5);
  VAR_11 = 1;
 }
 FUNC_5(&VAR_13, VAR_14, VAR_15);
 FUNC_6(VAR_14);
 FUNC_3(VAR_14 + VAR_0, VAR_10);
 FUNC_4(&VAR_13, VAR_14);
 if (VAR_11)
  FUNC_2(&VAR_5);
 FUNC_8(VAR_12);
}
