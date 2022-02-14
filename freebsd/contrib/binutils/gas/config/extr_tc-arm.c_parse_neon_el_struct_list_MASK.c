
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neon_type_el {int dummy; } ;
struct neon_typed_alias {int defined; int index; struct neon_type_el eltype; } ;
typedef enum arm_reg_type { ____Placeholder_arm_reg_type } arm_reg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const* const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct neon_typed_alias*,struct neon_typed_alias*) ;
 int FUNC_3 (char**,int,int*,struct neon_typed_alias*) ;
 char** VAR_6 ;
 int FUNC_4 (char**,char) ;
 int FUNC_5 (char**) ;

__attribute__((used)) static int
FUNC_6 (char **VAR_7, unsigned *VAR_8,
                           struct neon_type_el *VAR_9)
{
  char *VAR_10 = *VAR_7;
  int VAR_11 = -1;
  int VAR_12 = -1;
  int VAR_13 = 0;
  int VAR_14 = -1;
  int VAR_15 = 0;
  enum arm_reg_type VAR_16 = VAR_3;
  int VAR_17 = 1;
  const char *const VAR_18 = "register stride must be 1 or 2";
  const char *const VAR_19 = "mismatched element/structure types in list";
  struct neon_typed_alias VAR_20;

  if (FUNC_4 (&VAR_10, '{') == VAR_5)
    VAR_15 = 1;

  do
    {
      struct neon_typed_alias VAR_21;
      int VAR_22 = FUNC_3 (&VAR_10, VAR_16, &VAR_16, &VAR_21);

      if (VAR_22 == VAR_0)
        {
          FUNC_1 (FUNC_0(VAR_6[VAR_16]));
          return VAR_0;
        }

      if (VAR_11 == -1)
        {
          VAR_11 = VAR_22;
          if (VAR_16 == VAR_4)
            {
              VAR_12 = 1;
              VAR_17 = 2;
            }
          VAR_20 = VAR_21;
        }
      else if (VAR_12 == -1)
        {
          VAR_12 = VAR_22 - VAR_11;
          if (VAR_12 < 1 || VAR_12 > 2)
            {
              FUNC_1 (FUNC_0(VAR_18));
              return VAR_0;
            }
        }
      else if (VAR_22 != VAR_11 + VAR_12 * VAR_13)
        {
          FUNC_1 (FUNC_0(VAR_18));
          return VAR_0;
        }

      if (!FUNC_2 (&VAR_21, &VAR_20))
        {
          FUNC_1 (FUNC_0(VAR_19));
          return VAR_0;
        }



      if (VAR_10[0] == '-')
        {
          struct neon_typed_alias VAR_23;
          int VAR_24, VAR_25 = (VAR_16 == VAR_4) ? 2 : 1;
          if (VAR_14 == -1)
            VAR_14 = VAR_1;
          else if (VAR_14 != VAR_1)
            {
              FUNC_1 (FUNC_0(VAR_19));
              return VAR_0;
            }
          if (VAR_12 == -1)
            VAR_12 = 1;
          else if (VAR_12 != 1)
            {
              FUNC_1 (FUNC_0("don't use Rn-Rm syntax with non-unit stride"));
              return VAR_0;
            }
          VAR_10++;
          VAR_24 = FUNC_3 (&VAR_10, VAR_16, ((void*)0), &VAR_23);
          if (VAR_24 == VAR_0)
            {
              FUNC_1 (FUNC_0(VAR_6[VAR_16]));
              return VAR_0;
            }
          if (!FUNC_2 (&VAR_23, &VAR_20))
            {
              FUNC_1 (FUNC_0(VAR_19));
              return VAR_0;
            }
          VAR_13 += VAR_24 + VAR_25 - VAR_22;
          continue;
        }


      if (VAR_16 == VAR_4)
        {
          VAR_13 += 2;
          continue;
        }

      if ((VAR_21.defined & VAR_2) != 0)
        {
          if (VAR_14 == -1)
            VAR_14 = VAR_21.index;
          else if (VAR_14 != VAR_21.index)
            {
              FUNC_1 (FUNC_0(VAR_19));
              return VAR_0;
            }
        }
      else if (VAR_14 == -1)
        VAR_14 = VAR_1;
      else if (VAR_14 != VAR_1)
        {
          FUNC_1 (FUNC_0(VAR_19));
          return VAR_0;
        }
      VAR_13++;
    }
  while ((VAR_13 != 1 || VAR_15) && FUNC_5 (&VAR_10) != VAR_0);


  if (VAR_14 == -1)
    VAR_14 = VAR_1;


  if (VAR_14 == -1 || VAR_11 == -1 || VAR_13 < 1 || VAR_13 > 4
      || (VAR_13 > 1 && VAR_12 == -1))
    {
      FUNC_1 (FUNC_0("error parsing element/structure list"));
      return VAR_0;
    }

  if ((VAR_13 > 1 || VAR_15) && FUNC_4 (&VAR_10, '}') == VAR_0)
    {
      FUNC_1 (FUNC_0("expected }"));
      return VAR_0;
    }

  if (VAR_12 == -1)
    VAR_12 = 1;

  if (VAR_9)
    *VAR_9 = VAR_20.eltype;

  *VAR_8 = VAR_11;
  *VAR_7 = VAR_10;

  return VAR_14 | ((VAR_12 - 1) << 4) | ((VAR_13 - 1) << 5);
}
