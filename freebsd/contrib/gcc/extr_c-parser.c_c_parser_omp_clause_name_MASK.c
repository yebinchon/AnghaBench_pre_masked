
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pragma_omp_clause ;
typedef int c_parser ;
struct TYPE_2__ {int value; } ;


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
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static pragma_omp_clause
FUNC_6 (c_parser *VAR_17)
{
  pragma_omp_clause VAR_18 = VAR_7;

  if (FUNC_3 (VAR_17, VAR_16))
    VAR_18 = VAR_5;
  else if (FUNC_3 (VAR_17, VAR_15))
    VAR_18 = VAR_3;
  else if (FUNC_2 (VAR_17, VAR_0))
    {
      const char *VAR_19 = FUNC_0 (FUNC_4 (VAR_17)->value);

      switch (VAR_19[0])
 {
 case 'c':
   if (!FUNC_5 ("copyin", VAR_19))
     VAR_18 = VAR_1;
          else if (!FUNC_5 ("copyprivate", VAR_19))
     VAR_18 = VAR_2;
   break;
 case 'f':
   if (!FUNC_5 ("firstprivate", VAR_19))
     VAR_18 = VAR_4;
   break;
 case 'l':
   if (!FUNC_5 ("lastprivate", VAR_19))
     VAR_18 = VAR_6;
   break;
 case 'n':
   if (!FUNC_5 ("nowait", VAR_19))
     VAR_18 = VAR_8;
   else if (!FUNC_5 ("num_threads", VAR_19))
     VAR_18 = VAR_9;
   break;
 case 'o':
   if (!FUNC_5 ("ordered", VAR_19))
     VAR_18 = VAR_10;
   break;
 case 'p':
   if (!FUNC_5 ("private", VAR_19))
     VAR_18 = VAR_11;
   break;
 case 'r':
   if (!FUNC_5 ("reduction", VAR_19))
     VAR_18 = VAR_12;
   break;
 case 's':
   if (!FUNC_5 ("schedule", VAR_19))
     VAR_18 = VAR_13;
   else if (!FUNC_5 ("shared", VAR_19))
     VAR_18 = VAR_14;
   break;
 }
    }

  if (VAR_18 != VAR_7)
    FUNC_1 (VAR_17);

  return VAR_18;
}
