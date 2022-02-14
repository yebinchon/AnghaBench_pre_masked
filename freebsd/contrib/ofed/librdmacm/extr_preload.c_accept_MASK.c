
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {int (* accept ) (int,struct sockaddr*,int *) ;} ;


 int FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,int,scalar_t__,int ) ;
 int FUNC_5 (int,struct sockaddr*,int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (int,struct sockaddr*,int *) ;
 int FUNC_7 (int,struct sockaddr*,int *) ;

int FUNC_8(int VAR_6, struct sockaddr *VAR_7, socklen_t *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (FUNC_1(VAR_6, &VAR_9) == VAR_4) {
  VAR_10 = FUNC_3();
  if (VAR_10 < 0)
   return VAR_10;

  VAR_11 = FUNC_5(VAR_9, VAR_7, VAR_8);
  if (VAR_11 < 0) {
   FUNC_0(VAR_10, &VAR_9);
   return VAR_11;
  }

  FUNC_4(VAR_10, VAR_11, VAR_4, VAR_3);
  return VAR_10;
 } else if (FUNC_2(VAR_6) == VAR_0) {
  VAR_10 = FUNC_3();
  if (VAR_10 < 0)
   return VAR_10;

  VAR_11 = VAR_5.accept(VAR_9, VAR_7, VAR_8);
  if (VAR_11 < 0) {
   FUNC_0(VAR_10, &VAR_9);
   return VAR_11;
  }

  FUNC_4(VAR_10, VAR_11, VAR_2, VAR_1);
  return VAR_10;
 } else {
  return VAR_5.accept(VAR_9, VAR_7, VAR_8);
 }
}
