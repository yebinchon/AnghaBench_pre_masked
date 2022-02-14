
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int VAR_5 ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static void
FUNC_2(unsigned char VAR_6)
{
 if (VAR_6 != '\0') {
  FUNC_1(VAR_6);
  if (VAR_6 == '*')
   VAR_4 |= VAR_1;
  else
   VAR_4 &= ~VAR_1;
  VAR_5++;
 }
 if (VAR_6 != ']')
  VAR_4 &= ~VAR_2;
 if (VAR_6 == ' ' || VAR_6 == '\t' || VAR_6 == '>')
  return;
 if (FUNC_0(VAR_6) == 0)
  VAR_4 &= ~VAR_3;
 else if (VAR_4 & VAR_0)
  VAR_4 |= VAR_3;
 VAR_4 &= ~VAR_0;
}
