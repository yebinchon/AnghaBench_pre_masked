
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cfg {int fd; int unit; } ;
typedef int p ;
struct TYPE_4__ {int es_pvid; int es_port; } ;
typedef TYPE_1__ etherswitch_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct cfg *VAR_5, int VAR_6, char *VAR_7[])
{
 int VAR_8;
 etherswitch_port_t VAR_9;

 if (VAR_6 < 2)
  return (-1);

 VAR_8 = FUNC_4(VAR_7[1], ((void*)0), 0);
 if (VAR_8 < 0 || VAR_8 > VAR_2)
  FUNC_2(VAR_1, "pvid must be between 0 and %d",
      VAR_2);
 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.es_port = VAR_5->unit;
 if (FUNC_3(VAR_5->fd, VAR_3, &VAR_9) != 0)
  FUNC_1(VAR_0, "ioctl(IOETHERSWITCHGETPORT)");
 VAR_9.es_pvid = VAR_8;
 if (FUNC_3(VAR_5->fd, VAR_4, &VAR_9) != 0)
  FUNC_1(VAR_0, "ioctl(IOETHERSWITCHSETPORT)");
 return (0);
}
