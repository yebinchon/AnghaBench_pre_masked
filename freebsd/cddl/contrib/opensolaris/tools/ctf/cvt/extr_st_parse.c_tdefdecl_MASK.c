
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* t_name; int t_id; struct TYPE_11__* t_tdesc; int t_size; int t_type; TYPE_1__* t_fndef; } ;
typedef TYPE_2__ tdesc_t ;
typedef int fndef_t ;
struct TYPE_10__ {int fn_ret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*,int) ;
 char* FUNC_3 (char*,TYPE_2__**) ;
 TYPE_2__* FUNC_4 (int,int) ;
 int FUNC_5 (char*,char*,char*) ;
 int VAR_11 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,int*) ;
 char* FUNC_8 (char*,TYPE_2__**) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char**) ;
 int FUNC_12 (int,char*,char*,...) ;
 char* FUNC_13 (char*,int ,TYPE_2__**) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,int ,int ,...) ;
 void* FUNC_17 (int) ;

__attribute__((used)) static char *
FUNC_18(char *VAR_12, int VAR_13, tdesc_t **VAR_14)
{
 tdesc_t *VAR_15;
 char *VAR_16;
 int VAR_17, VAR_18;
 char VAR_19;

 FUNC_12(3, VAR_12, "tdefdecl h=%d", VAR_13);


 switch (VAR_19 = *VAR_12) {
 case 'b':
 case 'R':
  VAR_12 = FUNC_8(VAR_12, VAR_14);
  break;
 case '(':
  VAR_12 = FUNC_7(VAR_12, &VAR_18);
  VAR_15 = FUNC_9(VAR_18);

  if (VAR_15 != ((void*)0) && *VAR_12 == '=') {
   if (VAR_15->t_type == VAR_2 && *(VAR_12 + 1) == 'x') {
    char *VAR_20 = VAR_12 + 2;
    char *VAR_21;

    if (!FUNC_14("sue", *VAR_20++)) {
     FUNC_5("tdefdecl/x-redefine", "[sue]",
         VAR_20 - 1);
    }

    VAR_20 = FUNC_11(VAR_20, &VAR_21);
    if (FUNC_15(VAR_21, VAR_15->t_name) != 0) {
     FUNC_16("Stabs error: Attempt to "
         "redefine type (%d,%d) as "
         "something else: %s\n",
         FUNC_0(VAR_18), FUNC_1(VAR_18),
         VAR_20 - 1);
    }
    FUNC_6(VAR_21);

    VAR_18 = VAR_11++;
    VAR_15 = ((void*)0);
   } else {
    FUNC_16("Stabs error: Attempting to "
        "redefine type (%d,%d)\n", FUNC_0(VAR_18),
        FUNC_1(VAR_18));
   }
  }

  if (VAR_15 == ((void*)0)) {
   if (*VAR_12 != '=') {

    FUNC_12(3, ((void*)0), "tdefdecl unres type %d",
        VAR_18);
    *VAR_14 = FUNC_4(sizeof (**VAR_14), 1);
    (*VAR_14)->t_type = VAR_8;
    (*VAR_14)->t_id = VAR_18;
    break;
   } else
    VAR_12++;


   VAR_12 = FUNC_18(VAR_12, VAR_18, VAR_14);
   if ((*VAR_14)->t_id && (*VAR_14)->t_id != VAR_18) {
    VAR_15 = FUNC_4(sizeof (*VAR_15), 1);
    VAR_15->t_type = VAR_7;
    VAR_15->t_tdesc = *VAR_14;
    *VAR_14 = VAR_15;
   }

   FUNC_2(*VAR_14, VAR_18);

  } else {
   if (VAR_15->t_type != VAR_7 || VAR_15->t_name != ((void*)0)) {
    *VAR_14 = VAR_15;
   } else {
    FUNC_12(3, ((void*)0),
        "No duplicate typedef anon for ref");
    *VAR_14 = VAR_15;
   }
  }
  break;
 case '*':
  VAR_15 = ((void*)0);
  VAR_12 = FUNC_18(VAR_12 + 1, VAR_13, &VAR_15);
  if (VAR_15 == ((void*)0))
   FUNC_5("tdefdecl/*", "id", VAR_12);

  if (!VAR_15->t_id)
   VAR_15->t_id = VAR_11++;

  *VAR_14 = FUNC_17(sizeof (**VAR_14));
  (*VAR_14)->t_type = VAR_4;
  (*VAR_14)->t_size = 0;
  (*VAR_14)->t_id = VAR_13;
  (*VAR_14)->t_tdesc = VAR_15;
  break;
 case 'f':
  VAR_12 = FUNC_18(VAR_12 + 1, VAR_13, &VAR_15);
  *VAR_14 = FUNC_17(sizeof (**VAR_14));
  (*VAR_14)->t_type = VAR_3;
  (*VAR_14)->t_size = 0;
  (*VAR_14)->t_id = VAR_13;
  (*VAR_14)->t_fndef = FUNC_17(sizeof (fndef_t));
  (*VAR_14)->t_fndef->fn_ret = FUNC_10("int");
  break;
 case 'a':
 case 'z':
  VAR_12++;
  if (*VAR_12++ != 'r')
   FUNC_5("tdefdecl/[az]", "r", VAR_12 - 1);
  *VAR_14 = FUNC_17(sizeof (**VAR_14));
  (*VAR_14)->t_type = VAR_0;
  (*VAR_14)->t_id = VAR_13;
  VAR_12 = FUNC_3(VAR_12, VAR_14);
  break;
 case 'x':
  VAR_17 = *++VAR_12;
  if (VAR_17 != 's' && VAR_17 != 'u' && VAR_17 != 'e')
   FUNC_5("tdefdecl/x", "[sue]", VAR_12 - 1);
  VAR_12 = FUNC_11(VAR_12 + 1, &VAR_16);

  VAR_15 = FUNC_17(sizeof (*VAR_15));
  VAR_15->t_type = VAR_2;
  VAR_15->t_name = VAR_16;






  *VAR_14 = VAR_15;
  break;

 case 'B':
  VAR_12 = FUNC_18(VAR_12 + 1, VAR_13, &VAR_15);

  if (!VAR_15->t_id)
   VAR_15->t_id = VAR_11++;

  *VAR_14 = FUNC_17(sizeof (**VAR_14));
  (*VAR_14)->t_type = VAR_10;
  (*VAR_14)->t_size = 0;
  (*VAR_14)->t_tdesc = VAR_15;
  (*VAR_14)->t_id = VAR_13;
  break;

 case 'k':
  VAR_12 = FUNC_18(VAR_12 + 1, VAR_13, &VAR_15);

  if (!VAR_15->t_id)
   VAR_15->t_id = VAR_11++;

  *VAR_14 = FUNC_17(sizeof (**VAR_14));
  (*VAR_14)->t_type = VAR_1;
  (*VAR_14)->t_size = 0;
  (*VAR_14)->t_tdesc = VAR_15;
  (*VAR_14)->t_id = VAR_13;
  break;

 case 'K':
  VAR_12 = FUNC_18(VAR_12 + 1, VAR_13, &VAR_15);

  if (!VAR_15->t_id)
   VAR_15->t_id = VAR_11++;

  *VAR_14 = FUNC_17(sizeof (**VAR_14));
  (*VAR_14)->t_type = VAR_5;
  (*VAR_14)->t_size = 0;
  (*VAR_14)->t_tdesc = VAR_15;
  (*VAR_14)->t_id = VAR_13;
  break;

 case 'u':
 case 's':
  VAR_12++;

  *VAR_14 = FUNC_17(sizeof (**VAR_14));
  (*VAR_14)->t_name = ((void*)0);
  VAR_12 = FUNC_13(VAR_12, (VAR_19 == 'u') ? VAR_9 : VAR_6, VAR_14);
  break;
 default:
  FUNC_5("tdefdecl", "<type code>", VAR_12);
 }
 return (VAR_12);
}
