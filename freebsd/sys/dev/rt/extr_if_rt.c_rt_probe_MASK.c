
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {unsigned int rt_chipid; } ;
struct ofw_compat_data {scalar_t__ ocd_data; } ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct rt_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct ofw_compat_data* FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (char*,int,char*,char,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7)
{
 struct rt_softc *VAR_8 = FUNC_0(VAR_7);
 char VAR_9[80];
 VAR_8->rt_chipid = VAR_4;


 FUNC_3(VAR_9, sizeof(VAR_9), "Ralink %cT%x onChip Ethernet driver",
  VAR_8->rt_chipid >= 0x7600 ? 'M' : 'R', VAR_8->rt_chipid);
 FUNC_1(VAR_7, VAR_9);
 return (VAR_0);
}
