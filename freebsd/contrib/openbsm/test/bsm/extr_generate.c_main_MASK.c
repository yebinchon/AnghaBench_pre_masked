
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (char const*,char*) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (char const*,char*) ;
 int FUNC_18 (char const*,char*) ;
 int FUNC_19 (char const*,char*) ;
 int FUNC_20 (char const*,char*) ;
 int FUNC_21 (char const*,char*) ;
 int FUNC_22 (char const*,char*) ;
 int FUNC_23 (char const*,char*) ;
 int FUNC_24 (char const*,char*) ;
 int FUNC_25 (char const*,char*) ;
 int FUNC_26 (char const*,char*) ;
 int FUNC_27 (char const*,char*) ;
 int FUNC_28 (char const*,char*) ;
 int FUNC_29 (char const*,char*) ;
 int FUNC_30 (char const*,char*) ;
 int FUNC_31 (char const*,char*,int ) ;
 int FUNC_32 (char const*,char*,int ) ;
 int FUNC_33 (char const*,char*) ;
 int FUNC_34 (char const*,char*) ;
 int FUNC_35 (char const*,char*,int ) ;
 int FUNC_36 (char const*,char*,int ) ;
 int FUNC_37 (char const*,char*) ;
 int FUNC_38 (char const*,char*) ;
 int FUNC_39 (char const*,char*) ;
 int FUNC_40 (char const*,char*) ;
 int FUNC_41 (char const*,char*) ;
 int FUNC_42 (char const*,char*) ;
 int FUNC_43 (char const*,char*) ;
 int FUNC_44 (char const*,char*) ;
 int FUNC_45 (char const*,char*,int ) ;
 int FUNC_46 (char const*,char*,int ) ;
 int FUNC_47 (char const*,char*) ;
 int FUNC_48 (char const*,char*) ;
 int FUNC_49 (char const*,char*) ;
 int FUNC_50 (char const*,char*) ;
 int FUNC_51 (char const*,char*) ;
 int FUNC_52 (int,char**,char*) ;
 scalar_t__ FUNC_53 (char const*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_54 () ;

int
FUNC_55(int VAR_8, char *VAR_9[])
{
 const char *VAR_10;
 int VAR_11;

 while ((VAR_11 = FUNC_52(VAR_8, VAR_9, "rt")) != -1) {
  switch (VAR_11) {
  case 'r':
   VAR_4++;
   break;

  case 't':
   VAR_5++;
   break;

  default:
   FUNC_54();
  }
 }

 VAR_8 -= VAR_7;
 VAR_9 += VAR_7;

 if (VAR_8 != 1)
  FUNC_54();

 VAR_10 = VAR_9[0];

 if (FUNC_53(VAR_10, 0755) < 0 && VAR_6 != VAR_2)
  FUNC_1(VAR_3, "mkdir: %s", VAR_10);

 if (VAR_5) {
  FUNC_11(VAR_10, "file_token");
  FUNC_49(VAR_10, "trailer_token");
  FUNC_14(VAR_10, "header32_token");
  FUNC_9(VAR_10, "data_token");
  FUNC_22(VAR_10, "ipc_token");
  FUNC_28(VAR_10, "path_token");
  FUNC_44(VAR_10, "subject32_token");
  FUNC_46(VAR_10, "subject32ex_token",
      VAR_0);
  FUNC_46(VAR_10, "subject32ex_token",
      VAR_1);
  FUNC_30(VAR_10, "process32_token");
  FUNC_32(VAR_10, "process32ex_token",
      VAR_0);
  FUNC_32(VAR_10, "process32ex_token",
      VAR_1);
  FUNC_34(VAR_10, "process64_token");
  FUNC_36(VAR_10, "process64ex_token",
      VAR_0);
  FUNC_36(VAR_10, "process64ex_token",
      VAR_1);
  FUNC_38(VAR_10, "return32_token");
  FUNC_48(VAR_10, "text_token");
  FUNC_26(VAR_10, "opaque_token");
  FUNC_16(VAR_10, "in_addr_token");
  FUNC_18(VAR_10, "ip_token");
  FUNC_24(VAR_10, "iport_token");
  FUNC_3(VAR_10, "arg32_token");
  FUNC_40(VAR_10, "seq_token");






  FUNC_51(VAR_10, "zonename_token");
  FUNC_42(VAR_10, "socketex_token");
 }

 if (VAR_4) {
  FUNC_10(VAR_10, "file_record");
  FUNC_8(VAR_10, "data_record");
  FUNC_21(VAR_10, "ipc_record");
  FUNC_27(VAR_10, "path_record");
  FUNC_43(VAR_10, "subject32_record");
  FUNC_45(VAR_10, "subject32ex_record",
      VAR_0);
  FUNC_45(VAR_10, "subject32ex_record",
      VAR_1);
  FUNC_29(VAR_10, "process32_record");
  FUNC_31(VAR_10, "process32ex_record",
      VAR_0);
  FUNC_31(VAR_10, "process32ex_record",
      VAR_1);
  FUNC_33(VAR_10, "process64_record");
  FUNC_35(VAR_10, "process64ex_record",
      VAR_0);
  FUNC_35(VAR_10, "process64ex_record",
      VAR_1);
  FUNC_37(VAR_10, "return32_record");
  FUNC_47(VAR_10, "text_record");
  FUNC_25(VAR_10, "opaque_record");
  FUNC_15(VAR_10, "in_addr_record");
  FUNC_17(VAR_10, "ip_record");
  FUNC_23(VAR_10, "iport_record");
  FUNC_2(VAR_10, "arg32_record");
  FUNC_39(VAR_10, "seq_record");






  FUNC_50(VAR_10, "zonename_record");
  FUNC_41(VAR_10, "socketex_record");
  FUNC_0(VAR_10);
 }

 return (0);
}
