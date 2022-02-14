
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int cp_parser ;
typedef int cp_declarator ;
struct TYPE_5__ {int attributes; int type; } ;
typedef TYPE_1__ cp_decl_specifier_seq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,TYPE_1__*,int*) ;
 int * FUNC_6 (int *,int ,int *,int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_6 ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__,int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int *,TYPE_1__*,int ,int ,int *) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_18 (cp_parser* VAR_8)
{
  int VAR_9;
  cp_decl_specifier_seq VAR_10;
  tree VAR_11 = VAR_3;



  if (FUNC_2 (VAR_8))
    {
      VAR_11
 = FUNC_11 (VAR_8);
      if (!VAR_11)
 VAR_11
   = FUNC_8 (VAR_8,
                          ((void*)0));
    }


  FUNC_9 (VAR_8, VAR_4, "`template'");


  FUNC_0 ();


  FUNC_17 (VAR_6);

  FUNC_5 (VAR_8,
    VAR_1,
    &VAR_10,
    &VAR_9);



  if (VAR_9 && FUNC_7 (VAR_8))
    {
      tree VAR_12;

      VAR_12 = FUNC_1 (&VAR_10);


      FUNC_16 ();
      if (VAR_12)
 FUNC_13 (VAR_12, VAR_11,
                       VAR_7);
    }
  else
    {
      cp_declarator *VAR_13;
      tree VAR_14;


      VAR_13
 = FUNC_6 (VAR_8, VAR_0,
                            ((void*)0),
                        ((void*)0),
                 0);
      if (VAR_9 & 2)
 FUNC_3 (VAR_13,
             VAR_10.type);
      if (VAR_13 != VAR_5)
 {
   VAR_14 = FUNC_15 (VAR_13, &VAR_10,
     VAR_2, 0, &VAR_10.attributes);


   FUNC_16 ();

   FUNC_12 (VAR_14, VAR_11);
 }
      else
 {
   FUNC_16 ();

   FUNC_10 (VAR_8);
 }
    }

  FUNC_14 ();

  FUNC_4 (VAR_8);
}
