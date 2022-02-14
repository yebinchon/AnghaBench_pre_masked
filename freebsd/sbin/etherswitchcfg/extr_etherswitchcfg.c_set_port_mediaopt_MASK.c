
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cfg {int fd; int unit; } ;
typedef int p ;
struct TYPE_7__ {int ifr_media; } ;
struct TYPE_6__ {int* ifm_ulist; int ifm_count; } ;
struct TYPE_8__ {TYPE_2__ es_ifr; TYPE_1__ es_ifmr; int es_port; } ;
typedef TYPE_3__ etherswitch_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(struct cfg *VAR_7, int VAR_8, char *VAR_9[])
{
 etherswitch_port_t VAR_10;
 int VAR_11[VAR_2];
 int VAR_12;

 if (VAR_8 < 2)
  return (-1);

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_10.es_port = VAR_7->unit;
 VAR_10.es_ifmr.ifm_ulist = VAR_11;
 VAR_10.es_ifmr.ifm_count = VAR_2;
 if (FUNC_5(VAR_7->fd, VAR_5, &VAR_10) != 0)
  FUNC_2(VAR_0, "ioctl(IOETHERSWITCHGETPORT)");
 VAR_12 = FUNC_4(FUNC_0(VAR_11[0]), VAR_9[1]);
 if (VAR_12 == -1)
  FUNC_3(VAR_1, "invalid media options \"%s\"", VAR_9[1]);
 if (VAR_12 & VAR_4) {
  VAR_10.es_ifr.ifr_media &= ~VAR_3;
  VAR_12 &= ~VAR_4;
 }
 VAR_10.es_ifr.ifr_media |= VAR_12;
 if (FUNC_5(VAR_7->fd, VAR_6, &VAR_10) != 0)
  FUNC_2(VAR_0, "ioctl(IOETHERSWITCHSETPORT)");
 return (0);
}
