
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ctl_softc {int io_zone; } ;
struct ctl_io_pool {int zone; int name; struct ctl_softc* ctl_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,int,char*,char const*) ;
 int FUNC_2 (int ,int *,int *,int *,int *,int ) ;

int
FUNC_3(struct ctl_softc *VAR_4, const char *VAR_5,
  uint32_t VAR_6, void **VAR_7)
{
 struct ctl_io_pool *VAR_8;

 VAR_8 = (struct ctl_io_pool *)FUNC_0(sizeof(*VAR_8), VAR_1,
         VAR_2 | VAR_3);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_8->name, sizeof(VAR_8->name), "CTL IO %s", VAR_5);
 VAR_8->ctl_softc = VAR_4;





 VAR_8->zone = VAR_4->io_zone;


 *VAR_7 = VAR_8;
 return (0);
}
