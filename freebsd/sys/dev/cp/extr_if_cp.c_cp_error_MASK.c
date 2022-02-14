
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* ifp; int timeout; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_8__ {TYPE_1__* sys; } ;
typedef TYPE_2__ cp_chan_t ;
struct TYPE_9__ {int if_drv_flags; } ;



 int FUNC_0 (TYPE_1__*,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3 (cp_chan_t *VAR_4, int VAR_5)
{
 drv_t *VAR_6 = VAR_4->sys;

 switch (VAR_5) {
 case 131:
  FUNC_0 (VAR_6, ("frame error\n"));

  FUNC_2(VAR_6->ifp, VAR_1, 1);

  break;
 case 132:
  FUNC_0 (VAR_6, ("crc error\n"));

  FUNC_2(VAR_6->ifp, VAR_1, 1);

  break;
 case 129:
  FUNC_0 (VAR_6, ("overrun error\n"));

  FUNC_2(VAR_6->ifp, VAR_0, 1);
  FUNC_2(VAR_6->ifp, VAR_1, 1);

  break;
 case 130:
  FUNC_0 (VAR_6, ("overflow error\n"));

  FUNC_2(VAR_6->ifp, VAR_1, 1);

  break;
 case 128:
  FUNC_0 (VAR_6, ("underrun error\n"));
  VAR_6->timeout = 0;

  FUNC_2(VAR_6->ifp, VAR_2, 1);
  VAR_6->ifp->if_drv_flags &= ~VAR_3;

  FUNC_1 (VAR_6);
  break;
 default:
  FUNC_0 (VAR_6, ("error #%d\n", VAR_5));
  break;
 }
}
