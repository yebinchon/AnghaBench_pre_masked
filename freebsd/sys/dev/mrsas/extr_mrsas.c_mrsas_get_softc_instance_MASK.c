
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct mrsas_softc {int dummy; } ;
struct mrsas_iocpacket {size_t host_no; } ;
struct cdev {struct mrsas_softc* si_drv1; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int max_index; struct mrsas_softc** sc_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mrsas_softc*,int ,char*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static struct mrsas_softc *
FUNC_2(struct cdev *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct mrsas_softc *VAR_6 = ((void*)0);
 struct mrsas_iocpacket *VAR_7 = (struct mrsas_iocpacket *)VAR_5;

 if (VAR_4 == VAR_1) {
  VAR_6 = VAR_3->si_drv1;
 } else {




  VAR_6 = VAR_2.sc_ptr[VAR_7->host_no];
  if (VAR_6 == ((void*)0))
   FUNC_1("There is no Controller number %d\n",
       VAR_7->host_no);
  else if (VAR_7->host_no >= VAR_2.max_index)
   FUNC_0(VAR_6, VAR_0,
       "Invalid Controller number %d\n", VAR_7->host_no);
 }

 return VAR_6;
}
