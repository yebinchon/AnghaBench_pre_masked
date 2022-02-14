
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct lookup_base_data_s {scalar_t__ binfo; int ambiguous; int via_virtual; int want_any; int repeated_base; scalar_t__ base; scalar_t__ t; } ;
typedef int base_kind ;
typedef scalar_t__ base_access ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_9 ;
 int FUNC_8 (scalar_t__,int ,int *,struct lookup_base_data_s*) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int ) ;

tree
FUNC_11 (tree VAR_11, tree VAR_12, base_access VAR_13, base_kind *VAR_14)
{
  tree VAR_15;
  tree VAR_16;
  base_kind VAR_17;

  if (VAR_11 == VAR_10 || VAR_12 == VAR_10)
    {
      if (VAR_14)
 *VAR_14 = 128;
      return VAR_10;
    }
  FUNC_10 (FUNC_5 (VAR_12));

  if (!FUNC_5 (VAR_11))
    {
      VAR_16 = VAR_11;
      VAR_11 = FUNC_0 (VAR_11);
    }
  else
    {
      VAR_11 = FUNC_7 (FUNC_4 (VAR_11));
      VAR_16 = FUNC_3 (VAR_11);
    }

  VAR_12 = FUNC_7 (FUNC_4 (VAR_12));

  if (VAR_16)
    {
      struct lookup_base_data_s VAR_18;

      VAR_18.t = VAR_11;
      VAR_18.base = VAR_12;
      VAR_18.binfo = VAR_0;
      VAR_18.ambiguous = VAR_18.via_virtual = 0;
      VAR_18.repeated_base = FUNC_1 (VAR_11);
      VAR_18.want_any = VAR_13 == VAR_1;

      FUNC_8 (VAR_16, VAR_9, ((void*)0), &VAR_18);
      VAR_15 = VAR_18.binfo;

      if (!VAR_15)
 VAR_17 = VAR_18.ambiguous ? 129 : 128;
      else if (VAR_15 == VAR_16)
 VAR_17 = VAR_7;
      else if (VAR_18.via_virtual)
 VAR_17 = VAR_8;
      else
 VAR_17 = VAR_6;
    }
  else
    {
      VAR_15 = VAR_0;
      VAR_17 = 128;
    }


  if (VAR_13 != VAR_1)
    switch (VAR_17)
      {
      case 128:
 break;

      case 129:
 if (!(VAR_13 & VAR_4))
   {
     FUNC_9 ("%qT is an ambiguous base of %qT", VAR_12, VAR_11);
     VAR_15 = VAR_10;
   }
 break;

      default:
 if ((VAR_13 & VAR_2)






     && FUNC_2 (VAR_12)
     && !FUNC_6 (VAR_11, VAR_12, !(VAR_13 & VAR_3)))
   {
     if (!(VAR_13 & VAR_4))
       {
  FUNC_9 ("%qT is an inaccessible base of %qT", VAR_12, VAR_11);
  VAR_15 = VAR_10;
       }
     else
       VAR_15 = VAR_0;
     VAR_17 = VAR_5;
   }
 break;
      }

  if (VAR_14)
    *VAR_14 = VAR_17;

  return VAR_15;
}
