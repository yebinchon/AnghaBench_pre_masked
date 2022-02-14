
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
struct TYPE_2__ {int (* sendto ) (int,void const*,size_t,int,struct sockaddr const*,int ) ;} ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,void const*,size_t,int,struct sockaddr const*,int ) ;
 int FUNC_2 (int,void const*,size_t,int,struct sockaddr const*,int ) ;

ssize_t FUNC_3(int VAR_2, const void *VAR_3, size_t VAR_4, int VAR_5,
  const struct sockaddr *VAR_6, socklen_t VAR_7)
{
 int VAR_8;
 return (FUNC_0(VAR_2, &VAR_8) == VAR_0) ?
  FUNC_1(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7) :
  VAR_1.sendto(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
