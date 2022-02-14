
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 char* FUNC_1 (struct minimal_symbol*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct type*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct type*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 struct type* FUNC_6 (struct type*) ;
 scalar_t__ FUNC_7 (struct type*) ;
 scalar_t__ FUNC_8 (int ) ;
 struct type* FUNC_9 (struct value*) ;
 struct type* FUNC_10 (char*,int *) ;
 char* FUNC_11 (char*,int) ;
 int FUNC_12 (struct type*) ;
 int FUNC_13 (char*) ;
 struct minimal_symbol* FUNC_14 (int ) ;
 scalar_t__* FUNC_15 (char*,char) ;
 int FUNC_16 (int ) ;
 struct value* FUNC_17 (struct type*,struct value*) ;
 int FUNC_18 (struct value*,scalar_t__) ;

__attribute__((used)) static struct type *
FUNC_19 (struct value *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
  struct type *VAR_7;
  struct type *VAR_8;
  CORE_ADDR VAR_9;
  struct value *VAR_10;
  long VAR_11 = 0;
  char VAR_12[256];
  CORE_ADDR VAR_13;
  struct minimal_symbol *VAR_14;
  struct symbol *VAR_15;
  char *VAR_16;
  struct type *VAR_17;

  if (VAR_4)
    *VAR_4 = 0;
  if (VAR_5)
    *VAR_5 = -1;
  if (VAR_6)
    *VAR_6 = 0;


  VAR_7 = FUNC_9 (VAR_3);
  FUNC_0 (VAR_7);

  if (FUNC_3 (VAR_7) != VAR_2)
    return ((void*)0);







  if (FUNC_7(VAR_7) < 0)
    FUNC_12(VAR_7);


  if (FUNC_7(VAR_7) < 0)
    return ((void*)0);




  VAR_17 = FUNC_6 (VAR_7);
  FUNC_0 (VAR_17);
  if (VAR_17 != VAR_7 )
    {
      VAR_3 = FUNC_17 (VAR_17, VAR_3);
      if (VAR_6)
        *VAR_6=1;
    }





  if (FUNC_8 (FUNC_18 (VAR_3, FUNC_7 (VAR_7))) == 0)
    return ((void*)0);

  VAR_13=FUNC_16(FUNC_18(VAR_3,FUNC_7(VAR_7)));


  VAR_14=FUNC_14(VAR_13);
  if (VAR_14==((void*)0)
      || (VAR_16=FUNC_1 (VAR_14))==((void*)0)
      || !FUNC_13 (VAR_16))
    return ((void*)0);


  VAR_16=FUNC_11(VAR_16,VAR_1|VAR_0);
  *(FUNC_15(VAR_16,' '))=0;



  VAR_8 = FUNC_10 (VAR_16, ((void*)0));
  if (VAR_8 == ((void*)0))
    return ((void*)0);

  if (FUNC_5(VAR_8) > 1 && VAR_4 && (*VAR_4) != 1)
    {
      if (VAR_5)
        *VAR_5=FUNC_2(VAR_8,FUNC_7(VAR_8))/8;
      if (VAR_5 && ((*VAR_5) >0))
        {
          if (FUNC_4(VAR_8) > FUNC_4(VAR_7))
            {
              if (VAR_4)
                *VAR_4=0;
            }
          else
            {
              if (VAR_4)
                *VAR_4=1;
            }
        }
    }
  else
    {
      if (VAR_4)
        *VAR_4=1;
    }

  return VAR_8;
}
