
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_periph {char* periph_name; int unit_number; } ;


 int FUNC_0 (char*,char*,int ,int,char*) ;

void
FUNC_1(struct cam_periph *VAR_0, int VAR_1, char *VAR_2)
{
 if (VAR_1 != 0) {
  FUNC_0("%s%d: quirks=0x%b\n", VAR_0->periph_name,
      VAR_0->unit_number, VAR_1, VAR_2);
 }
}
