
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {char* sval; int fval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 int * VAR_6 ;
 char** VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 char** VAR_11 ;
 char** VAR_12 ;
 char** VAR_13 ;
 int * VAR_14 ;
 char** VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 char** VAR_18 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_19 ;
 TYPE_1__* VAR_20 ;
 TYPE_1__* VAR_21 ;
 TYPE_1__* VAR_22 ;
 TYPE_1__* VAR_23 ;
 TYPE_1__* VAR_24 ;
 int VAR_25 ;
 TYPE_1__* VAR_26 ;
 TYPE_1__* VAR_27 ;
 TYPE_1__* VAR_28 ;
 TYPE_1__* VAR_29 ;
 TYPE_1__* VAR_30 ;
 TYPE_1__* FUNC_1 (char*,char*,double,int,scalar_t__) ;
 TYPE_1__* VAR_31 ;
 scalar_t__ VAR_32 ;
 TYPE_1__* VAR_33 ;

void FUNC_2(void)
{
 VAR_21 = FUNC_1("0", "0", 0.0, VAR_10|VAR_17|VAR_2|VAR_4, VAR_32);

 VAR_24 = FUNC_1("$zero&null", "", 0.0, VAR_10|VAR_17|VAR_2|VAR_4, VAR_32);
 VAR_25 = FUNC_0(VAR_24, VAR_1);

 VAR_20 = FUNC_1("FS", " ", 0.0, VAR_17|VAR_4, VAR_32);
 VAR_7 = &VAR_20->sval;
 VAR_29 = FUNC_1("RS", "\n", 0.0, VAR_17|VAR_4, VAR_32);
 VAR_15 = &VAR_29->sval;
 VAR_26 = FUNC_1("OFS", " ", 0.0, VAR_17|VAR_4, VAR_32);
 VAR_12 = &VAR_26->sval;
 VAR_27 = FUNC_1("ORS", "\n", 0.0, VAR_17|VAR_4, VAR_32);
 VAR_13 = &VAR_27->sval;
 VAR_11 = &FUNC_1("OFMT", "%.6g", 0.0, VAR_17|VAR_4, VAR_32)->sval;
 VAR_3 = &FUNC_1("CONVFMT", "%.6g", 0.0, VAR_17|VAR_4, VAR_32)->sval;
 VAR_5 = &FUNC_1("FILENAME", "", 0.0, VAR_17|VAR_4, VAR_32)->sval;
 VAR_22 = FUNC_1("NF", "", 0.0, VAR_10, VAR_32);
 VAR_8 = &VAR_22->fval;
 VAR_23 = FUNC_1("NR", "", 0.0, VAR_10, VAR_32);
 VAR_9 = &VAR_23->fval;
 VAR_19 = FUNC_1("FNR", "", 0.0, VAR_10, VAR_32);
 VAR_6 = &VAR_19->fval;
 VAR_31 = FUNC_1("SUBSEP", "\034", 0.0, VAR_17|VAR_4, VAR_32);
 VAR_18 = &VAR_31->sval;
 VAR_30 = FUNC_1("RSTART", "", 0.0, VAR_10, VAR_32);
 VAR_16 = &VAR_30->fval;
 VAR_28 = FUNC_1("RLENGTH", "", 0.0, VAR_10, VAR_32);
 VAR_14 = &VAR_28->fval;
 VAR_33 = FUNC_1("SYMTAB", "", 0.0, VAR_0, VAR_32);
 VAR_33->sval = (char *) VAR_32;
}
