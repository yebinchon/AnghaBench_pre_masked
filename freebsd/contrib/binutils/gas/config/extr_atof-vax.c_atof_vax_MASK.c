
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char sign; int * low; int * high; scalar_t__ exponent; int * leader; } ;
typedef int LITTLENUM_TYPE ;
typedef TYPE_1__ FLONUM_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char,int) ;
 scalar_t__ FUNC_4 (int,int*,long*) ;

__attribute__((used)) static char *
FUNC_5 (char *VAR_2,
   int VAR_3,
   LITTLENUM_TYPE *VAR_4)
{
  FLONUM_TYPE VAR_5;
  LITTLENUM_TYPE VAR_6[VAR_1 + VAR_1 + VAR_0];



  char *VAR_7;
  int VAR_8;
  long VAR_9;

  VAR_7 = VAR_2;
  VAR_5.low = VAR_6 + VAR_1;
  VAR_5.high = ((void*)0);
  VAR_5.leader = ((void*)0);
  VAR_5.exponent = 0;
  VAR_5.sign = '\0';

  if (FUNC_4 (VAR_3, &VAR_8, &VAR_9))
    {
      VAR_7 = ((void*)0);
      FUNC_2 (VAR_4);
    }

  if (VAR_7)
    {
      FUNC_3 (VAR_6, '\0', sizeof (LITTLENUM_TYPE) * VAR_1);




      VAR_5.high = VAR_5.low + VAR_8 - 1 + VAR_0;

      if (FUNC_0 (&VAR_7, ".", "eE", &VAR_5))
 {
   FUNC_2 (VAR_4);
   VAR_7 = ((void*)0);
 }
      else if (FUNC_1 (VAR_3, &VAR_5, VAR_4))
 VAR_7 = ((void*)0);
    }

  return VAR_7;
}
