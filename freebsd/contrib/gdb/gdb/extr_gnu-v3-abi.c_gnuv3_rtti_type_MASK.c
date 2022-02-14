
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct minimal_symbol {int dummy; } ;
typedef int LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 char* FUNC_0 (struct minimal_symbol*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct type*) ;
 char const* FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct value*) ;
 int FUNC_7 (struct value*) ;
 int FUNC_8 (struct value*) ;
 struct type* FUNC_9 (struct value*) ;
 int FUNC_10 (struct value*) ;
 int FUNC_11 (struct value*) ;
 struct type* FUNC_12 (int ) ;
 struct type* FUNC_13 (char const*,int *) ;
 int VAR_1 ;
 int FUNC_14 (struct type*) ;
 struct type* FUNC_15 (int ,int ) ;
 struct minimal_symbol* FUNC_16 (int) ;
 scalar_t__ FUNC_17 (char const*,char*,int) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct value* FUNC_20 (struct type*,scalar_t__,int ) ;
 struct value* FUNC_21 (struct type*,struct value*) ;
 int FUNC_22 (struct value*,int) ;
 scalar_t__ FUNC_23 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_24 (char*,char const*) ;

__attribute__((used)) static struct type *
FUNC_25 (struct value *VAR_4,
                 int *VAR_5, int *VAR_6, int *VAR_7)
{
  struct type *VAR_8 = FUNC_15 (VAR_1,
        VAR_3);
  struct type *VAR_9 = FUNC_12 (FUNC_11 (VAR_4));
  CORE_ADDR VAR_10;
  struct value *VAR_11;
  struct minimal_symbol *VAR_12;
  const char *VAR_13;
  const char *VAR_14;
  struct type *VAR_15;
  struct type *VAR_16;
  LONGEST VAR_17;


  if (FUNC_1 (VAR_9) != VAR_0)
    return ((void*)0);



  FUNC_14 (VAR_9);
  if (FUNC_5 (VAR_9) == -1)
    return ((void*)0);

  if (VAR_7)
    *VAR_7 = 0;



  VAR_16 = FUNC_12 (FUNC_4 (VAR_9));
  if (VAR_9 != VAR_16)
    {
      VAR_4 = FUNC_21 (VAR_16, VAR_4);
      if (VAR_7)
 *VAR_7 = 1;
    }
  VAR_10
    = FUNC_18 (FUNC_22 (VAR_4, FUNC_5 (VAR_9)));
  VAR_11 = FUNC_20 (VAR_8,
                          VAR_10 - FUNC_23 (),
                          FUNC_7 (VAR_4));


  VAR_12
    = FUNC_16 (FUNC_6 (VAR_11)
                                   + FUNC_10 (VAR_11)
                                   + FUNC_8 (VAR_11));
  if (! VAR_12)
    return ((void*)0);






  VAR_13 = FUNC_0 (VAR_12);
  if (VAR_13 == ((void*)0)
      || FUNC_17 (VAR_13, "vtable for ", 11))
    {
      FUNC_24 ("can't find linker symbol for virtual table for `%s' value",
        FUNC_3 (VAR_9));
      if (VAR_13)
 FUNC_24 ("  found `%s' instead", VAR_13);
      return ((void*)0);
    }
  VAR_14 = VAR_13 + 11;



  VAR_15 = FUNC_13 (VAR_14, ((void*)0));
  if (VAR_15 == ((void*)0))
    return ((void*)0);



  VAR_17
    = FUNC_19 (FUNC_22 (VAR_11, VAR_2));

  if (VAR_5)
    *VAR_5 = (- VAR_17 == FUNC_8 (VAR_4)
               && (FUNC_2 (FUNC_9 (VAR_4))
                   >= FUNC_2 (VAR_15)));
  if (VAR_6)
    *VAR_6 = - VAR_17;

  return VAR_15;
}
