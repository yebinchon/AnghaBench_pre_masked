
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {int (* getpeername ) (int,struct sockaddr*,int *) ;} ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,struct sockaddr*,int *) ;
 int FUNC_2 (int,struct sockaddr*,int *) ;

int FUNC_3(int VAR_2, struct sockaddr *VAR_3, socklen_t *VAR_4)
{
 int VAR_5;
 return (FUNC_0(VAR_2, &VAR_5) == VAR_0) ?
  FUNC_1(VAR_5, VAR_3, VAR_4) :
  VAR_1.getpeername(VAR_5, VAR_3, VAR_4);
}
