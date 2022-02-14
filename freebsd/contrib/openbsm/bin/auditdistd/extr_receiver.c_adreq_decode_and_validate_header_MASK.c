
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct adreq {scalar_t__ adr_byteorder; scalar_t__ adr_datasize; int adr_cmd; int adr_seq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct adreq *VAR_3)
{


 if (VAR_3->adr_byteorder != VAR_1) {
  VAR_3->adr_byteorder = VAR_1;
  VAR_3->adr_seq = FUNC_1(VAR_3->adr_seq);
  VAR_3->adr_datasize = FUNC_0(VAR_3->adr_datasize);
 }



 if (VAR_3->adr_datasize > VAR_0) {
  FUNC_2(VAR_2, "Invalid datasize received (%ju).",
      (uintmax_t)VAR_3->adr_datasize);
 }

 switch (VAR_3->adr_cmd) {
 case 128:
 case 132:
 case 131:
  if (VAR_3->adr_datasize == 0) {
   FUNC_2(VAR_2,
       "Invalid datasize received (%ju).",
       (uintmax_t)VAR_3->adr_datasize);
  }
  break;
 case 129:
 case 130:
  if (VAR_3->adr_datasize > 0) {
   FUNC_2(VAR_2,
       "Invalid datasize received (%ju).",
       (uintmax_t)VAR_3->adr_datasize);
  }
  break;
 default:
  FUNC_2(VAR_2, "Invalid command received (%hhu).",
      VAR_3->adr_cmd);
 }
}
