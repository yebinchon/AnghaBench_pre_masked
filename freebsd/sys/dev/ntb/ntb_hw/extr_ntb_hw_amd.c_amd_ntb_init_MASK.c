
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {scalar_t__ conn_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct amd_ntb_softc*) ;
 int FUNC_1 (struct amd_ntb_softc*) ;
 int FUNC_2 (struct amd_ntb_softc*) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct amd_ntb_softc *VAR_1)
{
 int VAR_2 = 0;

 VAR_1->conn_type = FUNC_0(VAR_1);
 FUNC_3(0, "AMD NTB Side: %s\n",
     (VAR_1->conn_type == VAR_0)? "PRIMARY" : "SECONDARY");

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);

 return (0);
}
