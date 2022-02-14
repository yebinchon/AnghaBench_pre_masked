
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ipf_state; } ;
typedef TYPE_1__ ipf_main_softc_t ;
struct TYPE_8__ {int * ftp_pendstate; int * ftp_pendnat; } ;
typedef TYPE_2__ ftpinfo_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void
FUNC_4(ipf_main_softc_t *VAR_0, ftpinfo_t *VAR_1)
{
 if (VAR_1->ftp_pendnat != ((void*)0))
  FUNC_2(VAR_0, VAR_1->ftp_pendnat);

 if (VAR_1->ftp_pendstate != ((void*)0)) {
  FUNC_0(&VAR_0->ipf_state);
  FUNC_3(VAR_0, VAR_1->ftp_pendstate);
  FUNC_1(&VAR_0->ipf_state);
 }
}
