
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 char* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (char const*,char*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 char* VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;

void
FUNC_2(const char *VAR_39,
   int VAR_40,
   int VAR_41,
   int VAR_42,
   int VAR_43,
   unsigned VAR_44,
   bool VAR_45)

{
    VAR_38 = VAR_42;
    VAR_14 = VAR_43;
    VAR_24 = VAR_45;


    if (VAR_39 == 0)
 VAR_37 = VAR_1;
    else if (!FUNC_1(VAR_39, "SVr1") || !FUNC_1(VAR_39, "SVR1")
      || !FUNC_1(VAR_39, "Ultrix"))
 VAR_37 = VAR_4;
    else if (!FUNC_1(VAR_39, "HP"))
 VAR_37 = VAR_3;
    else if (!FUNC_1(VAR_39, "AIX"))
 VAR_37 = VAR_0;
    else if (!FUNC_1(VAR_39, "BSD"))
 VAR_37 = VAR_2;
    else
 VAR_37 = VAR_1;


    switch (VAR_23 = VAR_40) {
    case 136:
    case 133:
 VAR_7 = VAR_13;
 VAR_16 = VAR_22;
 VAR_29 = VAR_35;
 VAR_25 = (VAR_42 > 0 && VAR_43 > 1) ? ", " : ",";
 VAR_36 = "\n\t";
 break;

    case 132:
 VAR_7 = VAR_12;
 VAR_16 = VAR_21;
 VAR_29 = VAR_34;
 VAR_25 = (VAR_42 > 0 && VAR_43 > 1) ? ", " : ",";
 VAR_36 = "\n\t";
 break;

    case 134:
    case 135:
 VAR_7 = VAR_11;
 VAR_16 = VAR_20;
 VAR_29 = VAR_33;
 VAR_25 = ":";
 VAR_36 = "\\\n\t:";
 break;
    }


    switch (VAR_26 = VAR_41) {
    case 131:
 if (VAR_44)
     (void) FUNC_0(VAR_27,
      "%s: sorting by term structure order\n", VAR_5);
 break;

    case 129:
 if (VAR_44)
     (void) FUNC_0(VAR_27,
      "%s: sorting by terminfo name order\n", VAR_5);
 VAR_6 = VAR_9;
 VAR_15 = VAR_18;
 VAR_28 = VAR_31;
 break;

    case 128:
 if (VAR_44)
     (void) FUNC_0(VAR_27,
      "%s: sorting by C variable order\n", VAR_5);
 VAR_6 = VAR_10;
 VAR_15 = VAR_19;
 VAR_28 = VAR_32;
 break;

    case 130:
 if (VAR_44)
     (void) FUNC_0(VAR_27,
      "%s: sorting by termcap name order\n", VAR_5);
 VAR_6 = VAR_8;
 VAR_15 = VAR_17;
 VAR_28 = VAR_30;
 break;
    }

    if (VAR_44)
 (void) FUNC_0(VAR_27,
         "%s: width = %d, tversion = %d, outform = %d\n",
         VAR_5, VAR_38, VAR_37, VAR_23);
}
