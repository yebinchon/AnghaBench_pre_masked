
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter {int * extra; int next; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,int const,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int const) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,char*,...) ;
 int FUNC_13 (char*,int *) ;
 int * FUNC_14 (char*,char*,int *) ;
 char* VAR_1 ;
 int FUNC_15 (int ,char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_16 (int ) ;

int FUNC_17 (struct filter *VAR_6)
{




 const int VAR_7 = 512;
 char *VAR_8;
 int VAR_9 = -1;
 FILE *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 bool VAR_12;

 VAR_12 = (VAR_6->extra != ((void*)0));






 if ((VAR_9 = FUNC_1 (1)) == -1)
  FUNC_11 (FUNC_0("dup(1) failed"));
 VAR_10 = FUNC_4 (VAR_9, "w");

 if (VAR_12) {
  if (FUNC_14 ((char *) VAR_6->extra, "w", VAR_5) == ((void*)0))
   FUNC_11 (FUNC_0("freopen(headerfilename) failed"));

  FUNC_8 (VAR_6->next);
  VAR_11 = VAR_5;
 }




 if (VAR_12) {
        FUNC_13 (VAR_0, VAR_11);
  FUNC_13 ("m4_changecom`'m4_dnl\n", VAR_11);
  FUNC_13 ("m4_changequote`'m4_dnl\n", VAR_11);
  FUNC_13 ("m4_changequote([[,]])[[]]m4_dnl\n", VAR_11);
     FUNC_13 ("m4_define([[M4_YY_NOOP]])[[]]m4_dnl\n", VAR_11);
  FUNC_13 ("m4_define( [[M4_YY_IN_HEADER]],[[]])m4_dnl\n",
         VAR_11);
  FUNC_12 (VAR_11, "#ifndef %sHEADER_H\n", VAR_3);
  FUNC_12 (VAR_11, "#define %sHEADER_H 1\n", VAR_3);
  FUNC_12 (VAR_11, "#define %sIN_HEADER 1\n\n", VAR_3);
  FUNC_12 (VAR_11,
    "m4_define( [[M4_YY_OUTFILE_NAME]],[[%s]])m4_dnl\n",
    VAR_1 ? VAR_1 : "<stdout>");

 }

    FUNC_13 (VAR_0, VAR_10);
 FUNC_13 ("m4_changecom`'m4_dnl\n", VAR_10);
 FUNC_13 ("m4_changequote`'m4_dnl\n", VAR_10);
 FUNC_13 ("m4_changequote([[,]])[[]]m4_dnl\n", VAR_10);
 FUNC_13 ("m4_define([[M4_YY_NOOP]])[[]]m4_dnl\n", VAR_10);
 FUNC_12 (VAR_10, "m4_define( [[M4_YY_OUTFILE_NAME]],[[%s]])m4_dnl\n",
   VAR_2 ? VAR_2 : "<stdout>");

 VAR_8 = (char *) FUNC_9 (VAR_7);
 if (!VAR_8)
  FUNC_10 (FUNC_0("flex_alloc failed in filter_tee_header"));
 while (FUNC_7 (VAR_8, VAR_7, VAR_4)) {
  FUNC_13 (VAR_8, VAR_10);
  if (VAR_12)
   FUNC_13 (VAR_8, VAR_11);
 }

 if (VAR_12) {
  FUNC_12 (VAR_11, "\n");


  FUNC_12 (VAR_11, "#line 4000 \"M4_YY_OUTFILE_NAME\"\n");

  FUNC_12 (VAR_11, "#undef %sIN_HEADER\n", VAR_3);
  FUNC_12 (VAR_11, "#endif /* %sHEADER_H */\n", VAR_3);
  FUNC_13 ("m4_undefine( [[M4_YY_IN_HEADER]])m4_dnl\n", VAR_11);

  FUNC_6 (VAR_11);
  if (FUNC_5 (VAR_11))
   FUNC_15 (FUNC_0("error writing output file %s"),
    (char *) VAR_6->extra);

  else if (FUNC_3 (VAR_11))
   FUNC_15 (FUNC_0("error closing output file %s"),
    (char *) VAR_6->extra);
 }

 FUNC_6 (VAR_10);
 if (FUNC_5 (VAR_10))
  FUNC_15 (FUNC_0("error writing output file %s"),
   VAR_2 ? VAR_2 : "<stdout>");

 else if (FUNC_3 (VAR_10))
  FUNC_15 (FUNC_0("error closing output file %s"),
   VAR_2 ? VAR_2 : "<stdout>");

 while (FUNC_16 (0) > 0) ;

 FUNC_2 (0);
 return 0;
}
