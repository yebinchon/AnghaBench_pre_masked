
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_11__ {TYPE_1__* context; scalar_t__ object_scope; scalar_t__ qualifying_scope; scalar_t__ scope; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_id_kind ;
struct TYPE_10__ {scalar_t__ object_type; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int,int*,int,int) ;
 scalar_t__ FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,scalar_t__*,scalar_t__*) ;
 int FUNC_16 (char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static tree
FUNC_21 (cp_parser *VAR_7,
     enum cpp_ttype VAR_8,
     tree VAR_9,
     bool VAR_10, cp_id_kind *VAR_11)
{
  tree VAR_12;
  bool VAR_13;
  bool VAR_14;
  tree VAR_15 = VAR_3;


  if (VAR_8 == VAR_0)
    VAR_9 = FUNC_8 (VAR_9);

  VAR_13 = FUNC_20 (VAR_9);

  VAR_7->scope = VAR_3;
  VAR_7->qualifying_scope = VAR_3;
  VAR_7->object_scope = VAR_3;
  *VAR_11 = VAR_1;


  if (!VAR_13 && FUNC_5 (VAR_9) != VAR_3)
    {
      VAR_15 = FUNC_5 (VAR_9);






      VAR_15 = FUNC_19 (VAR_15);

      if (VAR_15 == VAR_6)
 {
   FUNC_16 ("%qE does not have class type", VAR_9);
   VAR_15 = VAR_3;
 }
      else
 VAR_15 = FUNC_9 (VAR_15, VAR_3);


      VAR_7->context->object_type = VAR_15;



      if (!VAR_15)
 VAR_15 = VAR_5;



      if (VAR_15 == VAR_5)
 VAR_9 = VAR_5;
    }


  VAR_14 = 0;



  if (VAR_15 && FUNC_3 (VAR_15))
    {
      tree VAR_16;
      tree VAR_17;

      FUNC_14 (VAR_7);

      VAR_16 = VAR_3;
      FUNC_15 (VAR_7, &VAR_16, &VAR_17);
      if (FUNC_13 (VAR_7))
 {
   VAR_14 = 1;
   VAR_9
     = FUNC_18 (VAR_9,
          VAR_16, FUNC_5 (VAR_17));
 }
    }

  if (!VAR_14)
    {



      bool VAR_18;

      VAR_12 = (FUNC_10
       (VAR_7,
        FUNC_12 (VAR_7),
                               1,
        &VAR_18,
                         0,
                       0));
      if (VAR_7->scope)
 *VAR_11 = VAR_2;



      if (FUNC_4 (VAR_12) == VAR_4)
 {
   FUNC_16 ("invalid use of %qD", VAR_12);
   VAR_9 = VAR_5;
 }
      else
 {
   if (VAR_12 != VAR_5 && !FUNC_1 (VAR_12) && VAR_7->scope)
     {
       VAR_12 = FUNC_7 ( VAR_3,
        VAR_7->scope,
        VAR_12,
        VAR_18);
       VAR_7->scope = VAR_3;
       VAR_7->qualifying_scope = VAR_3;
       VAR_7->object_scope = VAR_3;
     }
   if (VAR_15 && VAR_12 && FUNC_1 (VAR_12))
     FUNC_6
       (VAR_12, FUNC_2 (FUNC_0 (VAR_12)), VAR_15);
   VAR_9
     = FUNC_17 (VAR_9, VAR_12,
            VAR_18);
 }
    }



  VAR_7->context->object_type = VAR_3;



  if (!VAR_10
      && (FUNC_11
   (VAR_7, VAR_8 == VAR_0 ? "'->'" : "`.'")))
    VAR_9 = VAR_5;

  return VAR_9;
}
