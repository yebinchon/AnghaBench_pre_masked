
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef enum integer_type_kind { ____Placeholder_integer_type_kind } integer_type_kind ;
typedef int cpp_token ;
struct TYPE_7__ {int precision; } ;
typedef TYPE_1__ cpp_options ;
struct TYPE_8__ {int high; int low; } ;
typedef TYPE_2__ cpp_num ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 TYPE_2__ FUNC_5 (int ,int const*,unsigned int) ;
 TYPE_2__ FUNC_6 (TYPE_2__,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,int ,unsigned int) ;
 int FUNC_8 (int ,int ,unsigned int) ;
 int VAR_14 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static tree
FUNC_11 (const cpp_token *VAR_17, unsigned int VAR_18)
{
  tree VAR_19, VAR_20;
  enum integer_type_kind VAR_21;
  cpp_num VAR_22;
  cpp_options *VAR_23 = FUNC_4 (VAR_14);

  VAR_22 = FUNC_5 (VAR_14, VAR_17, VAR_18);
  VAR_22 = FUNC_6 (VAR_22, VAR_23->precision);


  if (VAR_18 & VAR_4)
    VAR_21 = FUNC_8 (VAR_22.low, VAR_22.high, VAR_18);
  else
    {



      enum integer_type_kind VAR_24
 = FUNC_8 (VAR_22.low, VAR_22.high, VAR_18);
      enum integer_type_kind VAR_25
 = FUNC_7 (VAR_22.low, VAR_22.high, VAR_18);





      if ((VAR_18 & VAR_3) != VAR_0)
 VAR_21 = FUNC_0 (VAR_24, VAR_25);
      else
 {






   VAR_21 = VAR_25;
   if (VAR_25 > VAR_24 && VAR_25 > VAR_11)
     {
       if (!VAR_8)
  {
    if (VAR_24 < VAR_13)
      VAR_24 = VAR_13;
    VAR_21 = VAR_24;
    FUNC_10 (0, "this decimal constant is unsigned only in ISO C90");
  }
       else
  FUNC_10 (VAR_7,
    "this decimal constant would be unsigned in ISO C90");
     }
 }
    }

  if (VAR_21 == VAR_12)

    VAR_20 = ((VAR_18 & VAR_4)
     ? VAR_16
     : VAR_15);
  else
    VAR_20 = VAR_10[VAR_21];

  if (VAR_21 > VAR_13
      && (VAR_18 & VAR_5) != VAR_2
      && !VAR_9 && !VAR_8)
    FUNC_9 ("integer constant is too large for %qs type",
      (VAR_18 & VAR_4) ? "unsigned long" : "long");

  VAR_19 = FUNC_3 (VAR_20, VAR_22.low, VAR_22.high);


  if (VAR_18 & VAR_1)
    VAR_19 = FUNC_1 (VAR_6, FUNC_2 (VAR_20, 0), VAR_19);

  return VAR_19;
}
