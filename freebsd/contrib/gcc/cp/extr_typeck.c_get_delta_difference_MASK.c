
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ base_kind ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_10 (int ,char*,int ) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_8, tree VAR_9,
        bool VAR_10,
        bool VAR_11)
{
  tree VAR_12;
  base_kind VAR_13;
  tree VAR_14;


  VAR_14 = VAR_5;
  VAR_12 = FUNC_7 (VAR_9, VAR_8, VAR_11 ? VAR_1 : VAR_0, &VAR_13);
  if (VAR_13 == VAR_3 || VAR_13 == VAR_2)
    FUNC_4 ("   in pointer to member function conversion");
  else if (VAR_12)
    {
      if (VAR_13 != VAR_4)
 VAR_14 = FUNC_0 (VAR_12);
      else
 {
   tree VAR_15 = FUNC_2 (VAR_12);


   if (VAR_10)
     FUNC_10 (0, "pointer to member cast via virtual base %qT",
       FUNC_1 (VAR_15));
   else
     FUNC_4 ("pointer to member conversion via virtual base %qT",
     FUNC_1 (VAR_15));
 }
    }
  else if (FUNC_8 (VAR_8, VAR_9))
                                                           ;
  else if (!VAR_10)
    {
      FUNC_5 (VAR_8, VAR_9);
      FUNC_4 ("   in pointer to member conversion");
    }
  else
    {
      VAR_12 = FUNC_7 (VAR_8, VAR_9, VAR_11 ? VAR_1 : VAR_0, &VAR_13);
      if (VAR_12)
 {
   if (VAR_13 != VAR_4)
     VAR_14 = FUNC_9 (VAR_7, FUNC_0 (VAR_12));
   else
     {

       tree VAR_16 = FUNC_2 (VAR_12);

       FUNC_10 (0, "pointer to member cast via virtual base %qT",
         FUNC_1 (VAR_16));
     }
 }
    }

  return FUNC_6 (FUNC_3 (VAR_6,
            VAR_14));
}
