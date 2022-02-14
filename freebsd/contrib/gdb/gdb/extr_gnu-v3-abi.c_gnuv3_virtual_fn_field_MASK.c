
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct fn_field {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct fn_field*,int) ;
 int FUNC_2 (struct fn_field*,int) ;
 int FUNC_3 (struct fn_field*,int) ;
 char* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (struct type*) ;
 int FUNC_7 (struct value*) ;
 int FUNC_8 (struct value*) ;
 int VAR_1 ;
 struct type* FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct type*) ;
 struct type* FUNC_12 (int ,int ) ;
 struct type* FUNC_13 (int ) ;
 struct value* FUNC_14 (struct value*) ;
 scalar_t__ FUNC_15 (int ) ;
 struct value* FUNC_16 (struct type*,scalar_t__,int ) ;
 struct value* FUNC_17 (struct type*,struct value*) ;
 int FUNC_18 (struct value*,scalar_t__) ;
 int FUNC_19 (int ,int ) ;
 struct value* FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct value *
FUNC_22 (struct value **VAR_5,
                        struct fn_field *VAR_6, int VAR_7,
   struct type *VAR_8, int VAR_9)
{
  struct type *VAR_10 = FUNC_12 (VAR_2,
        VAR_4);
  struct value *VAR_11 = *VAR_5;
  struct type *VAR_12 = FUNC_9 (FUNC_8 (VAR_11));
  struct type *VAR_13;
  CORE_ADDR VAR_14;
  struct value *VAR_15;
  struct value *VAR_16;


  if (FUNC_0 (VAR_12) != VAR_0)
    FUNC_10 ("Only classes can have virtual functions.");


  VAR_13 = FUNC_1 (VAR_6, VAR_7);
  if (! VAR_13)




    VAR_13 = FUNC_5 (VAR_8);




  if (FUNC_6 (VAR_13) < 0)
    FUNC_11 (VAR_13);
  if (FUNC_6 (VAR_13) < 0)
    FUNC_10 ("Could not find virtual table pointer for class \"%s\".",
    FUNC_4 (VAR_13) ? FUNC_4 (VAR_13) : "<unknown>");




  if (VAR_13 != VAR_12)
    VAR_11 = FUNC_17 (VAR_13, VAR_11);







  if (FUNC_5 (VAR_13) != VAR_13)
    VAR_11 = FUNC_17 (FUNC_5 (VAR_13), VAR_11);
  VAR_14
    = FUNC_15 (FUNC_18 (VAR_11, FUNC_6 (VAR_13)));

  VAR_15 = FUNC_16 (VAR_10,
                          VAR_14 - FUNC_21 (),
                          FUNC_7 (VAR_11));


  VAR_16 = FUNC_20 (FUNC_18 (VAR_15, VAR_3),
                         FUNC_19 (VAR_1,
                                             FUNC_3 (VAR_6, VAR_7)));


  VAR_16 = FUNC_17 (FUNC_13 (FUNC_2 (VAR_6, VAR_7)),
                    VAR_16);



  *VAR_5 = FUNC_14 (FUNC_17 (VAR_8, *VAR_5));

  return VAR_16;
}
