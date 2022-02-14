
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {size_t len; int text; } ;
struct TYPE_6__ {TYPE_1__ str; } ;
struct TYPE_7__ {TYPE_2__ val; } ;
typedef TYPE_3__ cpp_token ;
typedef int REAL_VALUE_TYPE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (char*,int ,size_t) ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,char*,int ) ;

__attribute__((used)) static tree
FUNC_9 (const cpp_token *VAR_17, unsigned int VAR_18)
{
  tree VAR_19;
  tree VAR_20;
  REAL_VALUE_TYPE VAR_21;
  char *VAR_22;
  size_t VAR_23;


  if (VAR_18 & VAR_0)
    {
      VAR_18 ^= VAR_0;
      VAR_18 |= VAR_4;
    }


  if (VAR_18 & VAR_1)
    if ((VAR_18 & VAR_6) == VAR_3)
      VAR_19 = VAR_8;
    else if ((VAR_18 & VAR_6) == VAR_5)
      VAR_19 = VAR_9;
    else
      VAR_19 = VAR_10;
  else
    if ((VAR_18 & VAR_6) == VAR_3)
      VAR_19 = VAR_15;
    else if ((VAR_18 & VAR_6) == VAR_5
      || VAR_12)
      VAR_19 = VAR_13;
    else
      VAR_19 = VAR_11;




  VAR_23 = VAR_17->val.str.len;
  if (VAR_18 & VAR_1)
    VAR_23 -= 2;
  else
    {
      if ((VAR_18 & VAR_6) != VAR_4)

 VAR_23--;
      if (VAR_18 & VAR_2)

 VAR_23--;
    }

  VAR_22 = (char *) FUNC_2 (VAR_23 + 1);
  FUNC_6 (VAR_22, VAR_17->val.str.text, VAR_23);
  VAR_22[VAR_23] = '\0';

  FUNC_8 (&VAR_21, VAR_22, FUNC_1 (VAR_19));






  if (FUNC_0 (VAR_21) && VAR_16)
    FUNC_7 ("floating constant exceeds range of %qT", VAR_19);


  VAR_20 = FUNC_4 (VAR_19, VAR_21);
  if (VAR_18 & VAR_2)
    VAR_20 = FUNC_3 (VAR_7, FUNC_5 (VAR_19, VAR_14), VAR_20);

  return VAR_20;
}
