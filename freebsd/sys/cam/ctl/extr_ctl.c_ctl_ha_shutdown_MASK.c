
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctl_softc {int othersc_pool; } ;
struct ctl_port {struct ctl_port* port_name; } ;
struct TYPE_2__ {int port_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ctl_port* FUNC_0 (int *) ;
 struct ctl_softc* VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ctl_softc*) ;
 int FUNC_3 (struct ctl_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ctl_port*) ;
 int FUNC_6 (struct ctl_port*,int ) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_7(void)
{
 struct ctl_softc *VAR_6 = VAR_4;
 struct ctl_port *VAR_7;

 FUNC_3(VAR_6);
 if (FUNC_1(VAR_0) != VAR_1)
  return (VAR_2);
 if (FUNC_2(VAR_6) != VAR_1)
  return (VAR_2);
 FUNC_4(VAR_6->othersc_pool);
 while ((VAR_7 = FUNC_0(&VAR_5.port_list)) != ((void*)0)) {
  FUNC_5(VAR_7);
  FUNC_6(VAR_7->port_name, VAR_3);
  FUNC_6(VAR_7, VAR_3);
 }
 return (0);
}
