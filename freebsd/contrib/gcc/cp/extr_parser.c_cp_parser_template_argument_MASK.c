
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int tree ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_18__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_id_kind ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int,int,int*,int,int) ;
 int FUNC_13 (TYPE_2__*,int ,int ,int,int,int,int *) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int,int,int,int *) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int VAR_17 ;

__attribute__((used)) static tree
FUNC_23 (cp_parser* VAR_18)
{
  tree VAR_19;
  bool VAR_20;
  bool VAR_21;
  bool VAR_22 = 0;
  cp_token *VAR_23;
  cp_id_kind VAR_24;
  FUNC_16 (VAR_18);
  VAR_19 = FUNC_19 (VAR_18);
  if (!FUNC_11 (VAR_18)
      && FUNC_6 (VAR_18->lexer, VAR_4))
    {
      VAR_22 = 1;
      FUNC_8 (VAR_18);
    }
  else
    {



      if (!FUNC_14 (VAR_18))
 FUNC_10 (VAR_18, "expected template-argument");

      if (FUNC_15 (VAR_18))
 return VAR_19;
    }

  FUNC_16 (VAR_18);

  VAR_19 = FUNC_12 (VAR_18,
                                 0,
                                 1,
          &VAR_20,
                           0,
                         0);


  if (!FUNC_14 (VAR_18))
    FUNC_10 (VAR_18, "expected template-argument");
  if (!FUNC_11 (VAR_18))
    {




      if (FUNC_2 (VAR_19) != VAR_13)
 VAR_19 = FUNC_13 (VAR_18, VAR_19,
       VAR_17,
                       VAR_20,
                        0,
                            1,
                           ((void*)0));
      if (FUNC_2 (VAR_19) != VAR_11
   && FUNC_2 (VAR_19) != VAR_14)
 FUNC_10 (VAR_18, "expected template-name");
    }
  if (FUNC_15 (VAR_18))
    return VAR_19;
  if (FUNC_6 (VAR_18->lexer, VAR_2))
    {
      FUNC_16 (VAR_18);
      VAR_19 = FUNC_17 (VAR_18,
                         0,
                       0,
                               1,
            &VAR_24);
      if (FUNC_2 (VAR_19) != VAR_12
   || !FUNC_14 (VAR_18))
 FUNC_18 (VAR_18);
      if (FUNC_15 (VAR_18))
 return VAR_19;
    }



  VAR_21 = FUNC_6 (VAR_18->lexer, VAR_1);
  if (VAR_21)
    FUNC_5 (VAR_18->lexer);

  VAR_23 = FUNC_7 (VAR_18->lexer);
  if (VAR_23->type == VAR_2
      || VAR_23->keyword == VAR_9
      || VAR_23->type == VAR_5
      || VAR_23->type == VAR_6
      || VAR_23->type == VAR_3)
    {
      FUNC_16 (VAR_18);
      VAR_19 = FUNC_17 (VAR_18,
            VAR_21,
                       0,
                               1,
            &VAR_24);
      if (FUNC_11 (VAR_18)
   || !FUNC_14 (VAR_18))
 FUNC_8 (VAR_18);
      else
 {
   if (FUNC_2 (VAR_19) == VAR_7)
     {
       FUNC_21 (FUNC_1 (VAR_19));
       VAR_19 = FUNC_3 (VAR_19, 0);
     }

   if (FUNC_2 (VAR_19) == VAR_15)
     {



       if (!VAR_21 && !FUNC_0 (VAR_19))
  FUNC_18 (VAR_18);
     }
   else if (FUNC_22 (VAR_19))



     ;
   else if (VAR_21
     && (FUNC_2 (VAR_19) == VAR_8
         || FUNC_2 (VAR_19) == VAR_10))

     ;
   else if (FUNC_2 (VAR_19) == VAR_12)
     ;
   else
     FUNC_18 (VAR_18);

   if (FUNC_15 (VAR_18))
     {
       if (VAR_21)
  VAR_19 = FUNC_4 (VAR_0, VAR_19);
       return VAR_19;
     }
 }
    }


  if (VAR_21)
    {
      FUNC_10 (VAR_18, "invalid non-type template argument");
      return VAR_16;
    }





  if (VAR_22)
    FUNC_16 (VAR_18);
  VAR_19 = FUNC_9 (VAR_18,
                                  0,
                            ((void*)0));
  VAR_19 = FUNC_20 (VAR_19);
  if (!VAR_22)
    return VAR_19;
  if (!FUNC_14 (VAR_18))
    FUNC_10 (VAR_18, "expected template-argument");
  if (FUNC_15 (VAR_18))
    return VAR_19;




  return FUNC_19 (VAR_18);
}
