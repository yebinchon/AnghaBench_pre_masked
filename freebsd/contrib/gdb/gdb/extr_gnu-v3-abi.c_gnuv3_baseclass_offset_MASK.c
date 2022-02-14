
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*,scalar_t__) ;
 long FUNC_3 (struct type*) ;
 char* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (struct type*) ;
 int VAR_0 ;
 struct type* VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct type*) ;
 struct type* FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct value*) ;
 long FUNC_11 (int ) ;
 struct value* FUNC_12 (struct type*,scalar_t__,int *) ;
 struct value* FUNC_13 (struct value*,int ) ;
 struct value* FUNC_14 (int ,long) ;
 int FUNC_15 (struct value*,struct value*) ;
 long FUNC_16 () ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_17 (struct type *VAR_5, int VAR_6, char *VAR_7,
   CORE_ADDR VAR_8)
{
  struct type *VAR_9 = FUNC_9 (VAR_2,
        VAR_4);
  struct value *VAR_10;
  struct type *VAR_11;
  struct value *VAR_12, *VAR_13;
  CORE_ADDR VAR_14;
  long int VAR_15, VAR_16;



  if (!FUNC_0 (VAR_5, VAR_6))
    return FUNC_1 (VAR_5, VAR_6) / 8;






  VAR_15 = FUNC_1 (VAR_5, VAR_6) / 8;
  if (VAR_15 >= - FUNC_16 ())
    FUNC_7 ("Expected a negative vbase offset (old compiler?)");

  VAR_15 = VAR_15 + FUNC_16 ();
  if ((- VAR_15) % FUNC_3 (VAR_1) != 0)
    FUNC_7 ("Misaligned vbase offset.");
  VAR_15 = VAR_15
    / ((int) FUNC_3 (VAR_1));
  VAR_11 = FUNC_5 (VAR_5);
  if (FUNC_6 (VAR_11) < 0)
    FUNC_8 (VAR_11);

  if (FUNC_6 (VAR_11) >= 0
      && FUNC_2 (VAR_11, FUNC_6 (VAR_11)) != 0)
    FUNC_7 ("Illegal vptr offset in class %s",
    FUNC_4 (VAR_11) ? FUNC_4 (VAR_11) : "<unknown>");

  VAR_14 = FUNC_10 (FUNC_12 (VAR_1,
          VAR_8, ((void*)0)));
  VAR_10 = FUNC_12 (VAR_9,
                          VAR_14 - FUNC_16 (),
                          ((void*)0));
  VAR_12 = FUNC_14(VAR_0, VAR_15);
  VAR_13 = FUNC_13 (VAR_10, VAR_3);
  VAR_16 = FUNC_11 (FUNC_15 (VAR_13, VAR_12));
  return VAR_16;
}
