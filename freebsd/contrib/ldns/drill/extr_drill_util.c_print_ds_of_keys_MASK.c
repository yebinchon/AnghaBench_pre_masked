
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int *) ;
 int VAR_4 ;

void
FUNC_8(ldns_pkt *VAR_5)
{
 ldns_rr_list *VAR_6;
 uint16_t VAR_7;
 ldns_rr *VAR_8;


 VAR_6 = FUNC_3(VAR_5, VAR_0,
   VAR_1);




 if (VAR_6) {
  for (VAR_7 = 0; VAR_7 < FUNC_6(VAR_6); VAR_7++) {
   FUNC_0(VAR_4, ";\n; equivalent DS records for key %u:\n",
    (unsigned int)FUNC_1(FUNC_5(VAR_6, VAR_7)));

   VAR_8 = FUNC_2(FUNC_5(VAR_6, VAR_7), VAR_2);
   FUNC_7(VAR_4, "; sha1: ", VAR_8);
   VAR_8 = FUNC_2(FUNC_5(VAR_6, VAR_7), VAR_3);
   FUNC_7(VAR_4, "; sha256: ", VAR_8);
  }
  FUNC_4(VAR_6);
 }
}
