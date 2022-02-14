
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct soctherm_softc {int ntsensors; TYPE_1__* tsensors; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (int *,int ,int ,char*,int,int *,char*) ;
 struct sysctl_oid* FUNC_1 (int *,int ,int ,int ,int,struct soctherm_softc*,int,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct soctherm_softc *VAR_7)
{
 int VAR_8;
 struct sysctl_oid *VAR_9, *VAR_10;

 FUNC_4(&VAR_5);

 VAR_9 = FUNC_0(&VAR_5,
     FUNC_3(VAR_4), VAR_3, "temperature",
     VAR_0, ((void*)0), "");
 if (VAR_9 == ((void*)0))
  return (VAR_2);


 for (VAR_8 = VAR_7->ntsensors - 1; VAR_8 >= 0; VAR_8--) {
  VAR_10 = FUNC_1(&VAR_5,
      FUNC_2(VAR_9), VAR_3, VAR_7->tsensors[VAR_8].name,
      VAR_1 | VAR_0, VAR_7, VAR_8,
      VAR_6, "IK", "SoC Temperature");
  if (VAR_10 == ((void*)0))
   return (VAR_2);
 }

 return (0);
}
