
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rc_uint_type ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static rc_uint_type
FUNC_4 (int VAR_0)
{
  rc_uint_type VAR_1 = 10;
  rc_uint_type VAR_2, VAR_3;
  int VAR_4 = 0;

  VAR_2 = 0;
  if (VAR_0 == '0')
    {
      VAR_1 = 8;
      switch (FUNC_1 ())
 {
 case 'o': case 'O':
   FUNC_2 ();
   VAR_1 = 8;
   break;

 case 'x': case 'X':
   FUNC_2 ();
   VAR_1 = 16;
   break;
 }
    }
  else
    VAR_2 = (rc_uint_type) (VAR_0 - '0');
  while ((VAR_0 = FUNC_1 ()) != -1)
    {
      if (FUNC_0 (VAR_0))
 VAR_3 = (rc_uint_type) (VAR_0 - '0');
      else if (VAR_0 >= 'a' && VAR_0 <= 'f')
 VAR_3 = (rc_uint_type) ((VAR_0 - 'a') + 10);
      else if (VAR_0 >= 'A' && VAR_0 <= 'F')
 VAR_3 = (rc_uint_type) ((VAR_0 - 'A') + 10);
      else
 break;
      FUNC_2 ();
      if (! VAR_4 && VAR_3 >= VAR_1)
 {
   VAR_4 = 1;
   FUNC_3 ("digit exceeds base");
 }
      VAR_2 *= VAR_1;
      VAR_2 += VAR_3;
    }
  return VAR_2;
}
