
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cfg {int fd; int unit; } ;
typedef int p ;
struct TYPE_7__ {int* ifm_ulist; int ifm_count; int ifm_current; } ;
struct TYPE_6__ {int ifr_media; } ;
struct TYPE_8__ {TYPE_2__ es_ifmr; TYPE_1__ es_ifr; int es_port; } ;
typedef TYPE_3__ etherswitch_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(struct cfg *VAR_5, int VAR_6, char *VAR_7[])
{
 etherswitch_port_t VAR_8;
 int VAR_9[VAR_1];
 int VAR_10;

 if (VAR_6 < 2)
  return (-1);

 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.es_port = VAR_5->unit;
 VAR_8.es_ifmr.ifm_ulist = VAR_9;
 VAR_8.es_ifmr.ifm_count = VAR_1;
 if (FUNC_4(VAR_5->fd, VAR_3, &VAR_8) != 0)
  FUNC_2(VAR_0, "ioctl(IOETHERSWITCHGETPORT)");
 if (VAR_8.es_ifmr.ifm_count == 0)
  return (0);
 VAR_10 = FUNC_3(FUNC_0(VAR_9[0]), VAR_7[1]);
 VAR_8.es_ifr.ifr_media = (VAR_8.es_ifmr.ifm_current & VAR_2) |
         FUNC_0(VAR_9[0]) | VAR_10;
 if (FUNC_4(VAR_5->fd, VAR_4, &VAR_8) != 0)
  FUNC_2(VAR_0, "ioctl(IOETHERSWITCHSETPORT)");
 return (0);
}
