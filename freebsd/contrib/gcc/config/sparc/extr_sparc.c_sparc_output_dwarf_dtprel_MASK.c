
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_0, int VAR_1, rtx VAR_2)
{
  switch (VAR_1)
    {
    case 4:
      FUNC_0 ("\t.word\t%r_tls_dtpoff32(", VAR_0);
      break;
    case 8:
      FUNC_0 ("\t.xword\t%r_tls_dtpoff64(", VAR_0);
      break;
    default:
      FUNC_1 ();
    }
  FUNC_2 (VAR_0, VAR_2);
  FUNC_0 (")", VAR_0);
}
