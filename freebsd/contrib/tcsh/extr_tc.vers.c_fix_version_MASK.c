
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int * VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (char*,int ,int ,int ,...) ;
 int VAR_32 ;

void
FUNC_6(void)
{
    char *VAR_33;
    const Char *VAR_34 = FUNC_4(VAR_23);
    const Char *VAR_35 = FUNC_4(VAR_25);
    const Char *VAR_36 = FUNC_4(VAR_24);

    if (VAR_35 == ((void*)0))
 VAR_35 = VAR_27;
    if (VAR_34 == ((void*)0))
 VAR_34 = VAR_27;
    if (VAR_36 == ((void*)0))
 VAR_36 = VAR_27;


    VAR_33 = FUNC_5(
"tcsh %d.%.2d.%.2d (%s) %s (%S-%S-%S) options %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
      VAR_19, VAR_30, VAR_18, VAR_17, VAR_5, VAR_34, VAR_35, VAR_36,
      "7b", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "",
      "", "", "", "", "");
    FUNC_0(VAR_33, VAR_32);
    FUNC_2(VAR_28, FUNC_3(VAR_33), VAR_29);
    FUNC_1(VAR_33);
    VAR_33 = FUNC_5("%d.%.2d.%.2d", VAR_19, VAR_30, VAR_18);
    FUNC_0(VAR_33, VAR_32);
    FUNC_2(VAR_26, FUNC_3(VAR_33), VAR_29);
    FUNC_1(VAR_33);
}
