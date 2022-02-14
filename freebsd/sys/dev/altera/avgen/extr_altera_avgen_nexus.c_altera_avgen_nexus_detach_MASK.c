
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_avgen_softc {int avg_res; int avg_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct altera_avgen_softc*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct altera_avgen_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct altera_avgen_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_2->avg_rid, VAR_2->avg_res);
 return (0);
}
