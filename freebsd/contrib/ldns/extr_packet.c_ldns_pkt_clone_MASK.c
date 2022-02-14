
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_59__ TYPE_1__ ;


struct TYPE_59__ {void* _additional; void* _authority; void* _answer; void* _question; int _edns_present; } ;
typedef TYPE_1__ ldns_pkt ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*) ;
 int FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__ const*) ;
 int FUNC_14 (TYPE_1__ const*) ;
 int FUNC_15 (TYPE_1__ const*) ;
 int FUNC_16 (TYPE_1__ const*) ;
 int FUNC_17 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_18 () ;
 int FUNC_19 (TYPE_1__ const*) ;
 int FUNC_20 (TYPE_1__ const*) ;
 int FUNC_21 (TYPE_1__ const*) ;
 int FUNC_22 (TYPE_1__ const*) ;
 int FUNC_23 (TYPE_1__ const*) ;
 int FUNC_24 (TYPE_1__ const*) ;
 int FUNC_25 (TYPE_1__ const*) ;
 int FUNC_26 (TYPE_1__*,int ) ;
 int FUNC_27 (TYPE_1__*,int ) ;
 int FUNC_28 (TYPE_1__*,int ) ;
 int FUNC_29 (TYPE_1__*,int ) ;
 int FUNC_30 (TYPE_1__*,int ) ;
 int FUNC_31 (TYPE_1__*,int ) ;
 int FUNC_32 (TYPE_1__*,int ) ;
 int FUNC_33 (TYPE_1__*,int ) ;
 int FUNC_34 (TYPE_1__*,int ) ;
 int FUNC_35 (TYPE_1__*,int ) ;
 int FUNC_36 (TYPE_1__*,int ) ;
 int FUNC_37 (TYPE_1__*,int ) ;
 int FUNC_38 (TYPE_1__*,int ) ;
 int FUNC_39 (TYPE_1__*,int ) ;
 int FUNC_40 (TYPE_1__*,int ) ;
 int FUNC_41 (TYPE_1__*,int ) ;
 int FUNC_42 (TYPE_1__*,int ) ;
 int FUNC_43 (TYPE_1__*,int ) ;
 int FUNC_44 (TYPE_1__*,int ) ;
 int FUNC_45 (TYPE_1__*,int ) ;
 int FUNC_46 (TYPE_1__*,int ) ;
 int FUNC_47 (TYPE_1__*,int ) ;
 int FUNC_48 (TYPE_1__*,int ) ;
 int FUNC_49 (TYPE_1__*,int ) ;
 int FUNC_50 (TYPE_1__*,int ) ;
 int FUNC_51 (TYPE_1__ const*) ;
 int FUNC_52 (TYPE_1__ const*) ;
 int FUNC_53 (TYPE_1__ const*) ;
 int FUNC_54 (TYPE_1__ const*) ;
 int FUNC_55 (scalar_t__) ;
 int FUNC_56 (int ) ;
 void* FUNC_57 (int ) ;
 int FUNC_58 (void*) ;

ldns_pkt *
FUNC_59(const ldns_pkt *VAR_0)
{
 ldns_pkt *VAR_1;

 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_1 = FUNC_18();

 FUNC_38(VAR_1, FUNC_17(VAR_0));
 FUNC_42(VAR_1, FUNC_21(VAR_0));
 FUNC_26(VAR_1, FUNC_0(VAR_0));
 FUNC_48(VAR_1, FUNC_52(VAR_0));
 FUNC_46(VAR_1, FUNC_25(VAR_0));
 FUNC_31(VAR_1, FUNC_8(VAR_0));
 FUNC_44(VAR_1, FUNC_24(VAR_0));
 FUNC_27(VAR_1, FUNC_1(VAR_0));
 FUNC_40(VAR_1, FUNC_15(VAR_0));
 FUNC_45(VAR_1, FUNC_16(VAR_0));
 FUNC_41(VAR_1, FUNC_20(VAR_0));
 FUNC_28(VAR_1, FUNC_3(VAR_0));
 FUNC_39(VAR_1, FUNC_19(VAR_0));
 FUNC_30(VAR_1, FUNC_6(VAR_0));
 if (FUNC_5(VAR_0))
  FUNC_29(VAR_1,
   FUNC_55(FUNC_5(VAR_0)));
 FUNC_49(VAR_1, FUNC_53(VAR_0));
 FUNC_43(VAR_1, FUNC_22(VAR_0));
 FUNC_47(VAR_1, FUNC_51(VAR_0));
 FUNC_50(VAR_1, FUNC_56(FUNC_54(VAR_0)));

 FUNC_35(VAR_1, FUNC_12(VAR_0));
 FUNC_34(VAR_1,
  FUNC_11(VAR_0));
 FUNC_36(VAR_1, FUNC_13(VAR_0));
 VAR_1->_edns_present = VAR_0->_edns_present;
 FUNC_37(VAR_1, FUNC_14(VAR_0));
 if(FUNC_9(VAR_0))
  FUNC_32(VAR_1,
   FUNC_55(FUNC_9(VAR_0)));
 FUNC_33(VAR_1, FUNC_10(VAR_0));

 FUNC_58(VAR_1->_question);
 FUNC_58(VAR_1->_answer);
 FUNC_58(VAR_1->_authority);
 FUNC_58(VAR_1->_additional);
 VAR_1->_question = FUNC_57(FUNC_23(VAR_0));
 VAR_1->_answer = FUNC_57(FUNC_4(VAR_0));
 VAR_1->_authority = FUNC_57(FUNC_7(VAR_0));
 VAR_1->_additional = FUNC_57(FUNC_2(VAR_0));
 return VAR_1;
}
