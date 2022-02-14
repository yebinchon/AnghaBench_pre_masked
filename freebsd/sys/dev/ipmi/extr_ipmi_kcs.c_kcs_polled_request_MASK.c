
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ipmi_softc {int ipmi_dev; } ;
struct ipmi_request {int ir_addr; int ir_requestlen; int ir_command; int* ir_request; int ir_compcode; int ir_replybuflen; int* ir_reply; int ir_replylen; } ;


 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ipmi_softc*) ;
 int FUNC_5 (struct ipmi_softc*,int*) ;
 int FUNC_6 (struct ipmi_softc*) ;
 int FUNC_7 (struct ipmi_softc*,int) ;
 int FUNC_8 (struct ipmi_softc*,int) ;

__attribute__((used)) static int
FUNC_9(struct ipmi_softc *VAR_1, struct ipmi_request *VAR_2)
{
 u_char *VAR_3, VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_1);


 if (!FUNC_6(VAR_1)) {
  FUNC_3(VAR_1->ipmi_dev, "KCS: Failed to start write\n");
  goto fail;
 }




 if (!FUNC_7(VAR_1, VAR_2->ir_addr)) {
  FUNC_3(VAR_1->ipmi_dev, "KCS: Failed to write address\n");
  goto fail;
 }




 if (VAR_2->ir_requestlen == 0) {
  if (!FUNC_8(VAR_1, VAR_2->ir_command)) {
   FUNC_3(VAR_1->ipmi_dev,
       "KCS: Failed to write command\n");
   goto fail;
  }




 } else {
  if (!FUNC_7(VAR_1, VAR_2->ir_command)) {
   FUNC_3(VAR_1->ipmi_dev,
       "KCS: Failed to write command\n");
   goto fail;
  }





  VAR_3 = VAR_2->ir_request;
  for (VAR_5 = 0; VAR_5 < VAR_2->ir_requestlen - 1; VAR_5++) {
   if (!FUNC_7(VAR_1, *VAR_3++)) {
    FUNC_3(VAR_1->ipmi_dev,
        "KCS: Failed to write data byte %d\n",
        VAR_5 + 1);
    goto fail;
   }




  }

  if (!FUNC_8(VAR_1, *VAR_3)) {
   FUNC_3(VAR_1->ipmi_dev,
       "KCS: Failed to write last dta byte\n");
   goto fail;
  }




 }


 if (FUNC_5(VAR_1, &VAR_4) != 1) {
  FUNC_3(VAR_1->ipmi_dev, "KCS: Failed to read address\n");
  goto fail;
 }



 if (VAR_4 != FUNC_2(VAR_2->ir_addr)) {
  FUNC_3(VAR_1->ipmi_dev, "KCS: Reply address mismatch\n");
  goto fail;
 }


 if (FUNC_5(VAR_1, &VAR_4) != 1) {
  FUNC_3(VAR_1->ipmi_dev, "KCS: Failed to read command\n");
  goto fail;
 }



 if (VAR_4 != VAR_2->ir_command) {
  FUNC_3(VAR_1->ipmi_dev, "KCS: Command mismatch\n");
  goto fail;
 }


 if (FUNC_5(VAR_1, &VAR_2->ir_compcode) != 1) {
  if (VAR_0) {
   FUNC_3(VAR_1->ipmi_dev,
       "KCS: Failed to read completion code\n");
  }
  goto fail;
 }






 VAR_5 = 0;
 for (;;) {
  VAR_6 = FUNC_5(VAR_1, &VAR_4);
  if (VAR_6 == 0) {
   FUNC_3(VAR_1->ipmi_dev,
       "KCS: Read failed on byte %d\n", VAR_5 + 1);
   goto fail;
  }
  if (VAR_6 == 2)
   break;
  if (VAR_5 < VAR_2->ir_replybuflen) {
   VAR_2->ir_reply[VAR_5] = VAR_4;







  }
  VAR_5++;
 }
 FUNC_1(VAR_1);
 VAR_2->ir_replylen = VAR_5;




 if (VAR_2->ir_replybuflen < VAR_5 && VAR_2->ir_replybuflen != 0)

  FUNC_3(VAR_1->ipmi_dev,
      "KCS: Read short: %zd buffer, %d actual\n",
      VAR_2->ir_replybuflen, VAR_5);
 return (1);
fail:
 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 return (0);
}
