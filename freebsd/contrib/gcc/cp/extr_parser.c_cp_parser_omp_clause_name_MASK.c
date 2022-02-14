
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ pragma_omp_clause ;
struct TYPE_6__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_5__ {int value; } ;
struct TYPE_7__ {TYPE_1__ u; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static pragma_omp_clause
FUNC_6 (cp_parser *VAR_18)
{
  pragma_omp_clause VAR_19 = VAR_7;

  if (FUNC_3 (VAR_18->lexer, VAR_16))
    VAR_19 = VAR_5;
  else if (FUNC_3 (VAR_18->lexer, VAR_15))
    VAR_19 = VAR_3;
  else if (FUNC_3 (VAR_18->lexer, VAR_17))
    VAR_19 = VAR_11;
  else if (FUNC_2 (VAR_18->lexer, VAR_0))
    {
      tree VAR_20 = FUNC_4 (VAR_18->lexer)->u.value;
      const char *VAR_21 = FUNC_0 (VAR_20);

      switch (VAR_21[0])
 {
 case 'c':
   if (!FUNC_5 ("copyin", VAR_21))
     VAR_19 = VAR_1;
   else if (!FUNC_5 ("copyprivate", VAR_21))
     VAR_19 = VAR_2;
   break;
 case 'f':
   if (!FUNC_5 ("firstprivate", VAR_21))
     VAR_19 = VAR_4;
   break;
 case 'l':
   if (!FUNC_5 ("lastprivate", VAR_21))
     VAR_19 = VAR_6;
   break;
 case 'n':
   if (!FUNC_5 ("nowait", VAR_21))
     VAR_19 = VAR_8;
   else if (!FUNC_5 ("num_threads", VAR_21))
     VAR_19 = VAR_9;
   break;
 case 'o':
   if (!FUNC_5 ("ordered", VAR_21))
     VAR_19 = VAR_10;
   break;
 case 'r':
   if (!FUNC_5 ("reduction", VAR_21))
     VAR_19 = VAR_12;
   break;
 case 's':
   if (!FUNC_5 ("schedule", VAR_21))
     VAR_19 = VAR_13;
   else if (!FUNC_5 ("shared", VAR_21))
     VAR_19 = VAR_14;
   break;
 }
    }

  if (VAR_19 != VAR_7)
    FUNC_1 (VAR_18->lexer);

  return VAR_19;
}
