
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct symbol_list {scalar_t__ names; } ;
struct fn_decl {int dummy; } ;
typedef int getchar_call ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ cpp_token ;
typedef int cpp_reader ;
struct TYPE_9__ {int inhibit_warnings; int inhibit_errors; } ;
typedef TYPE_2__ cpp_options ;
struct TYPE_10__ {int file_change; } ;
typedef TYPE_3__ cpp_callbacks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fn_decl*) ;
 int FUNC_1 (struct fn_decl*) ;
 int FUNC_2 (struct fn_decl*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,char const*) ;
 int VAR_8 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int ,char*) ;
 int * FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (int *) ;
 TYPE_2__* FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (TYPE_1__ const*,char*) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned char*,int,int) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,char*,...) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_22 (int *) ;
 struct fn_decl* FUNC_23 (char*,int) ;
 int FUNC_24 (int *) ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 int FUNC_25 (int *,int *,int *,int *,int,int,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_26 (int *,int,char**) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct symbol_list* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_27 (char*) ;

__attribute__((used)) static void
FUNC_28 (char *VAR_21, int VAR_22, char **VAR_23)
{
  cpp_reader *VAR_24;
  cpp_callbacks *VAR_25;
  cpp_options *VAR_26;
  struct fn_decl *VAR_27;
  int VAR_28, VAR_29;
  struct symbol_list *VAR_30;

  FUNC_24 (&VAR_15);

  FUNC_22 (&VAR_10);
  VAR_24 = FUNC_7 (VAR_2, ((void*)0), &VAR_10);
  VAR_25 = FUNC_11 (VAR_24);
  VAR_25->file_change = VAR_8;



  VAR_26 = FUNC_12 (VAR_24);
  VAR_26->inhibit_warnings = 1;
  VAR_26->inhibit_errors = 1;
  FUNC_17 (VAR_24);

  if (!FUNC_19 (VAR_24, VAR_21))
    FUNC_20 (VAR_5);

  FUNC_6 (VAR_24, VAR_6, "<built-in>");
  FUNC_15 (VAR_24, 1);
  FUNC_6 (VAR_24, VAR_6, VAR_21);


  for (VAR_28 = 0; VAR_28 < VAR_22; VAR_28 += VAR_29)
    {
      VAR_29 = 0;
      if (VAR_23[VAR_28][0] == '-')
 {
   if (VAR_23[VAR_28][1] == 'I')
     {
       if (VAR_23[VAR_28][2] != '\0')
  {
    VAR_29 = 1;
    FUNC_3 (FUNC_27 (VAR_23[VAR_28] + 2), VAR_1, 0, 0);
  }
       else if (VAR_28 + 1 != VAR_22)
  {
    VAR_29 = 2;
    FUNC_3 (FUNC_27 (VAR_23[VAR_28 + 1]), VAR_1, 0, 0);
  }
     }
   else if (VAR_23[VAR_28][1] == 'D')
     {
       if (VAR_23[VAR_28][2] != '\0')
  VAR_29 = 1, FUNC_8 (VAR_24, VAR_23[VAR_28] + 2);
       else if (VAR_28 + 1 != VAR_22)
  VAR_29 = 2, FUNC_8 (VAR_24, VAR_23[VAR_28 + 1]);
     }
 }

      if (VAR_29 == 0)
 break;
    }

  if (VAR_28 < VAR_22)
    FUNC_9 (VAR_24, VAR_3, "invalid option `%s'", VAR_23[VAR_28]);
  if (FUNC_10 (VAR_24))
    FUNC_20 (VAR_5);

  FUNC_25 (VAR_24, ((void*)0) , ((void*)0) ,
      ((void*)0) , 1 ,
      0 , 0 );


  FUNC_16 (VAR_24, 1, 0);

  FUNC_26 (VAR_24, VAR_22, VAR_23);
  for (VAR_30 = &VAR_19[0]; VAR_30->names; VAR_30++)
    FUNC_5 (VAR_24, VAR_30->names);



  if (VAR_16 == VAR_18
      && (VAR_27 = FUNC_23 ("_filbuf", 7)) != ((void*)0))
    {
      unsigned char VAR_31[] = "getchar();\n";
      int VAR_32 = 0;


      FUNC_18 (VAR_24, VAR_31, sizeof(VAR_31) - 1,
                           1);
      for (;;)
 {
   const cpp_token *VAR_33 = FUNC_13 (VAR_24);

   if (VAR_33->type == VAR_4)
     break;
   else if (FUNC_14 (VAR_33, "_filbuf"))
     VAR_32++;
 }

      if (VAR_32)
 {
   int VAR_34 = !FUNC_1 (VAR_27) && !FUNC_0 (VAR_27);
   struct fn_decl *VAR_35 = FUNC_23 ("_flsbuf", 7);
   int VAR_36
     = VAR_35 && !FUNC_1 (VAR_35) && !FUNC_0 (VAR_35);


   if (VAR_34 + VAR_36)
     {
       const char *VAR_37;
       if (VAR_34)
  FUNC_2 (VAR_27);
       if (VAR_36)
  FUNC_2 (VAR_35);
       if (VAR_36 && VAR_34)
  VAR_37 = "_filbuf\0_flsbuf\0";
       else if (VAR_36)
  VAR_37 = "_flsbuf\0";
       else
  VAR_37 = "_filbuf\0";
       FUNC_4 (VAR_0, VAR_37);
       VAR_14 += VAR_34 + VAR_36;
     }
 }
    }

  if (VAR_14 + VAR_11 + VAR_13 == 0)
    {
      if (VAR_20)
 FUNC_21 (VAR_17, "%s: OK, nothing needs to be done.\n", VAR_9);
      FUNC_20 (VAR_7);
    }
  if (!VAR_20)
    FUNC_21 (VAR_17, "%s: fixing %s\n", VAR_12, VAR_9);
  else
    {
      if (VAR_14)
 FUNC_21 (VAR_17, "%s: %ld missing function declarations.\n",
   VAR_9, VAR_14);
      if (VAR_11)
 FUNC_21 (VAR_17, "%s: %ld non-prototype function declarations.\n",
   VAR_9, VAR_11);
    }
}
