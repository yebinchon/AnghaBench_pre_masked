
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ elts; } ;


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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_18 ;
 int * FUNC_5 (char*,int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_19 ;
 scalar_t__* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 scalar_t__ VAR_24 ;
 char* VAR_25 ;
 TYPE_1__ VAR_26 ;

void FUNC_13 ()
{
 char VAR_27[VAR_16];
 char *VAR_28 = VAR_27;
 bool VAR_29 = 1;


    if(VAR_23 > 0)
        FUNC_9(&VAR_29);
    VAR_23 = 0;
    FUNC_11(VAR_29=1);





 while (VAR_22 ?
        (FUNC_5 (VAR_28, VAR_16, VAR_22) != ((void*)0)) :
        ((VAR_28 = (char *) VAR_20[VAR_21++]) != 0)) {

  if (VAR_22)
   FUNC_3 (VAR_28);


  if (VAR_28[0] == '%') {

   if (VAR_18 && VAR_28[1] != '#') {
    if (VAR_28[FUNC_12 (VAR_28) - 1] == '\\')
     FUNC_7 ("/* %s */\\\n", VAR_28);
    else
     FUNC_7 ("/* %s */\n", VAR_28);
   }
   if (VAR_28[1] == '%') {

    return;
   }
            else if ((strncmp(VAR_28,(VAR_13),FUNC_12(VAR_13))==0)){
                FUNC_11(VAR_29);
                if(VAR_18){
                    FUNC_7("/*(state = (%s) */",VAR_29?"true":"false");
                }
                FUNC_7("%s\n", VAR_28[FUNC_12 (VAR_28) - 1] =='\\' ? "\\" : "");
            }
            else if ((FUNC_0(VAR_28,(VAR_12),FUNC_12(VAR_12))==0)){
                FUNC_10(&VAR_29);
                if(VAR_18){
                    FUNC_7("/*(state = (%s) */",VAR_29?"true":"false");
                }
                FUNC_7("%s\n", VAR_28[FUNC_12 (VAR_28) - 1] =='\\' ? "\\" : "");
            }
            else if ((FUNC_0(VAR_28,(VAR_8),FUNC_12(VAR_8))==0)){
                FUNC_11(VAR_29);
                VAR_29 = VAR_19 && VAR_29;
            }
            else if ((FUNC_0(VAR_28,(VAR_7),FUNC_12(VAR_7))==0)){
                FUNC_11(VAR_29);
                VAR_29 = !VAR_19 && VAR_29;
            }
            else if ((FUNC_0(VAR_28,(VAR_2),FUNC_12(VAR_2))==0)){
                FUNC_11(VAR_29);
                VAR_29 = VAR_17 && VAR_29;
            }
            else if ((FUNC_0(VAR_28,(VAR_6),FUNC_12(VAR_6))==0)){
                FUNC_11(VAR_29);
                VAR_29 = !VAR_17 && VAR_29;
            }
            else if ((FUNC_0(VAR_28,(VAR_1),FUNC_12(VAR_1))==0)){
                FUNC_10(&VAR_29);
            }
   else if ((FUNC_0(VAR_28,(VAR_9),FUNC_12(VAR_9))==0)) {
                VAR_29 = VAR_29 && VAR_24;
   }
   else if ((FUNC_0(VAR_28,(VAR_14),FUNC_12(VAR_14))==0)) {
    if (VAR_24 && VAR_26.elts)
     FUNC_8 ((char *) (VAR_26.elts));
   }
            else if ((FUNC_0(VAR_28,(VAR_0),FUNC_12(VAR_0))==0)) {
                FUNC_7("#define YYTABLES_NAME \"%s\"\n",
                        VAR_25?VAR_25:"yytables");
            }
   else if ((FUNC_0(VAR_28,(VAR_3),FUNC_12(VAR_3))==0)) {

                FUNC_11(VAR_29);
    VAR_29 = VAR_15;
   }
   else if ((FUNC_0(VAR_28,(VAR_4),FUNC_12(VAR_4))==0)) {

                FUNC_11(VAR_29);
    VAR_29 = !VAR_15;
   }
   else if ((FUNC_0(VAR_28,(VAR_5),FUNC_12(VAR_5))==0)) {

                FUNC_11(VAR_29);
    VAR_29 = 1;
   }
   else if ((FUNC_0(VAR_28,(VAR_10),FUNC_12(VAR_10))==0)) {

    FUNC_0 ();
   }
   else if ((FUNC_0(VAR_28,(VAR_11),FUNC_12(VAR_11))==0)) {

    FUNC_1 ();
   }
   else if (VAR_28[1] == '#') {

   }
   else {
    FUNC_6 (FUNC_2("bad line in skeleton file"));
   }
  }

  else if (VAR_29)
            FUNC_8 (VAR_28);
 }
}
