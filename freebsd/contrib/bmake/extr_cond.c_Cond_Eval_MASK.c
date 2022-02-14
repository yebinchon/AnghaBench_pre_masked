
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct If {char* form; int formlen; } ;
typedef enum if_states { ____Placeholder_if_states } if_states ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct If const*,char*,scalar_t__*,int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_8 ;
 int* FUNC_2 (unsigned int) ;
 int* FUNC_3 (int*,unsigned int) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct If* VAR_11 ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

int
FUNC_5(char *VAR_12)
{


    enum if_states {
 IF_ACTIVE,
 ELSE_ACTIVE,
 SEARCH_FOR_ELIF,
 SKIP_TO_ELSE,
 SKIP_TO_ENDIF
    };
    static enum if_states *VAR_13 = ((void*)0);
    static unsigned int VAR_14 = 128;

    const struct If *VAR_15;
    Boolean VAR_16;
    Boolean VAR_17;
    int VAR_18;
    enum if_states VAR_19;

    VAR_18 = VAR_6;
    if (!VAR_13) {
 VAR_13 = FUNC_2(VAR_14 * sizeof(*VAR_13));
 VAR_13[0] = IF_ACTIVE;
    }

    for (VAR_12++; *VAR_12 == ' ' || *VAR_12 == '\t'; VAR_12++)
 continue;


    if (VAR_12[0] == 'e') {
 if (VAR_12[1] != 'l') {
     if (!FUNC_4(VAR_12 + 1, "ndif", 4))
  return VAR_0;

     if (VAR_9 == VAR_10) {
  FUNC_1(VAR_18, "if-less endif");
  return VAR_1;
     }

     VAR_9--;
     return VAR_13[VAR_9] <= ELSE_ACTIVE ? VAR_1 : VAR_2;
 }


 VAR_12 += 2;
 if (FUNC_4(VAR_12, "se", 2)) {

     if (VAR_9 == VAR_10) {
  FUNC_1(VAR_18, "if-less else");
  return VAR_1;
     }

     VAR_19 = VAR_13[VAR_9];
     switch (VAR_19) {
     case SEARCH_FOR_ELIF:
  VAR_19 = ELSE_ACTIVE;
  break;
     case ELSE_ACTIVE:
     case SKIP_TO_ENDIF:
  FUNC_1(VAR_7, "extra else");

     default:
     case IF_ACTIVE:
     case SKIP_TO_ELSE:
  VAR_19 = SKIP_TO_ENDIF;
  break;
     }
     VAR_13[VAR_9] = VAR_19;
     return VAR_19 <= ELSE_ACTIVE ? VAR_1 : VAR_2;
 }

 VAR_16 = VAR_8;
    } else
 VAR_16 = VAR_3;

    if (VAR_12[0] != 'i' || VAR_12[1] != 'f')

 return VAR_0;





    VAR_12 += 2;
    for (VAR_15 = VAR_11; ; VAR_15++) {
 if (VAR_15->form == ((void*)0))
     return VAR_0;
 if (FUNC_4(VAR_15->form, VAR_12, VAR_15->formlen)) {
     VAR_12 += VAR_15->formlen;
     break;
 }
    }



    if (VAR_16) {
 if (VAR_9 == VAR_10) {
     FUNC_1(VAR_18, "if-less elif");
     return VAR_1;
 }
 VAR_19 = VAR_13[VAR_9];
 if (VAR_19 == SKIP_TO_ENDIF || VAR_19 == ELSE_ACTIVE) {
     FUNC_1(VAR_7, "extra elif");
     VAR_13[VAR_9] = SKIP_TO_ENDIF;
     return VAR_2;
 }
 if (VAR_19 != SEARCH_FOR_ELIF) {

     VAR_13[VAR_9] = SKIP_TO_ELSE;
     return VAR_2;
 }
    } else {

 if (VAR_9 + 1 >= VAR_14) {





     VAR_14 += 32;
     VAR_13 = FUNC_3(VAR_13, VAR_14 *
  sizeof(*VAR_13));
 }
 VAR_19 = VAR_13[VAR_9];
 VAR_9++;
 if (VAR_19 > ELSE_ACTIVE) {

     VAR_13[VAR_9] = SKIP_TO_ELSE;
     return VAR_2;
 }
    }


    if (FUNC_0(VAR_15, VAR_12, &VAR_17, 1, VAR_8) == VAR_0) {


 VAR_13[VAR_9] = SKIP_TO_ELSE;
 return VAR_2;
    }

    if (!VAR_17) {
 VAR_13[VAR_9] = SEARCH_FOR_ELIF;
 return VAR_2;
    }
    VAR_13[VAR_9] = IF_ACTIVE;
    return VAR_1;
}
