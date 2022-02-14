
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext_ext {int* es_bits1; int es_asym; int es_ifd; } ;
typedef int bfd ;
struct TYPE_3__ {int jmptbl; int cobol_main; int weakext; int asym; int ifd; scalar_t__ reserved; } ;
typedef TYPE_1__ EXTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_6, void * VAR_7, EXTR *VAR_8)
{
  struct ext_ext VAR_9[1];

  *VAR_9 = *(struct ext_ext *) VAR_7;


  if (FUNC_3 (VAR_6))
    {
      VAR_8->jmptbl = 0 != (VAR_9->es_bits1[0] & VAR_2);
      VAR_8->cobol_main = 0 != (VAR_9->es_bits1[0] & VAR_0);
      VAR_8->weakext = 0 != (VAR_9->es_bits1[0] & VAR_4);
    }
  else
    {
      VAR_8->jmptbl = 0 != (VAR_9->es_bits1[0] & VAR_3);
      VAR_8->cobol_main = 0 != (VAR_9->es_bits1[0] & VAR_1);
      VAR_8->weakext = 0 != (VAR_9->es_bits1[0] & VAR_5);
    }
  VAR_8->reserved = 0;
  FUNC_4 (VAR_6, &VAR_9->es_asym, &VAR_8->asym);





}
