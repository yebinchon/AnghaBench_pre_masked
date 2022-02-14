
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
typedef char* TYPE_NAME ;


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
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 char* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_4 (int ,int,int ,char*,struct objfile*) ;
 int FUNC_5 (void*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

void
FUNC_6 (void)
{
  VAR_16 =
    FUNC_4 (VAR_9, VAR_3 / VAR_0,
        0, "integer", (struct objfile *) ((void*)0));
  VAR_17 =
    FUNC_4 (VAR_9, VAR_4 / VAR_0,
        0, "long_integer", (struct objfile *) ((void*)0));
  VAR_22 =
    FUNC_4 (VAR_9, VAR_7 / VAR_0,
        0, "short_integer", (struct objfile *) ((void*)0));
  VAR_13 =
    FUNC_4 (VAR_9, VAR_0 / VAR_0,
        0, "character", (struct objfile *) ((void*)0));
  VAR_15 =
    FUNC_4 (VAR_8, VAR_2 / VAR_0,
        0, "float", (struct objfile *) ((void*)0));
  VAR_14 =
    FUNC_4 (VAR_8, VAR_1 / VAR_0,
        0, "long_float", (struct objfile *) ((void*)0));
  VAR_19 =
    FUNC_4 (VAR_9, VAR_6 / VAR_0,
        0, "long_long_integer", (struct objfile *) ((void*)0));
  VAR_18 =
    FUNC_4 (VAR_8, VAR_5 / VAR_0,
        0, "long_long_float", (struct objfile *) ((void*)0));
  VAR_20 =
    FUNC_4 (VAR_9, VAR_3 / VAR_0,
        0, "natural", (struct objfile *) ((void*)0));
  VAR_21 =
    FUNC_4 (VAR_9, VAR_3 / VAR_0,
        0, "positive", (struct objfile *) ((void*)0));


  VAR_23 =
    FUNC_5 (FUNC_4 (VAR_10, 1, 0, "void",
        (struct objfile *) ((void*)0)));
  TYPE_NAME (VAR_30) = "system__address";

  FUNC_1 (&VAR_11);

  FUNC_3
    (FUNC_2 ("varsize-limit", VAR_25, VAR_28,
    (char *) &VAR_29,
    "Set maximum bytes in dynamic-sized object.",
    &VAR_26), &VAR_27);
  VAR_29 = 65536;

  FUNC_0 ("begin", VAR_24, VAR_12,
    "Start the debugged program, stopping at the beginning of the\nmain program.  You may specify command-line arguments to give it, as for\nthe \"run\" command (q.v.).");


}
