
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {int (* connect ) (int,struct sockaddr const*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr const*,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (int,struct sockaddr const*,int ) ;
 int FUNC_6 (int,int ) ;

int FUNC_7(int VAR_7, const struct sockaddr *VAR_8, socklen_t VAR_9)
{
 int VAR_10, VAR_11;

 if (FUNC_0(VAR_7, &VAR_10) == VAR_5) {
  VAR_11 = FUNC_4(VAR_10, VAR_8, VAR_9);
  if (!VAR_11 || VAR_1 == VAR_0)
   return VAR_11;

  VAR_11 = FUNC_6(VAR_7, VAR_4);
  if (VAR_11 < 0)
   return VAR_11;

  FUNC_3(VAR_10);
  VAR_10 = VAR_11;
 } else if (FUNC_1(VAR_7) == VAR_2) {
  FUNC_2(VAR_7, VAR_10, VAR_4, VAR_3);
 }

 return VAR_6.connect(VAR_10, VAR_8, VAR_9);
}
