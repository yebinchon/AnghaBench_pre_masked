
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct iwi_sensitivity {int rssi; } ;
typedef int int8_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwi_softc*,int ,struct iwi_sensitivity*,int) ;
 int FUNC_3 (struct iwi_sensitivity*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct iwi_softc *VAR_1, int8_t VAR_2)
{
 struct iwi_sensitivity VAR_3;

 FUNC_0(("Setting sensitivity to %d\n", VAR_2));

 FUNC_3(&VAR_3, 0, sizeof VAR_3);
 VAR_3.rssi = FUNC_1(VAR_2);
 return FUNC_2(VAR_1, VAR_0, &VAR_3, sizeof VAR_3);
}
