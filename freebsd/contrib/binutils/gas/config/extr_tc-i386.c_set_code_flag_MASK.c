
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;

__attribute__((used)) static void
FUNC_2 (int VAR_9)
{
  VAR_7 = VAR_9;
  VAR_6 &= ~(VAR_3 | VAR_4);
  VAR_6 |= (VAR_7 == VAR_1 ? VAR_3 : VAR_4);
  if (VAR_9 == VAR_1 && !(VAR_6 & VAR_5))
    {
      FUNC_1 (FUNC_0("64bit mode not supported on this CPU."));
    }
  if (VAR_9 == VAR_0 && !(VAR_6 & VAR_2))
    {
      FUNC_1 (FUNC_0("32bit mode not supported on this CPU."));
    }
  VAR_8 = '\0';
}
