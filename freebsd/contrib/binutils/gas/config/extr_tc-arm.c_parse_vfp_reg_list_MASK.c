
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reg_list_els { ____Placeholder_reg_list_els } reg_list_els ;
typedef enum arm_reg_type { ____Placeholder_arm_reg_type } arm_reg_type ;
struct TYPE_2__ {void* error; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (char**,int,int*,int *) ;
 int FUNC_5 (void*) ;
 int VAR_6 ;
 int FUNC_6 (void*) ;
 int VAR_7 ;
 void* FUNC_7 (char*) ;
 TYPE_1__ VAR_8 ;
 char** VAR_9 ;
 int FUNC_8 (char**) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_9 (char **VAR_12, unsigned int *VAR_13, enum reg_list_els VAR_14)
{
  char *VAR_15 = *VAR_12;
  int VAR_16;
  int VAR_17;
  enum arm_reg_type VAR_18 = 0;
  int VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21 = 0;
  unsigned long VAR_22 = 0;
  int VAR_23;

  if (*VAR_15 != '{')
    {
      VAR_8.error = FUNC_2("expecting {");
      return VAR_0;
    }

  VAR_15++;

  switch (VAR_14)
    {
    case 128:
      VAR_18 = VAR_4;
      VAR_19 = 32;
      break;

    case 129:
      VAR_18 = VAR_3;
      break;

    case 130:
      VAR_18 = VAR_1;
      break;
    }

  if (VAR_14 != 128)
    {

      if (FUNC_0 (VAR_6, VAR_7))
        {
          VAR_19 = 32;
          if (VAR_11)
            FUNC_1 (VAR_10, VAR_10,
                                    VAR_7);
          else
            FUNC_1 (VAR_5, VAR_5,
                                    VAR_7);
        }
      else
        VAR_19 = 16;
    }

  VAR_16 = VAR_19;

  do
    {
      int VAR_24 = 1, VAR_25 = 1;

      VAR_17 = FUNC_4 (&VAR_15, VAR_18, &VAR_18, ((void*)0));

      if (VAR_17 == VAR_0)
 {
   FUNC_6 (FUNC_2(VAR_9[VAR_18]));
   return VAR_0;
 }

      if (VAR_17 >= VAR_19)
        {
          FUNC_6 (FUNC_2("register out of range in list"));
          return VAR_0;
        }


      if (VAR_18 == VAR_2)
        {
          VAR_24 = 3;
          VAR_25 = 2;
        }

      if (VAR_17 < VAR_16)
 VAR_16 = VAR_17;

      if (VAR_22 & (VAR_24 << VAR_17))
 {
   FUNC_6 (FUNC_2("invalid register list"));
   return VAR_0;
 }

      if ((VAR_22 >> VAR_17) != 0 && ! VAR_21)
 {
   FUNC_5 (FUNC_2("register list not in ascending order"));
   VAR_21 = 1;
 }

      VAR_22 |= VAR_24 << VAR_17;
      VAR_20 += VAR_25;

      if (*VAR_15 == '-')
 {
   int VAR_26;

   VAR_15++;

   if ((VAR_26 = FUNC_4 (&VAR_15, VAR_18, ((void*)0), ((void*)0)))
              == VAR_0)
     {
       VAR_8.error = FUNC_7 (VAR_9[VAR_18]);
       return VAR_0;
     }

          if (VAR_26 >= VAR_19)
            {
              FUNC_6 (FUNC_2("register out of range in list"));
              return VAR_0;
            }

          if (VAR_18 == VAR_2)
            VAR_26 = VAR_26 + 1;

   if (VAR_26 <= VAR_17)
     {
       VAR_8.error = FUNC_2("register range not in ascending order");
       return VAR_0;
     }

   for (VAR_17 += VAR_25; VAR_17 <= VAR_26; VAR_17 += VAR_25)
     {
       if (VAR_22 & (VAR_24 << VAR_17))
  {
    VAR_8.error = FUNC_2("invalid register list");
    return VAR_0;
  }

       VAR_22 |= VAR_24 << VAR_17;
       VAR_20 += VAR_25;
     }
 }
    }
  while (FUNC_8 (&VAR_15) != VAR_0);

  VAR_15++;


  if (VAR_20 == 0 || VAR_20 > VAR_19)
    FUNC_3 ();

  *VAR_13 = VAR_16;


  VAR_22 >>= VAR_16;
  for (VAR_23 = 0; VAR_23 < VAR_20; VAR_23++)
    {
      if ((VAR_22 & (1u << VAR_23)) == 0)
 {
   VAR_8.error = FUNC_2("non-contiguous register range");
   return VAR_0;
 }
    }

  *VAR_12 = VAR_15;

  return VAR_20;
}
