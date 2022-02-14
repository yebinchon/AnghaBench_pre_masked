
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_1 != VAR_0 && VAR_10
      && !VAR_6 && !VAR_7)
    {

      FUNC_0 (VAR_23, VAR_4, VAR_2, "__itrunc");
      FUNC_0 (VAR_29, VAR_4, VAR_2, "__uitrunc");
      FUNC_0 (VAR_23, VAR_4, VAR_12, "_qitrunc");
      FUNC_0 (VAR_29, VAR_4, VAR_12, "_quitrunc");
    }

  if (!VAR_5)

    if (!VAR_11)
      {
 FUNC_1 (VAR_13, VAR_12, "__gcc_qadd");
 FUNC_1 (VAR_27, VAR_12, "__gcc_qsub");
 FUNC_1 (VAR_25, VAR_12, "__gcc_qmul");
 FUNC_1 (VAR_21, VAR_12, "__gcc_qdiv");

 if (VAR_9)
   {
     FUNC_1 (VAR_20, VAR_12, "__gcc_qneg");
     FUNC_1 (VAR_14, VAR_12, "__gcc_qeq");
     FUNC_1 (VAR_19, VAR_12, "__gcc_qne");
     FUNC_1 (VAR_16, VAR_12, "__gcc_qgt");
     FUNC_1 (VAR_15, VAR_12, "__gcc_qge");
     FUNC_1 (VAR_18, VAR_12, "__gcc_qlt");
     FUNC_1 (VAR_17, VAR_12, "__gcc_qle");
     FUNC_1 (VAR_31, VAR_12, "__gcc_qunord");

     FUNC_0 (VAR_22, VAR_12, VAR_3, "__gcc_stoq");
     FUNC_0 (VAR_22, VAR_12, VAR_2, "__gcc_dtoq");
     FUNC_0 (VAR_28, VAR_3, VAR_12, "__gcc_qtos");
     FUNC_0 (VAR_28, VAR_2, VAR_12, "__gcc_qtod");
     FUNC_0 (VAR_23, VAR_4, VAR_12, "__gcc_qtoi");
     FUNC_0 (VAR_29, VAR_4, VAR_12, "__gcc_qtou");
     FUNC_0 (VAR_24, VAR_12, VAR_4, "__gcc_itoq");
     FUNC_0 (VAR_30, VAR_12, VAR_4, "__gcc_utoq");
   }
      }
    else
      {
 FUNC_1 (VAR_13, VAR_12, "_xlqadd");
 FUNC_1 (VAR_27, VAR_12, "_xlqsub");
 FUNC_1 (VAR_25, VAR_12, "_xlqmul");
 FUNC_1 (VAR_21, VAR_12, "_xlqdiv");
      }
  else
    {


      FUNC_1 (VAR_13, VAR_12, "_q_add");
      FUNC_1 (VAR_27, VAR_12, "_q_sub");
      FUNC_1 (VAR_20, VAR_12, "_q_neg");
      FUNC_1 (VAR_25, VAR_12, "_q_mul");
      FUNC_1 (VAR_21, VAR_12, "_q_div");
      if (VAR_8 || VAR_6)
 FUNC_1 (VAR_26, VAR_12, "_q_sqrt");

      FUNC_1 (VAR_14, VAR_12, "_q_feq");
      FUNC_1 (VAR_19, VAR_12, "_q_fne");
      FUNC_1 (VAR_16, VAR_12, "_q_fgt");
      FUNC_1 (VAR_15, VAR_12, "_q_fge");
      FUNC_1 (VAR_18, VAR_12, "_q_flt");
      FUNC_1 (VAR_17, VAR_12, "_q_fle");

      FUNC_0 (VAR_22, VAR_12, VAR_3, "_q_stoq");
      FUNC_0 (VAR_22, VAR_12, VAR_2, "_q_dtoq");
      FUNC_0 (VAR_28, VAR_3, VAR_12, "_q_qtos");
      FUNC_0 (VAR_28, VAR_2, VAR_12, "_q_qtod");
      FUNC_0 (VAR_23, VAR_4, VAR_12, "_q_qtoi");
      FUNC_0 (VAR_29, VAR_4, VAR_12, "_q_qtou");
      FUNC_0 (VAR_24, VAR_12, VAR_4, "_q_itoq");
      FUNC_0 (VAR_30, VAR_12, VAR_4, "_q_utoq");
    }
}
