
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_1, int VAR_2, rtx VAR_3)
{
  switch (VAR_2)
    {
    case 4:
      FUNC_0 ("\t.long\t", VAR_1);
      break;
    case 8:
      FUNC_0 (VAR_0, VAR_1);
      break;
    default:
      FUNC_1 ();
    }
  FUNC_2 (VAR_1, VAR_3);
  FUNC_0 ("@dtprel+0x8000", VAR_1);
}
