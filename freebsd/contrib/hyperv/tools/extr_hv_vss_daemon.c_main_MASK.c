
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pollfd {int fd; int events; char* revents; } ;
struct hv_vss_opt_msg {int status; int opt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 void* VAR_15 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_16 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int ,struct hv_vss_opt_msg*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct hv_vss_opt_msg*,int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct pollfd*,int,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_20, char* VAR_21[])
{
 struct hv_vss_opt_msg VAR_22;

 struct pollfd VAR_23[1];
 uint32_t VAR_24;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28;

 while ((VAR_25 = FUNC_6(VAR_20, VAR_21, "dnh")) != -1) {
  switch (VAR_25) {
  case 'n':

   VAR_18 = 0;
   break;
  case 'd':

   VAR_19 = 1;
   break;
  case 'h':
  default:
   FUNC_16(VAR_21[0]);
   break;
  }
 }

 FUNC_11("HV_VSS", 0, VAR_11);


 if (VAR_18 == 1)
  FUNC_3(1, 0);
 else
  FUNC_1(VAR_8, "Run as regular process.\n");

 FUNC_1(VAR_10, "HV_VSS starting; pid is: %d\n", FUNC_7());

 FUNC_9(&VAR_22, 0, sizeof(struct hv_vss_opt_msg));

 VAR_28 = FUNC_10(FUNC_0(VAR_4), VAR_12);

 if (VAR_28 < 0) {
  FUNC_1(VAR_9, "Fail to open %s, error: %d %s\n",
      FUNC_0(VAR_4), VAR_17, FUNC_14(VAR_17));
  FUNC_4(VAR_3);
 }
 VAR_23[0].fd = VAR_28;
 VAR_23[0].events = VAR_13 | VAR_14;

 while (1) {
  VAR_26 = FUNC_13(VAR_23, 1, VAR_5);

  FUNC_1(VAR_8, "poll returned r = %d, revent = 0x%x\n",
      VAR_26, VAR_23[0].revents);

  if (VAR_26 == 0 || (VAR_26 < 0 && VAR_17 == VAR_0) ||
      (VAR_26 < 0 && VAR_17 == VAR_1)) {

   continue;
  }

  if (VAR_26 < 0) {




   FUNC_1(VAR_9, "Poll failed.\n");
   FUNC_12("poll");
   FUNC_4(VAR_2);
  }


  VAR_27 = FUNC_8(VAR_28, VAR_6, &VAR_22);
  if (VAR_27 < 0) {
   FUNC_1(VAR_9, "Read failed.\n");
   FUNC_12("pread");
   FUNC_4(VAR_2);
  }

  if (VAR_22.status != 0) {
   FUNC_1(VAR_9, "data read error\n");
   continue;
  }







  VAR_24 = VAR_22.opt;

  switch (VAR_24) {
  case 130:
   VAR_27 = FUNC_2();
   break;
  case 129:
   VAR_27 = FUNC_5();
   break;
  case 128:
   VAR_27 = FUNC_15();
   break;
  default:
   FUNC_1(VAR_9, "Illegal operation: %d\n", VAR_24);
   VAR_27 = VAR_15;
  }
  if (VAR_27)
   VAR_22.status = VAR_15;
  else
   VAR_22.status = VAR_16;
  VAR_27 = FUNC_8(VAR_28, VAR_7, &VAR_22);
  if (VAR_27 != 0) {
   FUNC_1(VAR_9, "Fail to write to device\n");
   FUNC_4(VAR_3);
  } else {
   FUNC_1(VAR_10, "Send response %d for %s to kernel\n",
       VAR_22.status, VAR_24 == 129 ? "Freeze" :
       (VAR_24 == 128 ? "Thaw" : "Check"));
  }
 }
}
