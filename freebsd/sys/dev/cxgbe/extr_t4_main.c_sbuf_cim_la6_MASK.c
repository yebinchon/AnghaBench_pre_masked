
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sbuf {int dummy; } ;
struct TYPE_2__ {int cim_la_size; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct adapter *VAR_1, struct sbuf *VAR_2, uint32_t *VAR_3, uint32_t VAR_4)
{
 uint32_t *VAR_5;

 FUNC_0(VAR_2, "Status   Inst    Data      PC%s",
     VAR_4 & VAR_0 ? "" :
     "     LS0Stat  LS0Addr  LS0Data  LS1Stat  LS1Addr  LS1Data");

 for (VAR_5 = VAR_3; VAR_5 <= &VAR_3[VAR_1->params.cim_la_size - 10]; VAR_5 += 10) {
  if (VAR_4 & VAR_0) {
   FUNC_0(VAR_2, "\n  %02x   %08x %08x %08x",
       VAR_5[3] & 0xff, VAR_5[2], VAR_5[1], VAR_5[0]);
   FUNC_0(VAR_2, "\n  %02x   %02x%06x %02x%06x %02x%06x",
       (VAR_5[6] >> 8) & 0xff, VAR_5[6] & 0xff, VAR_5[5] >> 8,
       VAR_5[5] & 0xff, VAR_5[4] >> 8, VAR_5[4] & 0xff, VAR_5[3] >> 8);
   FUNC_0(VAR_2, "\n  %02x   %04x%04x %04x%04x %04x%04x",
       (VAR_5[9] >> 16) & 0xff, VAR_5[9] & 0xffff, VAR_5[8] >> 16,
       VAR_5[8] & 0xffff, VAR_5[7] >> 16, VAR_5[7] & 0xffff,
       VAR_5[6] >> 16);
  } else {
   FUNC_0(VAR_2, "\n  %02x   %04x%04x %04x%04x %04x%04x "
       "%08x %08x %08x %08x %08x %08x",
       (VAR_5[9] >> 16) & 0xff,
       VAR_5[9] & 0xffff, VAR_5[8] >> 16,
       VAR_5[8] & 0xffff, VAR_5[7] >> 16,
       VAR_5[7] & 0xffff, VAR_5[6] >> 16,
       VAR_5[2], VAR_5[1], VAR_5[0], VAR_5[5], VAR_5[4], VAR_5[3]);
  }
 }
}
