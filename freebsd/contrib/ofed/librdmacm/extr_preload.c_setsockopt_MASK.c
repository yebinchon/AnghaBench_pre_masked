
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int socklen_t ;
struct TYPE_2__ {int (* setsockopt ) (int,int,int,void const*,int ) ;} ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,int,int,void const*,int ) ;
 int FUNC_2 (int,int,int,void const*,int ) ;

int FUNC_3(int VAR_2, int VAR_3, int VAR_4,
  const void *VAR_5, socklen_t VAR_6)
{
 int VAR_7;
 return (FUNC_0(VAR_2, &VAR_7) == VAR_0) ?
  FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6) :
  VAR_1.setsockopt(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
}
