
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_mode; } ;
struct stats {TYPE_1__ stat; } ;


 void* FUNC_0 (scalar_t__,int) ;
 int * FUNC_1 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 () ;
 void* VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (int,int ,char*) ;
 scalar_t__ FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 () ;
 int * VAR_19 ;
 int * FUNC_13 (int,char*) ;
 int VAR_20 ;
 int FUNC_14 (int,int ,int ) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_15 (void*) ;

__attribute__((used)) static int
FUNC_16 (int VAR_23, char const *VAR_24, struct stats *VAR_25)
{
  if (! VAR_22)
    {
      VAR_22 = FUNC_12 ();
      if (VAR_22 == 0 || 2 * VAR_22 + 1 <= VAR_22)
 FUNC_9 ();
      VAR_7 = FUNC_0 (VAR_1, VAR_22) + VAR_22 + 1;
      VAR_10 = FUNC_15 (VAR_7);
    }
  if (VAR_0)
    {
    VAR_14 = FUNC_1(VAR_23, "r");
    if (VAR_14 == ((void*)0))
      FUNC_10(2, 0, FUNC_8("memory exhausted"));
    }
  VAR_8 = VAR_11 = FUNC_0 (VAR_10 + 1, VAR_22);
  VAR_8[-1] = VAR_17;
  VAR_9 = VAR_23;

  if (FUNC_11 (VAR_23, &VAR_25->stat) != 0)
    {
      FUNC_10 (0, VAR_18, "fstat");
      return 0;
    }
  if (VAR_23 != VAR_5) {
    if (VAR_16 == VAR_4 && FUNC_4 (VAR_25->stat.st_mode))
      return 0;

    if (VAR_15 == VAR_3 && (FUNC_3(VAR_25->stat.st_mode) || FUNC_2(VAR_25->stat.st_mode) || FUNC_7(VAR_25->stat.st_mode) || FUNC_5(VAR_25->stat.st_mode)))



      return 0;
  }
  if (
      VAR_0 ||



      FUNC_6 (VAR_25->stat.st_mode))
    {
      if (VAR_24)
 VAR_13 = 0;
      else
 {
   VAR_13 = FUNC_14 (VAR_23, 0, VAR_2);
   if (VAR_13 < 0)
     {
       FUNC_10 (0, VAR_18, "lseek");
       return 0;
     }
 }




    }
  else
    {



    }
  return 1;
}
