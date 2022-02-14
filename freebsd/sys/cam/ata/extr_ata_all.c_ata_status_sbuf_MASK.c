
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct TYPE_2__ {int status; int error; } ;
struct ccb_ataio {TYPE_1__ res; } ;


 int FUNC_0 (struct sbuf*,char*,int,char*,char*,char*,char*,char*,char*,char*,char*) ;

int
FUNC_1(struct ccb_ataio *VAR_0, struct sbuf *VAR_1)
{

 FUNC_0(VAR_1, "ATA status: %02x (%s%s%s%s%s%s%s%s)",
     VAR_0->res.status,
     (VAR_0->res.status & 0x80) ? "BSY " : "",
     (VAR_0->res.status & 0x40) ? "DRDY " : "",
     (VAR_0->res.status & 0x20) ? "DF " : "",
     (VAR_0->res.status & 0x10) ? "SERV " : "",
     (VAR_0->res.status & 0x08) ? "DRQ " : "",
     (VAR_0->res.status & 0x04) ? "CORR " : "",
     (VAR_0->res.status & 0x02) ? "IDX " : "",
     (VAR_0->res.status & 0x01) ? "ERR" : "");
 if (VAR_0->res.status & 1) {
     FUNC_0(VAR_1, ", error: %02x (%s%s%s%s%s%s%s%s)",
  VAR_0->res.error,
  (VAR_0->res.error & 0x80) ? "ICRC " : "",
  (VAR_0->res.error & 0x40) ? "UNC " : "",
  (VAR_0->res.error & 0x20) ? "MC " : "",
  (VAR_0->res.error & 0x10) ? "IDNF " : "",
  (VAR_0->res.error & 0x08) ? "MCR " : "",
  (VAR_0->res.error & 0x04) ? "ABRT " : "",
  (VAR_0->res.error & 0x02) ? "NM " : "",
  (VAR_0->res.error & 0x01) ? "ILI" : "");
 }

 return(0);
}
