
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int int8_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,int ,size_t) ;
 int VAR_16 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,size_t) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,char*,int ,int ,int*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,char*) ;
 int * FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char const*,char*) ;
 int * FUNC_21 (char*,char) ;

ldns_status
FUNC_22(ldns_resolver **VAR_17, FILE *VAR_18, int *VAR_19)
{
 ldns_resolver *VAR_20;
 const char *VAR_21[VAR_7];
 char VAR_22[VAR_1 + 1];
 int8_t VAR_23;
 uint8_t VAR_24;
 ldns_rdf *VAR_25;



 ssize_t VAR_26, VAR_27;
 VAR_16 *VAR_15;
        int VAR_28 = 0, VAR_29;
 FILE* VAR_30 = VAR_18;
        if(!VAR_19) VAR_19 = &VAR_28;

 if(!VAR_18) {
  VAR_30 = FUNC_4("/etc/resolv.conf", "r");
  if(!VAR_30)
   return VAR_8;
 }
 VAR_21[131] = "nameserver";
 VAR_21[133] = "domain";
 VAR_21[129] = "search";

 VAR_21[128] = "sortlist";
 VAR_21[130] = "options";
 VAR_21[134] = "anchor";
 VAR_23 = 132;

 VAR_20 = FUNC_14();
 if (!VAR_20) {
  if(!VAR_18) FUNC_2(VAR_30);
  return VAR_9;
 }

 VAR_26 = 1;
 VAR_22[0] = 0;
        VAR_29 = *VAR_19;
        VAR_23 = 132;
 while (VAR_26 > 0) {

  if (VAR_22[0] == '#') {
                        VAR_22[0]='x';
                        if(VAR_29 == *VAR_19) {

                                int VAR_31;
                                do {
                                        VAR_31 = FUNC_3(VAR_30);
                                } while(VAR_31 != VAR_0 && VAR_31 != '\n');
                                if(VAR_31=='\n') (*VAR_19)++;
                        }

                        VAR_29 = *VAR_19;
   continue;
  }
                VAR_29 = *VAR_19;
  switch(VAR_23) {
   case 132:

    VAR_26 = FUNC_9(VAR_30, VAR_22, VAR_2, 0, VAR_19);
    if (VAR_26 != 0) {
                                        if(VAR_22[0] == '#') continue;
     for(VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
      if (FUNC_20(VAR_21[VAR_24], VAR_22) == 0) {



       VAR_23 = VAR_24;
       break;
      }
     }

     if (VAR_23 == 132) {






     }
    }
    break;
   case 133:

    VAR_26 = FUNC_9(VAR_30, VAR_22, VAR_2, 0, VAR_19);
    if (VAR_26 == 0) {
     if(!VAR_18) FUNC_2(VAR_30);
     return VAR_14;
    }
                                if(VAR_22[0] == '#') {
                                        VAR_23 = 132;
                                        continue;
                                }
    VAR_25 = FUNC_11(VAR_6, VAR_22);
    if (!VAR_25) {
     FUNC_13(VAR_20);
     if(!VAR_18) FUNC_2(VAR_30);
     return VAR_12;
    }


    FUNC_18(VAR_20, VAR_25);
    VAR_23 = 132;
    break;
   case 131:

    VAR_26 = FUNC_9(VAR_30, VAR_22, VAR_2, 0, VAR_19);
    if (VAR_26 == 0) {
     if(!VAR_18) FUNC_2(VAR_30);
     return VAR_14;
    }
                                if(VAR_22[0] == '#') {
                                        VAR_23 = 132;
                                        continue;
                                }
                                if(FUNC_21(VAR_22, '%')) {


                                        FUNC_21(VAR_22, '%')[0]=0;
                                }
    VAR_25 = FUNC_11(VAR_5, VAR_22);
    if (!VAR_25) {

     VAR_25 = FUNC_11(VAR_4, VAR_22);
    }

    if (!VAR_25) {
     FUNC_13(VAR_20);
     if(!VAR_18) FUNC_2(VAR_30);
     return VAR_13;
    }
    (void)FUNC_16(VAR_20, VAR_25);
    FUNC_10(VAR_25);
    VAR_23 = 132;
    break;
   case 129:

    VAR_26 = FUNC_9(VAR_30, VAR_22, VAR_3, 0, VAR_19);
    VAR_15 = FUNC_1(VAR_16);
    if(!VAR_15) {
     FUNC_13(VAR_20);
     if(!VAR_18) FUNC_2(VAR_30);
     return VAR_9;
    }

    FUNC_7(VAR_15, VAR_22, (size_t) VAR_26);
    if(FUNC_8(VAR_15) != VAR_11) {
     FUNC_0(VAR_15);
     FUNC_13(VAR_20);
     if(!VAR_18) FUNC_2(VAR_30);
     return VAR_9;
    }
    VAR_27 = FUNC_5(VAR_15, VAR_22, VAR_2, (size_t) VAR_26 + 1);
    while (VAR_27 > 0) {
     VAR_26 -= VAR_27;
                                        if(VAR_22[0] == '#') {
                                                VAR_23 = 132;
                                                break;
                                        }
     VAR_25 = FUNC_11(VAR_6, VAR_22);
     if (!VAR_25) {
      FUNC_13(VAR_20);
      FUNC_6(VAR_15);
      if(!VAR_18) FUNC_2(VAR_30);
      return VAR_12;
     }

     FUNC_17(VAR_20, VAR_25);

     FUNC_10(VAR_25);
     VAR_27 = FUNC_5(VAR_15, VAR_22, VAR_2,
         (size_t) VAR_26 + 1);
    }
    FUNC_6(VAR_15);
    if (VAR_23 != 132) {
     VAR_26 = 1;
     VAR_23 = 132;
    }
    break;
   case 128:
    VAR_26 = FUNC_9(VAR_30, VAR_22, VAR_3, 0, VAR_19);

    VAR_23 = 132;
    break;
   case 130:
    VAR_26 = FUNC_9(VAR_30, VAR_22, VAR_3, 0, VAR_19);

    VAR_23 = 132;
    break;
   case 134:

    VAR_26 = FUNC_9(VAR_30, VAR_22, VAR_2, 0, VAR_19);
    if (VAR_26 == 0) {
     FUNC_13(VAR_20);
     if(!VAR_18) FUNC_2(VAR_30);
     return VAR_14;
    }
                                if(VAR_22[0] == '#') {
                                        VAR_23 = 132;
                                        continue;
                                }






    VAR_23 = 132;
    break;
  }
 }

 if(!VAR_18)
  FUNC_2(VAR_30);

 if (VAR_17) {
  *VAR_17 = VAR_20;
  return VAR_11;
 } else {
  FUNC_13(VAR_20);
  return VAR_10;
 }
}
