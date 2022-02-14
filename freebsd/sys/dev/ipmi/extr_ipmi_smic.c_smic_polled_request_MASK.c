
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct ipmi_softc {int ipmi_dev; } ;
struct ipmi_request {int ir_requestlen; scalar_t__ ir_command; scalar_t__ ir_compcode; int ir_replybuflen; int ir_replylen; scalar_t__* ir_reply; int ir_addr; scalar_t__* ir_request; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct ipmi_softc*,scalar_t__*) ;
 int FUNC_3 (struct ipmi_softc*) ;
 int FUNC_4 (struct ipmi_softc*,scalar_t__*) ;
 int FUNC_5 (struct ipmi_softc*,int ) ;
 int FUNC_6 (struct ipmi_softc*,scalar_t__) ;
 int FUNC_7 (struct ipmi_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct ipmi_softc *VAR_0, struct ipmi_request *VAR_1)
{
 u_char *VAR_2, VAR_3;
 int VAR_4, VAR_5;


 if (!FUNC_5(VAR_0, VAR_1->ir_addr))
  return (0);





 if (VAR_1->ir_requestlen == 0) {

  if (!FUNC_6(VAR_0, VAR_1->ir_command))
   return (0);




 } else {

  if (!FUNC_7(VAR_0, VAR_1->ir_command))
   return (0);






  VAR_2 = VAR_1->ir_request;
  for (VAR_4 = 0; VAR_4 < VAR_1->ir_requestlen - 1; VAR_4++) {
   if (!FUNC_7(VAR_0, *VAR_2++))
    return (0);




  }
  if (!FUNC_6(VAR_0, *VAR_2))
   return (0);




 }


 if (FUNC_4(VAR_0, &VAR_3) != 1)
  return (0);



 if (VAR_3 != FUNC_0(VAR_1->ir_addr)) {
  FUNC_1(VAR_0->ipmi_dev, "SMIC: Reply address mismatch\n");
  return (0);
 }


 if (FUNC_2(VAR_0, &VAR_3) != 1)
  return (0);



 if (VAR_3 != VAR_1->ir_command) {
  FUNC_1(VAR_0->ipmi_dev, "SMIC: Command mismatch\n");
  return (0);
 }


 VAR_5 = FUNC_2(VAR_0, &VAR_1->ir_compcode);
 if (VAR_5 == 0)
  return (0);






 VAR_4 = 0;
 while (VAR_5 == 1) {
  VAR_5 = FUNC_2(VAR_0, &VAR_3);
  if (VAR_5 == 0)
   return (0);
  if (VAR_4 < VAR_1->ir_replybuflen) {
   VAR_1->ir_reply[VAR_4] = VAR_3;







  }
  VAR_4++;
 }


 if (!FUNC_3(VAR_0))
  return (0);
 VAR_1->ir_replylen = VAR_4;




 if (VAR_1->ir_replybuflen < VAR_4 && VAR_1->ir_replybuflen != 0)

  FUNC_1(VAR_0->ipmi_dev,
      "SMIC: Read short: %zd buffer, %d actual\n",
      VAR_1->ir_replybuflen, VAR_4);
 return (1);
}
