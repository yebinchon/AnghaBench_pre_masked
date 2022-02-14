
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int subsegT ;
typedef int segT ;
struct TYPE_4__ {scalar_t__ X_op; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 TYPE_3__* VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 void* VAR_14 ;
 TYPE_2__* VAR_15 ;
 void** VAR_16 ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int *,int *) ;
 int VAR_17 ;
 char* FUNC_7 (void*,char const*,void*) ;
 void* FUNC_8 () ;
 int FUNC_9 (char*,char const*,int) ;
 int VAR_18 ;
 int FUNC_10 (char*,char*,unsigned int) ;
 int VAR_19 ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (char const*,char const*) ;
 int FUNC_13 (char*,char const*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int ,int ) ;
 void* FUNC_17 (char*,int ,int,int *) ;
 int VAR_20 ;
 char* FUNC_18 (int ) ;
 int VAR_21 ;

void
FUNC_19 (void)
{
  unsigned int VAR_22;


  {
    expressionS VAR_23;

    VAR_23.X_op = VAR_1;
    FUNC_2 (VAR_23.X_op == VAR_1);
  }


  VAR_14 = FUNC_8 ();

  for (VAR_22 = 0; VAR_22 < VAR_13;)
    {
      const char *VAR_24, *VAR_25, *VAR_26;

      VAR_24 = VAR_15[VAR_22].name;
      VAR_25 = FUNC_7 (VAR_14, VAR_24, (void *) &VAR_15[VAR_22]);
      if (VAR_25)
 FUNC_1 (FUNC_0("internal error: can't hash opcode `%s': %s"),
    VAR_24, VAR_25);






      if ((VAR_26 = FUNC_11 (VAR_24, '/')) != ((void*)0))
 {
   char *VAR_27 = FUNC_18 (FUNC_14 (VAR_24));

   FUNC_9 (VAR_27, VAR_24, VAR_26 - VAR_24);
   FUNC_13 (VAR_27 + (VAR_26 - VAR_24), VAR_26 + 1);

   (void) FUNC_7 (VAR_14, VAR_27, (void *) &VAR_15[VAR_22]);


 }

      while (++VAR_22 < VAR_13
      && (VAR_15[VAR_22].name == VAR_24
   || !FUNC_12 (VAR_15[VAR_22].name, VAR_24)))
 continue;
    }


  VAR_10 = FUNC_8 ();

  for (VAR_22 = 0; VAR_22 < VAR_12;)
    {
      const char *VAR_28, *VAR_29;

      VAR_28 = VAR_11[VAR_22].name;
      VAR_29 = FUNC_7 (VAR_10, VAR_28, (void *) &VAR_11[VAR_22]);
      if (VAR_29)
 FUNC_1 (FUNC_0("internal error: can't hash macro `%s': %s"),
    VAR_28, VAR_29);

      while (++VAR_22 < VAR_12
      && (VAR_11[VAR_22].name == VAR_28
   || !FUNC_12 (VAR_11[VAR_22].name, VAR_28)))
 continue;
    }


  for (VAR_22 = 0; VAR_22 < 32; ++VAR_22)
    {
      char VAR_30[4];

      FUNC_10 (VAR_30, "$%d", VAR_22);
      VAR_16[VAR_22] = FUNC_17 (VAR_30, VAR_18, VAR_22,
            &VAR_21);
    }

  for (; VAR_22 < 64; ++VAR_22)
    {
      char VAR_31[5];

      FUNC_10 (VAR_31, "$f%d", VAR_22 - 32);
      VAR_16[VAR_22] = FUNC_17 (VAR_31, VAR_18, VAR_22,
            &VAR_21);
    }




  FUNC_3 (VAR_19, VAR_17);
  VAR_9 = FUNC_8 ();

  FUNC_16 (VAR_20, 0);
}
