
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_15 (scalar_t__,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (char*,int ,scalar_t__,...) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_19 (int ,char*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_20 (tree VAR_14, tree VAR_15)
{
  tree VAR_16;
  tree VAR_17 = FUNC_4 (VAR_14);
  bool VAR_18;

  VAR_18 = (VAR_15 != VAR_4);



  if (VAR_13 && !VAR_18 && FUNC_3 (VAR_17) != VAR_0)
    FUNC_19 (VAR_5, "%J%qD should be initialized in the member initialization "
      "list", VAR_9, VAR_14);

  if (VAR_15 == VAR_12)
    VAR_15 = VAR_4;


  VAR_16 = FUNC_10 (VAR_8, VAR_14,
                      VAR_4,
                             1);
  if (VAR_16 == VAR_10)
    return;




  if (FUNC_0 (VAR_17))
    {
      if (VAR_15)
 {
   VAR_15 = FUNC_8 (VAR_1, VAR_17, VAR_16, FUNC_5 (VAR_15));
   FUNC_17 (VAR_15);
 }
    }
  else if (FUNC_7 (VAR_17))
    {
      if (VAR_18
   && FUNC_3 (VAR_17) == VAR_0
   && VAR_15 != VAR_4
   && FUNC_2 (VAR_15) == VAR_4
   && FUNC_3 (FUNC_4 (FUNC_5 (VAR_15))) == VAR_0)
 {

   FUNC_17 (FUNC_14 (VAR_16, VAR_4, FUNC_5 (VAR_15),
                                     0,
                         1));
 }
      else
 FUNC_17 (FUNC_9 (VAR_16, VAR_15, 0));
    }
  else
    {
      if (VAR_15 == VAR_4)
 {
   if (VAR_18)
     {
       VAR_15 = FUNC_11 (VAR_17, VAR_4);
       if (FUNC_3 (VAR_17) == VAR_6)
  FUNC_19 (0, "%Jdefault-initialization of %q#D, "
    "which has reference type",
    VAR_9, VAR_14);
     }

   else if (FUNC_3 (VAR_17) == VAR_6)
     FUNC_18 ("%Juninitialized reference member %qD",
       VAR_9, VAR_14);
   else if (FUNC_1 (VAR_17))
     FUNC_18 ("%Juninitialized member %qD with %<const%> type %qT",
       VAR_9, VAR_14, VAR_17);
 }
      else if (FUNC_3 (VAR_15) == VAR_7)


 VAR_15 = FUNC_15 (VAR_15, "member initializer");

      if (VAR_15)
 FUNC_17 (FUNC_13 (VAR_16, VAR_1, VAR_15));
    }

  if (FUNC_6 (VAR_17))
    {
      tree VAR_19;

      VAR_19 = FUNC_10 (VAR_8, VAR_14,
                          VAR_4,
                                 0);
      VAR_19 = FUNC_12 (VAR_17, VAR_19, VAR_11,
      VAR_3|VAR_2, 0);

      if (VAR_19 != VAR_10)
 FUNC_16 (VAR_19);
    }
}
