
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsyncreq {int pfsyncr_maxupdates; } ;
struct afswtch {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,char const*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int,int ,scalar_t__) ;
 int FUNC_4 (char*,int ,int) ;

void
FUNC_5(const char *VAR_3, int VAR_4, int VAR_5, const struct afswtch *VAR_6)
{
 struct pfsyncreq VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3);
 if ((VAR_8 < 0) || (VAR_8 > 255))
  FUNC_2(1, "maxupd %s: out of range", VAR_3);

 FUNC_4((char *)&VAR_7, 0, sizeof(struct pfsyncreq));
 VAR_2.ifr_data = (caddr_t)&VAR_7;

 if (FUNC_3(VAR_5, VAR_0, (caddr_t)&VAR_2) == -1)
  FUNC_1(1, "SIOCGETPFSYNC");

 VAR_7.pfsyncr_maxupdates = VAR_8;

 if (FUNC_3(VAR_5, VAR_1, (caddr_t)&VAR_2) == -1)
  FUNC_1(1, "SIOCSETPFSYNC");
}
