
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct nct_softc {TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nct_softc*) ;
 int FUNC_1 (struct nct_softc*) ;
 int FUNC_2 (struct nct_softc*) ;
 int FUNC_3 (size_t) ;
 struct nct_softc* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct nct_softc *VAR_5;

 if (!FUNC_3(VAR_3))
  return (VAR_0);

 VAR_5 = FUNC_4(VAR_2);
 FUNC_0(VAR_5);
 FUNC_1(VAR_5);
 FUNC_5(VAR_4, VAR_5->pins[VAR_3].gp_name, VAR_1);
 FUNC_2(VAR_5);

 return (0);
}
