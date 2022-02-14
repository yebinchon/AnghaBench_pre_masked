
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct cam_periph {int unit_number; int periph_name; } ;
struct TYPE_2__ {scalar_t__ announce_nosbuf; } ;


 int FUNC_0 (struct sbuf*,char*,int ,int ,int,char*) ;
 int FUNC_1 (struct cam_periph*,int,char*) ;
 TYPE_1__ VAR_0 ;

void
FUNC_2(struct cam_periph *VAR_1, struct sbuf *VAR_2,
    int VAR_3, char *VAR_4)
{
 if (VAR_0.announce_nosbuf != 0) {
  FUNC_1(VAR_1, VAR_3, VAR_4);
  return;
 }

 if (VAR_3 != 0) {
  FUNC_0(VAR_2, "%s%d: quirks=0x%b\n", VAR_1->periph_name,
      VAR_1->unit_number, VAR_3, VAR_4);
 }
}
