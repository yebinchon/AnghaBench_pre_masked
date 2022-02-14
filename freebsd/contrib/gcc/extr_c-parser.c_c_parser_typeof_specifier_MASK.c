
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_typespec {int spec; int kind; } ;
struct c_type_name {int dummy; } ;
struct c_expr {int value; } ;
typedef int c_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 struct c_expr FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,char*) ;
 int FUNC_15 (int *,int ,char*) ;
 struct c_type_name* FUNC_16 (int *) ;
 int VAR_6 ;
 int FUNC_17 (char*) ;
 int VAR_7 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct c_type_name*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_20 (int) ;
 int VAR_10 ;
 int FUNC_21 (int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static struct c_typespec
FUNC_22 (c_parser *VAR_12)
{
  struct c_typespec VAR_13;
  VAR_13.kind = VAR_6;
  VAR_13.spec = VAR_7;
  FUNC_18 (FUNC_12 (VAR_12, VAR_5));
  FUNC_10 (VAR_12);
  VAR_10++;
  VAR_8++;
  if (!FUNC_14 (VAR_12, VAR_2, "expected %<(%>"))
    {
      VAR_10--;
      VAR_8--;
      return VAR_13;
    }
  if (FUNC_13 (VAR_12))
    {
      struct c_type_name *VAR_14 = FUNC_16 (VAR_12);
      VAR_10--;
      VAR_8--;
      if (VAR_14 != ((void*)0))
 {
   VAR_13.spec = FUNC_19 (VAR_14);
   FUNC_20 (FUNC_21 (VAR_13.spec, VAR_4));
 }
    }
  else
    {
      bool VAR_15;
      struct c_expr VAR_16 = FUNC_11 (VAR_12);
      VAR_10--;
      VAR_8--;
      if (FUNC_5 (VAR_16.value) == VAR_0
   && FUNC_1 (FUNC_6 (VAR_16.value, 1)))
 FUNC_17 ("%<typeof%> applied to a bit-field");
      VAR_13.spec = FUNC_7 (VAR_16.value);
      VAR_15 = FUNC_21 (VAR_13.spec, VAR_4);



      if (!VAR_10 && VAR_15)
 {
   tree VAR_17 = VAR_16.value;



   if (FUNC_2 (VAR_17) || FUNC_0 (VAR_17))
     VAR_17 = FUNC_9 (VAR_3, VAR_11, VAR_17);

   if (FUNC_3 (VAR_17))
     FUNC_4 (VAR_17, VAR_9);

   FUNC_8 (VAR_17);
 }
      FUNC_20 (VAR_15);
    }
  FUNC_15 (VAR_12, VAR_1, "expected %<)%>");
  return VAR_13;
}
