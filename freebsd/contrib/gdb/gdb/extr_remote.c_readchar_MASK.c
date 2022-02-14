
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum serial_rc { ____Placeholder_serial_rc } serial_rc ;





 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4 (int VAR_1)
{
  int VAR_2;

  VAR_2 = FUNC_2 (VAR_0, VAR_1);

  if (VAR_2 >= 0)
    return (VAR_2 & 0x7f);

  switch ((enum serial_rc) VAR_2)
    {
    case 130:
      FUNC_3 ();
      FUNC_0 ("Remote connection closed");

    case 129:
      FUNC_1 ("Remote communication error");

    case 128:
      break;
    }
  return VAR_2;
}
