
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct l_timespec {int dummy; } ;
typedef int lts ;


 int VAR_0 ;
 int FUNC_0 (struct l_timespec*,struct l_timespec*,int) ;
 int FUNC_1 (struct timespec*,struct l_timespec*) ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (struct timespec*) ;
 int FUNC_4 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, struct l_timespec *VAR_2, int VAR_3,
    struct timespec *VAR_4)
{
 struct l_timespec VAR_5;
 struct timespec VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, &VAR_5, sizeof(VAR_5));
 if (VAR_7)
  return (VAR_7);

 VAR_7 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_7)
  return (VAR_7);
 if (VAR_3) {
  FUNC_2(&VAR_6);
  FUNC_4(VAR_4, &VAR_6, VAR_4);
 } else if (VAR_1 == VAR_0) {
  FUNC_3(&VAR_6);
  FUNC_4(VAR_4, &VAR_6, VAR_4);
 }
 return (VAR_7);
}
