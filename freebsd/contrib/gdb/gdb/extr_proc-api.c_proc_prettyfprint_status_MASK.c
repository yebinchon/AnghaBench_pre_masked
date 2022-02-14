
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,long,int ) ;
 int FUNC_4 (scalar_t__,int,int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_5 (long VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
  FUNC_2 ();
  if (VAR_3)
    {
      if (VAR_8)
 FUNC_1 (VAR_2 ? VAR_2 : VAR_4,
   "Thread %d: ", VAR_8);

      FUNC_3 (VAR_2 ? VAR_2 : VAR_4,
          VAR_5, 0);

      if (VAR_5 & (VAR_1 | VAR_0))
 FUNC_4 (VAR_2 ? VAR_2 : VAR_4,
          VAR_6, VAR_7, 0);
      if (VAR_2)
 FUNC_0 (VAR_2);
    }
}
