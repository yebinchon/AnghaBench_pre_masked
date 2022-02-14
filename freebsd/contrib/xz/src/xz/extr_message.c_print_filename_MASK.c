
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__,int,...) ;
 int FUNC_1 (char,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static void
FUNC_4(void)
{
 if (!VAR_7 && (VAR_4 != 1 || VAR_2 != VAR_9)) {
  FUNC_2();

  FILE *VAR_11 = VAR_6 == VAR_0 ? VAR_10 : VAR_8;



  if (VAR_5)
   FUNC_1('\n', VAR_11);

  VAR_5 = 1;
  VAR_1 = 1;



  if (VAR_4 == 0)
   FUNC_0(VAR_11, "%s (%u)\n", VAR_2,
     VAR_3);
  else
   FUNC_0(VAR_11, "%s (%u/%u)\n", VAR_2,
     VAR_3, VAR_4);

  FUNC_3();
 }

 return;
}
