
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;



 int FUNC_0 () ;

__attribute__((used)) static unsigned int
FUNC_1 (unsigned char VAR_1)
{
  if (VAR_1 == VAR_0)
    return 0;

  switch (VAR_1 & 0x07)
    {
    case 131:
      return sizeof (void *);
    case 130:
      return 2;
    case 129:
      return 4;
    case 128:
      return 8;
    }
  FUNC_0 ();
}
