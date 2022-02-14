
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_addr; } ;
struct pfsyncreq {TYPE_1__ pfsyncr_syncpeer; } ;
struct afswtch {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {scalar_t__ ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int,int ,scalar_t__) ;

void
FUNC_3(const char *VAR_3, int VAR_4, int VAR_5, const struct afswtch *VAR_6)
{
 struct pfsyncreq VAR_7;

 FUNC_0((char *)&VAR_7, sizeof(struct pfsyncreq));
 VAR_2.ifr_data = (caddr_t)&VAR_7;

 if (FUNC_2(VAR_5, VAR_0, (caddr_t)&VAR_2) == -1)
  FUNC_1(1, "SIOCGETPFSYNC");

 VAR_7.pfsyncr_syncpeer.s_addr = 0;

 if (FUNC_2(VAR_5, VAR_1, (caddr_t)&VAR_2) == -1)
  FUNC_1(1, "SIOCSETPFSYNC");
}
