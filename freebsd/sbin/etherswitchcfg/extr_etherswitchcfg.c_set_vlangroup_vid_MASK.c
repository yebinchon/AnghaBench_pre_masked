
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vg ;
struct cfg {int fd; int unit; } ;
struct TYPE_4__ {int es_vid; int es_vlangroup; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct cfg *VAR_5, int VAR_6, char *VAR_7[])
{
 int VAR_8;
 etherswitch_vlangroup_t VAR_9;

 if (VAR_6 < 2)
  return (-1);

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_8 = FUNC_4(VAR_7[1], ((void*)0), 0);
 if (VAR_8 < 0 || VAR_8 > VAR_2)
  FUNC_1(VAR_1, "vlan must be between 0 and %d", VAR_2);
 VAR_9.es_vlangroup = VAR_5->unit;
 if (FUNC_2(VAR_5->fd, VAR_3, &VAR_9) != 0)
  FUNC_0(VAR_0, "ioctl(IOETHERSWITCHGETVLANGROUP)");
 VAR_9.es_vid = VAR_8;
 if (FUNC_2(VAR_5->fd, VAR_4, &VAR_9) != 0)
  FUNC_0(VAR_0, "ioctl(IOETHERSWITCHSETVLANGROUP)");
 return (0);
}
