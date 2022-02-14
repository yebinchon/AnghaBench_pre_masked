
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {int * an_flash_buffer; int areq; scalar_t__ mpi350; } ;
struct aironet_ioctl {int command; int len; int data; } ;
 int FUNC_0 (struct an_softc*) ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct ifnet*,int,int) ;
 int FUNC_5 (struct ifnet*,int,int) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct ifnet*,char*,...) ;
 int * FUNC_10 (int,int ,int ) ;
 int FUNC_11 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_6, struct aironet_ioctl *VAR_7)
{
 int VAR_8 = 0, VAR_9;
 struct an_softc *VAR_10;

 VAR_10 = VAR_6->if_softc;
 if (VAR_10->mpi350) {
  FUNC_9(VAR_6, "flashing not supported on MPI 350 yet\n");
  return(-1);
 }
 VAR_9 = VAR_7->command;

 switch (VAR_7->command) {
 case 130:
  return FUNC_2(VAR_6);
  break;
 case 129:
  if (VAR_10->an_flash_buffer) {
   FUNC_8(VAR_10->an_flash_buffer, VAR_4);
   VAR_10->an_flash_buffer = ((void*)0);
  }
  VAR_10->an_flash_buffer = FUNC_10(VAR_3, VAR_4, VAR_5);
  if (VAR_10->an_flash_buffer)
   return FUNC_11(VAR_6);
  else
   return VAR_2;
  break;
 case 132:
  if (VAR_7->len > sizeof(VAR_10->areq)) {
   return -VAR_0;
  }
  FUNC_1(VAR_10);
  VAR_9 = FUNC_3(VAR_7->data, &VAR_10->areq, VAR_7->len);
  FUNC_0(VAR_10);
  if (VAR_9)
   return VAR_9;
  VAR_8 = *(int *)&VAR_10->areq;
  if ((VAR_9 = FUNC_4(VAR_6, VAR_8, 8000)) == 1)
   return 0;
  else
   return -1;
 case 131:
  if (VAR_7->len > sizeof(VAR_10->areq)) {
   return -VAR_0;
  }
  FUNC_1(VAR_10);
  VAR_9 = FUNC_3(VAR_7->data, &VAR_10->areq, VAR_7->len);
  FUNC_0(VAR_10);
  if (VAR_9)
   return VAR_9;
  VAR_8 = *(int *)&VAR_10->areq;
  if ((VAR_9 = FUNC_5(VAR_6, VAR_8, 8000)) == -1)
   return -VAR_1;
  else
   return 0;
  break;
 case 133:
  if (VAR_7->len > VAR_3) {
   FUNC_9(VAR_6, "Buffer to big, %x %x\n",
          VAR_7->len, VAR_3);
   return -VAR_0;
  }
  FUNC_1(VAR_10);
  VAR_9 = FUNC_3(VAR_7->data, VAR_10->an_flash_buffer, VAR_7->len);
  FUNC_0(VAR_10);
  if (VAR_9)
   return VAR_9;

  if ((VAR_9 = FUNC_6(VAR_6)) != 0)
   return -VAR_1;
  else
   return 0;
  break;
 case 128:
  if ((VAR_9 = FUNC_7(VAR_6)) != 0) {
   FUNC_9(VAR_6, "FLASHRESTART returned %d\n", VAR_9);
   return -VAR_1;
  } else
   return 0;

  break;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
