
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext_ext {int* es_bits1; int es_asym; int es_ifd; scalar_t__* es_bits2; } ;
typedef int bfd ;
struct TYPE_3__ {int asym; int ifd; scalar_t__ weakext; scalar_t__ cobol_main; scalar_t__ jmptbl; } ;
typedef TYPE_1__ EXTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_6, const EXTR *VAR_7, void * VAR_8)
{
  struct ext_ext *VAR_9 = (struct ext_ext *) VAR_8;
  EXTR VAR_10[1];


  *VAR_10 = *VAR_7;


  if (FUNC_3 (VAR_6))
    {
      VAR_9->es_bits1[0] = ((VAR_10->jmptbl ? VAR_2 : 0)
     | (VAR_10->cobol_main ? VAR_0 : 0)
     | (VAR_10->weakext ? VAR_4 : 0));
      VAR_9->es_bits2[0] = 0;




    }
  else
    {
      VAR_9->es_bits1[0] = ((VAR_10->jmptbl ? VAR_3 : 0)
     | (VAR_10->cobol_main ? VAR_1 : 0)
     | (VAR_10->weakext ? VAR_5 : 0));
      VAR_9->es_bits2[0] = 0;




    }
  FUNC_4 (VAR_6, &VAR_10->asym, &VAR_9->es_asym);





}
