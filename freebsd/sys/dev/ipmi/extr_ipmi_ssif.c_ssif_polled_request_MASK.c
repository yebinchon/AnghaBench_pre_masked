
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ipmi_softc {int ipmi_ssif_smbus_address; int ipmi_ssif_smbus; int ipmi_dev; } ;
struct ipmi_request {int ir_addr; int ir_command; scalar_t__ ir_requestlen; int* ir_request; int ir_compcode; int* ir_reply; size_t ir_replybuflen; size_t ir_replylen; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_9 ;
 int FUNC_4 (size_t,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,int ,int*,int*) ;
 int FUNC_8 (int ,int ,int ,int,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct ipmi_softc *VAR_10, struct ipmi_request *VAR_11)
{
 u_char VAR_12[VAR_2];
 device_t VAR_13 = VAR_10->ipmi_dev;
 device_t VAR_14 = VAR_10->ipmi_ssif_smbus;
 u_char *VAR_15, VAR_16, VAR_17, VAR_18;
 size_t VAR_19;
 int VAR_20;


 if (FUNC_11(VAR_14, VAR_13, VAR_8) != 0)
  return (0);





 VAR_12[0] = VAR_11->ir_addr;
 VAR_12[1] = VAR_11->ir_command;
 if (VAR_11->ir_requestlen > 0)
  FUNC_1(VAR_11->ir_request, &VAR_12[2],
      FUNC_4(VAR_11->ir_requestlen, VAR_2 - 2));


 if (VAR_11->ir_requestlen <= 30) {




  VAR_20 = FUNC_9(FUNC_8(VAR_14,
   VAR_10->ipmi_ssif_smbus_address, VAR_6,
   VAR_11->ir_requestlen + 2, VAR_12));
  if (VAR_20) {




   goto fail;
  }
 } else {




  VAR_20 = FUNC_9(FUNC_8(VAR_14,
   VAR_10->ipmi_ssif_smbus_address, VAR_7,
   VAR_2, VAR_12));
  if (VAR_20) {




   goto fail;
  }

  VAR_19 = VAR_11->ir_requestlen - (VAR_2 - 2);
  VAR_15 = VAR_11->ir_request + (VAR_2 - 2);
  while (VAR_19 > 0) {




   VAR_20 = FUNC_9(FUNC_8(VAR_14,
       VAR_10->ipmi_ssif_smbus_address, VAR_5,
       FUNC_4(VAR_19, VAR_2), VAR_15));
   if (VAR_20) {




    goto fail;
   }
   VAR_15 += VAR_2;
   VAR_19 -= VAR_2;
  }
  if (VAR_19 == 0) {
   char VAR_21 = 0;




   VAR_20 = FUNC_9(FUNC_8(VAR_14,
    VAR_10->ipmi_ssif_smbus_address, VAR_5,
    1, &VAR_21));
   if (VAR_20) {




    goto fail;
   }
  }
 }


 FUNC_10(VAR_14, VAR_13);


 FUNC_5("ssifwt", VAR_9 / 10);


read_start:
 if (FUNC_11(VAR_14, VAR_13, VAR_8) != 0)
  return (0);
 VAR_17 = VAR_2;
 VAR_20 = FUNC_9(FUNC_7(VAR_14,
     VAR_10->ipmi_ssif_smbus_address, VAR_4, &VAR_17, VAR_12));
 if (VAR_20 == VAR_1 || VAR_20 == VAR_0) {
  FUNC_10(VAR_14, VAR_13);




  FUNC_5("ssifwt", VAR_9 / 100);
  goto read_start;
 }
 if (VAR_20) {



  goto fail;
 }
 if (VAR_17 == VAR_2 && VAR_12[0] == 0 && VAR_12[1] == 1)
  VAR_18 = 2;
 else
  VAR_18 = 0;


 if (VAR_17 < 3) {
  FUNC_2(VAR_13, "SSIF: Short reply packet\n");
  goto fail;
 }


 if (VAR_12[VAR_18] != FUNC_0(VAR_11->ir_addr)) {
  FUNC_2(VAR_13, "SSIF: Reply address mismatch\n");
  goto fail;
 }


 if (VAR_12[VAR_18 + 1] != VAR_11->ir_command) {
  FUNC_2(VAR_13, "SMIC: Command mismatch\n");
  goto fail;
 }


 VAR_11->ir_compcode = VAR_12[VAR_18 + 2];


 if (VAR_18 == 0) {



  VAR_19 = VAR_17 - 3;
  FUNC_1(&VAR_12[3], VAR_11->ir_reply,
      FUNC_4(VAR_11->ir_replybuflen, VAR_19));
  goto done;
 }
 FUNC_1(&VAR_12[5], VAR_11->ir_reply, FUNC_4(VAR_11->ir_replybuflen, VAR_17 - 5));
 VAR_19 = VAR_17 - 5;
 VAR_16 = 1;

 for (;;) {

  VAR_17 = VAR_2;
  VAR_20 = FUNC_9(FUNC_7(VAR_14,
      VAR_10->ipmi_ssif_smbus_address, VAR_3, &VAR_17,
      VAR_12));
  if (VAR_20) {



   goto fail;
  }





  if (VAR_12[0] != 0xff && VAR_12[0] != VAR_16) {
   FUNC_2(VAR_13, "SSIF: Read wrong block %d %d\n",
       VAR_12[0], VAR_16);
   goto fail;
  }
  if (VAR_12[0] != 0xff && VAR_17 < VAR_2) {
   FUNC_2(VAR_13,
       "SSIF: Read short middle block, length %d\n",
       VAR_17);
   goto fail;
  }






  if (VAR_19 < VAR_11->ir_replybuflen)
   FUNC_1(&VAR_12[1], &VAR_11->ir_reply[VAR_19],
       FUNC_4(VAR_11->ir_replybuflen - VAR_19, VAR_17 - 1));
  VAR_19 += VAR_17 - 1;


  if (VAR_12[0] != 0xff)
   break;
  VAR_16++;
 }

done:

 VAR_11->ir_replylen = VAR_19;
 FUNC_10(VAR_14, VAR_13);
 return (1);

fail:
 FUNC_10(VAR_14, VAR_13);
 return (0);
}
