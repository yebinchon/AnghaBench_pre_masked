
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
struct lookup_field_info {char* type; char* name; int want_type; char* rval; char* rval_binfo; char* errstr; char* ambiguous; } ;
typedef int lfi ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*,char*,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int *,int *,struct lookup_field_info*) ;
 int FUNC_10 (char const*,char*,char*) ;
 char* VAR_4 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (char*) ;
 int VAR_5 ;
 int FUNC_13 (struct lookup_field_info*,int ,int) ;
 int VAR_6 ;
 int FUNC_14 (char*,char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;

tree
FUNC_17 (tree VAR_7, tree VAR_8, int VAR_9, bool VAR_10)
{
  tree VAR_11, VAR_12 = VAR_2;
  tree VAR_13 = VAR_2, VAR_14 = VAR_2;
  struct lookup_field_info VAR_15;
  const char *VAR_16 = 0;

  FUNC_11 (FUNC_4 (VAR_8) == VAR_1);

  if (FUNC_4 (VAR_7) == VAR_3)
    {
      VAR_13 = FUNC_0 (VAR_7);
      VAR_14 = VAR_7;
    }
  else
    {
      if (!FUNC_3 (FUNC_4 (VAR_7)))
 return VAR_2;
      VAR_13 = VAR_7;
      VAR_7 = VAR_2;
    }

  VAR_13 = FUNC_8 (VAR_13);
  if (!VAR_14)
    VAR_14 = FUNC_6 (VAR_13);

  if (!VAR_14)
    return VAR_2;





  FUNC_13 (&VAR_15, 0, sizeof (VAR_15));
  VAR_15.type = VAR_13;
  VAR_15.name = VAR_8;
  VAR_15.want_type = VAR_10;
  FUNC_9 (VAR_14, &VAR_5, ((void*)0), &VAR_15);
  VAR_11 = VAR_15.rval;
  VAR_12 = VAR_15.rval_binfo;
  if (VAR_12)
    VAR_13 = FUNC_0 (VAR_12);
  VAR_16 = VAR_15.errstr;



  if (!VAR_9 && VAR_15.ambiguous)
    return VAR_2;

  if (VAR_9 == 2)
    {
      if (VAR_15.ambiguous)
 return VAR_15.ambiguous;
      else
 VAR_9 = 0;
    }
  if (VAR_11 && VAR_9
      && !FUNC_16 (VAR_11)
      && !(FUNC_4 (VAR_11) == VAR_0
    && FUNC_1 (VAR_11)))
    FUNC_14 (VAR_14, VAR_11, VAR_11);

  if (VAR_16 && VAR_9)
    {
      FUNC_10 (VAR_16, VAR_8, VAR_13);
      if (VAR_15.ambiguous)
 FUNC_15 (VAR_15.ambiguous);
      VAR_11 = VAR_4;
    }

  if (VAR_11 && FUNC_12 (VAR_11))
    VAR_11 = FUNC_7 (VAR_12, VAR_14, VAR_11,
      (FUNC_2 (VAR_8)
      ? FUNC_5 (VAR_8): VAR_2));
  return VAR_11;
}
