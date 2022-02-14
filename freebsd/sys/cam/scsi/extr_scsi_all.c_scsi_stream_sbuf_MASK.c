
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sbuf*,char*,...) ;

void
FUNC_1(struct sbuf *VAR_3, uint8_t VAR_4)
{
 int VAR_5;

 VAR_5 = 0;



 FUNC_0(VAR_3, "Stream Command Sense Data: ");
 if (VAR_4 & VAR_1) {
  FUNC_0(VAR_3, "Filemark");
  VAR_5 = 1;
 }

 if (VAR_4 & VAR_0) {
  FUNC_0(VAR_3, "%sEOM", (VAR_5) ? "," : "");
  VAR_5 = 1;
 }

 if (VAR_4 & VAR_2)
  FUNC_0(VAR_3, "%sILI", (VAR_5) ? "," : "");
}
