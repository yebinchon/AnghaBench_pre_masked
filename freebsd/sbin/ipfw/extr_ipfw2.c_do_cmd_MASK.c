
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int socklen_t ;
struct TYPE_2__ {scalar_t__ test_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ,int,void*,int *) ;
 int VAR_12 ;
 int FUNC_2 (int,int ,int,void*,uintptr_t) ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(int VAR_13, void *VAR_14, uintptr_t VAR_15)
{
 int VAR_16;

 if (VAR_11.test_only)
  return 0;

 if (VAR_12 == -1)
  VAR_12 = FUNC_3(VAR_0, VAR_10, VAR_3);
 if (VAR_12 < 0)
  FUNC_0(VAR_1, "socket");

 if (VAR_13 == VAR_7 || VAR_13 == VAR_4 ||
     VAR_13 == VAR_6 || VAR_13 == VAR_5 ||
     VAR_13 == VAR_8 ||
     VAR_13 < 0 ||
     VAR_13 == VAR_9) {
  if (VAR_13 < 0)
   VAR_13 = -VAR_13;
  VAR_16 = FUNC_1(VAR_12, VAR_2, VAR_13, VAR_14,
   (socklen_t *)VAR_15);
 } else {
  VAR_16 = FUNC_2(VAR_12, VAR_2, VAR_13, VAR_14, VAR_15);
 }
 return VAR_16;
}
