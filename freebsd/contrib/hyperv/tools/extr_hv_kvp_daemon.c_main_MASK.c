
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int fd; int events; int revents; } ;
struct TYPE_4__ {int operation; int pool; } ;
struct TYPE_5__ {scalar_t__ error; TYPE_1__ kvp_hdr; } ;
struct hv_kvp_msg {TYPE_2__ hdr; } ;
struct TYPE_6__ {int (* kvp_op_exec ) (struct hv_kvp_msg*,void*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_6 () ;
 TYPE_3__* VAR_21 ;
 scalar_t__ FUNC_7 () ;
 struct hv_kvp_msg* FUNC_8 (int) ;
 int FUNC_9 (struct hv_kvp_msg*,struct hv_kvp_msg*,int) ;
 int FUNC_10 (struct hv_kvp_msg*,int ,int) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct pollfd*,int,int ) ;
 int FUNC_15 (int,struct hv_kvp_msg*,int,int ) ;
 int FUNC_16 (int,struct hv_kvp_msg*,int,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct hv_kvp_msg*,void*) ;
 int FUNC_19 (int,struct hv_kvp_msg*,int) ;

int
FUNC_20(int VAR_22, char *VAR_23[])
{
 struct hv_kvp_msg *VAR_24;
 struct hv_kvp_msg *VAR_25;
 struct pollfd VAR_26[1];
 int VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32;
 int VAR_33;

 while ((VAR_33 = FUNC_4(VAR_22, VAR_23, "dn")) != -1) {
  switch (VAR_33) {
  case 'n':

   VAR_19 = 0;
   break;
  case 'd':

   VAR_20 = 1;
   break;
  default:
   break;
  }
 }

 FUNC_12("HV_KVP", 0, VAR_13);


 if (VAR_19 == 1)
  FUNC_2(1, 0);
 else
  FUNC_0(VAR_10, "Run as regular process.\n");

 FUNC_0(VAR_12, "HV_KVP starting; pid is: %d\n", FUNC_5());


 VAR_24 = FUNC_8(sizeof(*VAR_24));

 VAR_25 = FUNC_8(sizeof(*VAR_25));


 if (VAR_24 == ((void*)0) || VAR_25 == ((void*)0)) {
  FUNC_0(VAR_11, "Failed to allocate memory for hv buffer\n");
  FUNC_3(VAR_3);
 }


 if (FUNC_7() != 0) {
  FUNC_0(VAR_11, "Failed to initizlize operation handlers\n");
  FUNC_3(VAR_3);
 }

 if (FUNC_6()) {
  FUNC_0(VAR_11, "Failed to initialize the pools\n");
  FUNC_3(VAR_3);
 }


 VAR_29 = FUNC_11("/dev/hv_kvp_dev", VAR_15);

 if (VAR_29 < 0) {
  FUNC_0(VAR_11, "open /dev/hv_kvp_dev failed; error: %d %s\n",
      VAR_18, FUNC_17(VAR_18));
  FUNC_3(VAR_3);
 }


 VAR_26[0].fd = VAR_29;
 VAR_26[0].events = (VAR_16 | VAR_17);


 FUNC_10(VAR_24, 0, sizeof(*VAR_24));
 VAR_24->hdr.kvp_hdr.operation = VAR_6;
 VAR_31 = FUNC_19(VAR_29, VAR_24, sizeof(*VAR_24));


 for (;;) {
  VAR_32 = FUNC_14 (VAR_26, 1, VAR_9);

  FUNC_0(VAR_10, "poll returned r = %d, revent = 0x%x\n",
      VAR_32, VAR_26[0].revents);

  if (VAR_32 == 0 || (VAR_32 < 0 && VAR_18 == VAR_0) ||
      (VAR_32 < 0 && VAR_18 == VAR_1)) {

   continue;
  }

  if (VAR_32 < 0) {




   FUNC_0(VAR_11, "Poll failed.\n");
   FUNC_13("poll");
   FUNC_3(VAR_2);
  }


  VAR_31 = FUNC_15(VAR_29, VAR_24,
      sizeof(*VAR_24), 0);

  if (VAR_31 < 0) {
   FUNC_0(VAR_11, "Read failed.\n");
   FUNC_13("pread");
   FUNC_3(VAR_2);
  }

  if (VAR_31 != sizeof(struct hv_kvp_msg)) {
   FUNC_0(VAR_11, "read len is: %d\n", VAR_31);
   continue;
  }


  FUNC_9(VAR_25, VAR_24, sizeof(*VAR_25));







  VAR_27 = VAR_25->hdr.kvp_hdr.operation;
  VAR_28 = VAR_25->hdr.kvp_hdr.pool;

  if (VAR_27 < 0 || VAR_27 >= VAR_5 ||
      VAR_21[VAR_27].kvp_op_exec == ((void*)0)) {
   FUNC_0(VAR_14,
       "Unsupported operation OP = %d\n", VAR_27);
   VAR_25->hdr.error = VAR_4;
  } else {



   VAR_30 = VAR_21[VAR_27].kvp_op_exec(VAR_25,
       (void *)&VAR_21[VAR_27]);
   if (VAR_30 != 0) {
    FUNC_1(VAR_25->hdr.error != VAR_8);
    if (VAR_25->hdr.error != VAR_7)
     FUNC_0(VAR_14,
         "Operation failed OP = %d, error = 0x%x\n",
         VAR_27, VAR_30);
   }
  }





hv_kvp_done:
  VAR_31 = FUNC_16(VAR_29, VAR_25, sizeof(*VAR_24), 0);

  if (VAR_31 != sizeof(struct hv_kvp_msg)) {
   FUNC_0(VAR_11, "write len is: %d\n", VAR_31);
   goto hv_kvp_done;
  }
 }
}
