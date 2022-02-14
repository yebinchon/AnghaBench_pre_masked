
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr_dl {scalar_t__ sdl_family; int sdl_index; } ;
struct sockaddr {int dummy; } ;
struct interface {int int_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct interface* FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct sockaddr **VAR_2,
       struct sockaddr_in *VAR_3)
{
 struct sockaddr_dl *VAR_4 = (struct sockaddr_dl *)*VAR_2;
 struct interface *VAR_5;

 if (VAR_4 == ((void*)0))
  return 0;
 if ((VAR_4)->sdl_family == VAR_0)
  return 1;
 if ((VAR_4)->sdl_family != VAR_1)
  return 0;

 VAR_5 = FUNC_0(VAR_4->sdl_index, 1);
 if (VAR_5 == ((void*)0))
  return 0;

 VAR_3->sin_addr.s_addr = VAR_5->int_addr;



 VAR_3->sin_family = VAR_0;
 *VAR_2 = (struct sockaddr*)VAR_3;

 return 1;
}
