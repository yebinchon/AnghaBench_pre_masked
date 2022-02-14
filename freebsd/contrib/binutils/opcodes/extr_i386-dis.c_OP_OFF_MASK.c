
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 char** VAR_13 ;
 int FUNC_4 (char*) ;
 int VAR_14 ;
 int FUNC_5 (char*,int,int ) ;
 char* VAR_15 ;

__attribute__((used)) static void
FUNC_6 (int VAR_16, int VAR_17)
{
  bfd_vma VAR_18;

  if (VAR_11 && (VAR_17 & VAR_7))
    FUNC_3 (VAR_16, VAR_17);
  FUNC_0 ();

  if ((VAR_17 & VAR_0) || VAR_8 == VAR_12)
    VAR_18 = FUNC_2 ();
  else
    VAR_18 = FUNC_1 ();

  if (VAR_11)
    {
      if (!(VAR_14 & (VAR_1 | VAR_6 | VAR_2
   | VAR_3 | VAR_4 | VAR_5)))
 {
   FUNC_4 (VAR_13[VAR_9 - VAR_10]);
   FUNC_4 (":");
 }
    }
  FUNC_5 (VAR_15, 1, VAR_18);
  FUNC_4 (VAR_15);
}
