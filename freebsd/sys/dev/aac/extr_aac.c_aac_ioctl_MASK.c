
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aac_statrequest {size_t as_item; int as_qstat; } ;
typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {struct aac_softc* si_drv1; } ;
struct aac_softc {int * aac_qstat; } ;
struct aac_qstat {int dummy; } ;
typedef scalar_t__ caddr_t ;







 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (struct aac_softc*,scalar_t__) ;
 int FUNC_1 (struct aac_softc*,scalar_t__) ;
 int FUNC_2 (struct aac_softc*,scalar_t__) ;
 int FUNC_3 (struct aac_softc*,scalar_t__) ;
 int FUNC_4 (struct aac_softc*,scalar_t__) ;
 int FUNC_5 (struct aac_softc*,scalar_t__) ;
 int FUNC_6 (struct aac_softc*,scalar_t__) ;
 int FUNC_7 (struct aac_softc*,scalar_t__) ;
 int FUNC_8 (struct aac_softc*,scalar_t__) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct aac_softc*,char*,char*,...) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_4, u_long VAR_5, caddr_t VAR_6, int VAR_7, struct thread *VAR_8)
{
 union aac_statrequest *VAR_9;
 struct aac_softc *VAR_10;
 int VAR_11 = 0;

 VAR_9 = (union aac_statrequest *)VAR_6;
 VAR_10 = VAR_4->si_drv1;
 FUNC_10(VAR_10, VAR_2, "");

 switch (VAR_5) {
 case 156:
  switch (VAR_9->as_item) {
  case 153:
  case 155:
  case 152:
  case 154:
   FUNC_9(&VAR_10->aac_qstat[VAR_9->as_item], &VAR_9->as_qstat,
         sizeof(struct aac_qstat));
   break;
  default:
   VAR_11 = VAR_1;
   break;
  }
 break;

 case 130:
 case 129:
  VAR_6 = *(caddr_t*)VAR_6;
 case 136:
 case 135:
  FUNC_10(VAR_10, VAR_3, "FSACTL_SENDFIB");
  VAR_11 = FUNC_4(VAR_10, VAR_6);
  break;
 case 128:
  VAR_6 = *(caddr_t*)VAR_6;
 case 134:
  FUNC_10(VAR_10, VAR_3, "FSACTL_SEND_RAW_SRB");
  VAR_11 = FUNC_3(VAR_10, VAR_6);
  break;
 case 151:
 case 145:
  FUNC_10(VAR_10, VAR_3, "FSACTL_AIF_THREAD");
  VAR_11 = VAR_0;
  break;
 case 132:
  VAR_6 = *(caddr_t*)VAR_6;
 case 138:
  FUNC_10(VAR_10, VAR_3, "FSACTL_OPEN_GET_ADAPTER_FIB");
  VAR_11 = FUNC_5(VAR_10, VAR_6);
  break;
 case 147:
  VAR_6 = *(caddr_t*)VAR_6;
 case 141:
  FUNC_10(VAR_10, VAR_3, "FSACTL_GET_NEXT_ADAPTER_FIB");
  VAR_11 = FUNC_2(VAR_10, VAR_6);
  break;
 case 150:
  VAR_6 = *(caddr_t*)VAR_6;
 case 144:
  FUNC_10(VAR_10, VAR_3, "FSACTL_CLOSE_GET_ADAPTER_FIB");
  VAR_11 = FUNC_0(VAR_10, VAR_6);
  break;
 case 133:
  VAR_6 = *(caddr_t*)VAR_6;
 case 139:
  FUNC_10(VAR_10, VAR_3, "FSACTL_MINIPORT_REV_CHECK");
  VAR_11 = FUNC_7(VAR_10, VAR_6);
  break;
 case 131:
  VAR_6 = *(caddr_t*)VAR_6;
 case 137:
  FUNC_10(VAR_10, VAR_3, "FSACTL_QUERY_DISK");
  VAR_11 = FUNC_6(VAR_10, VAR_6);
  break;
 case 149:
 case 143:





  VAR_11 = 0;
  break;
 case 146:
  VAR_6 = *(caddr_t*)VAR_6;
 case 140:
  FUNC_10(VAR_10, VAR_3, "FSACTL_GET_PCI_INFO");
  VAR_11 = FUNC_1(VAR_10, VAR_6);
  break;
 case 148:
  VAR_6 = *(caddr_t*)VAR_6;
 case 142:
  FUNC_10(VAR_10, VAR_3, "FSACTL_GET_FEATURES");
  VAR_11 = FUNC_8(VAR_10, VAR_6);
  break;
 default:
  FUNC_10(VAR_10, VAR_3, "unsupported cmd 0x%lx\n", VAR_5);
  VAR_11 = VAR_0;
  break;
 }
 return(VAR_11);
}
