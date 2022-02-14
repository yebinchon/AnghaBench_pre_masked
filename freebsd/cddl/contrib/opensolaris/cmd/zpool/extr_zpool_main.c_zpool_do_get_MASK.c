
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pl_next; int pl_width; int pl_prop; int member_0; } ;
typedef TYPE_1__ zprop_list_t ;
struct TYPE_8__ {TYPE_1__* cb_proplist; void** cb_columns; void* cb_scripted; void* cb_literal; int cb_type; int cb_sources; void* cb_first; int member_0; } ;
typedef TYPE_2__ zprop_get_cbdata_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void***,int) ;
 int FUNC_1 (int,char**,void*,TYPE_1__**,int ,TYPE_2__*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char**,char**,char**) ;
 char* FUNC_5 (char*) ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (char*) ;
 char* VAR_16 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,char*,TYPE_1__**,int ) ;

int
FUNC_10(int VAR_17, char **VAR_18)
{
 zprop_get_cbdata_t VAR_19 = { 0 };
 zprop_list_t VAR_20 = { 0 };
 int VAR_21;
 int VAR_22, VAR_23;
 char *VAR_24;

 VAR_19.cb_first = VAR_1;




 VAR_19.cb_sources = VAR_9;
 VAR_19.cb_columns[0] = VAR_2;
 VAR_19.cb_columns[1] = VAR_3;
 VAR_19.cb_columns[2] = VAR_5;
 VAR_19.cb_columns[3] = VAR_4;
 VAR_19.cb_type = VAR_7;


 while ((VAR_22 = FUNC_3(VAR_17, VAR_18, ":Hpo:")) != -1) {
  switch (VAR_22) {
  case 'p':
   VAR_19.cb_literal = VAR_1;
   break;
  case 'H':
   VAR_19.cb_scripted = VAR_1;
   break;
  case 'o':
   FUNC_0(&VAR_19.cb_columns, sizeof (VAR_19.cb_columns));
   VAR_23 = 0;
   while (*VAR_12 != '\0') {
    static char *VAR_25[] =
    { "name", "property", "value", "source",
    "all", ((void*)0) };

    if (VAR_23 == VAR_6) {
     (void) FUNC_2(VAR_15, "%s", FUNC_5("too "
     "many fields given to -o "
     "option\n"));
     FUNC_7(VAR_0);
    }

    switch (FUNC_4(&VAR_12, VAR_25,
        &VAR_24)) {
    case 0:
     VAR_19.cb_columns[VAR_23++] = VAR_2;
     break;
    case 1:
     VAR_19.cb_columns[VAR_23++] = VAR_3;
     break;
    case 2:
     VAR_19.cb_columns[VAR_23++] = VAR_5;
     break;
    case 3:
     VAR_19.cb_columns[VAR_23++] = VAR_4;
     break;
    case 4:
     if (VAR_23 > 0) {
      (void) FUNC_2(VAR_15,
          "%s", FUNC_5("\"all\" conflicts "
          "with specific fields "
          "given to -o option\n"));
      FUNC_7(VAR_0);
     }
     VAR_19.cb_columns[0] = VAR_2;
     VAR_19.cb_columns[1] = VAR_3;
     VAR_19.cb_columns[2] = VAR_5;
     VAR_19.cb_columns[3] = VAR_4;
     VAR_23 = VAR_6;
     break;
    default:
     (void) FUNC_2(VAR_15,
         FUNC_5("invalid column name "
         "'%s'\n"), VAR_16);
     FUNC_7(VAR_0);
    }
   }
   break;
  case '?':
   (void) FUNC_2(VAR_15, FUNC_5("invalid option '%c'\n"),
       VAR_14);
   FUNC_7(VAR_0);
  }
 }

 VAR_17 -= VAR_13;
 VAR_18 += VAR_13;

 if (VAR_17 < 1) {
  (void) FUNC_2(VAR_15, "%s", FUNC_5("missing property "
      "argument\n"));
  FUNC_7(VAR_0);
 }

 if (FUNC_9(VAR_10, VAR_18[0], &VAR_19.cb_proplist,
     VAR_7) != 0)
  FUNC_7(VAR_0);

 VAR_17--;
 VAR_18++;

 if (VAR_19.cb_proplist != ((void*)0)) {
  VAR_20.pl_prop = VAR_8;
  VAR_20.pl_width = FUNC_6(FUNC_5("NAME"));
  VAR_20.pl_next = VAR_19.cb_proplist;
  VAR_19.cb_proplist = &VAR_20;
 }

 VAR_21 = FUNC_1(VAR_17, VAR_18, VAR_1, &VAR_19.cb_proplist,
     VAR_11, &VAR_19);

 if (VAR_19.cb_proplist == &VAR_20)
  FUNC_8(VAR_20.pl_next);
 else
  FUNC_8(VAR_19.cb_proplist);

 return (VAR_21);
}
