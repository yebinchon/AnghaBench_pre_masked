
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ntb_softc {int ppd; int conn_type; int device; int dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ntb_softc *VAR_6)
{
 uint32_t VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_6->device, VAR_5, 4);
 VAR_6->ppd = VAR_7;

 if ((VAR_7 & VAR_1) != 0)
  VAR_6->dev_type = VAR_3;
 else
  VAR_6->dev_type = VAR_4;

 VAR_8 = (VAR_7 & VAR_0) >> 8;
 switch (VAR_8) {
 case 128:
  VAR_6->conn_type = VAR_8;
  break;
 default:
  FUNC_0(VAR_6->device, "Unsupported NTB configuration\n");
  return (VAR_2);
 }
 return (0);
}
