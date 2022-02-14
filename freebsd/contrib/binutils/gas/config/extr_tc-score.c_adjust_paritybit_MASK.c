
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum insn_class { ____Placeholder_insn_class } insn_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned long
FUNC_1 (unsigned long VAR_4, enum insn_class VAR_5)
{
  unsigned long VAR_6 = 0;
  unsigned long VAR_7 = 0;
  unsigned long VAR_8 = 0;
  unsigned long VAR_9 = 0;
  unsigned long VAR_10 = 0;

  if (VAR_5 == VAR_1)
    {
      VAR_9 = 0x80000000;
      VAR_10 = 0x00008000;
    }
  else if (VAR_5 == VAR_0)
    {
      VAR_9 = 0;
      VAR_10 = 0;
    }
  else if (VAR_5 == VAR_2)
    {
      VAR_9 = 0;
      VAR_10 = 0x00008000;
    }
  else if (VAR_5 == VAR_3)
    {


      VAR_9 = 0x80000000;
      VAR_10 = 0x00008000;
    }
  else
    {
      FUNC_0 ();
    }

  VAR_7 = VAR_4 & 0x3fff8000;
  VAR_8 = VAR_4 & 0x00007fff;
  VAR_6 = VAR_9 | (VAR_7 << 1) | VAR_10 | VAR_8;
  return VAR_6;

}
