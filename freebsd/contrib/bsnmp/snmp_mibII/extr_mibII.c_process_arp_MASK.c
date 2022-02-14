
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct sockaddr_dl {int sdl_alen; scalar_t__ sdl_nlen; scalar_t__ sdl_data; int sdl_index; } ;
struct TYPE_2__ {scalar_t__ rmx_expire; } ;
struct rt_msghdr {TYPE_1__ rtm_rmx; } ;
struct mibif {int dummy; } ;
struct mibarp {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mibarp* FUNC_0 (struct mibif*,int ,scalar_t__,int ) ;
 struct mibarp* FUNC_1 (struct mibif*,int ) ;
 struct mibif* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(const struct rt_msghdr *VAR_2, const struct sockaddr_dl *VAR_3,
    const struct sockaddr_in *VAR_4)
{
 struct mibif *VAR_5;
 struct mibarp *VAR_6;


 if (VAR_3->sdl_alen == 0)
  return;
 if ((VAR_5 = FUNC_2(VAR_3->sdl_index)) == ((void*)0))
  return;

 if ((VAR_6 = FUNC_1(VAR_5, VAR_4->sin_addr)) == ((void*)0) &&
     (VAR_6 = FUNC_0(VAR_5, VAR_4->sin_addr,
     VAR_3->sdl_data + VAR_3->sdl_nlen, VAR_3->sdl_alen)) == ((void*)0))
  return;

 if (VAR_2->rtm_rmx.rmx_expire == 0)
  VAR_6->flags |= VAR_1;
 else
  VAR_6->flags &= ~VAR_1;
 VAR_6->flags |= VAR_0;
}
