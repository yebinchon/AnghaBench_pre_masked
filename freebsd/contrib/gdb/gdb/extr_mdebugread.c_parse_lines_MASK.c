
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct partial_symtab {int textlow; } ;
struct linetable {int nitems; } ;
struct TYPE_9__ {unsigned char* line; } ;
struct TYPE_8__ {scalar_t__ cbLine; int cpd; int cbLineOffset; } ;
struct TYPE_7__ {scalar_t__ iline; int lnLow; int lnHigh; int cbLineOffset; int adr; } ;
typedef TYPE_1__ PDR ;
typedef TYPE_2__ FDR ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct linetable*,int,int,int) ;
 int FUNC_1 (int *,char*,int ) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (FDR *VAR_3, PDR *VAR_4, struct linetable *VAR_5, int VAR_6,
      struct partial_symtab *VAR_7, CORE_ADDR VAR_8)
{
  unsigned char *VAR_9;
  int VAR_10, VAR_11;
  int VAR_12, VAR_13, VAR_14 = 0;

  if (VAR_3->cbLine == 0)
    return;


  VAR_11 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_3->cpd; VAR_10++, VAR_4++)
    {
      CORE_ADDR VAR_15;
      CORE_ADDR VAR_16;
      unsigned char *VAR_17;


      if (VAR_4->iline == VAR_1 ||
   VAR_4->lnLow == -1 || VAR_4->lnHigh == -1)
 continue;



      VAR_9 = VAR_0->line + VAR_3->cbLineOffset;
      if (VAR_10 != (VAR_3->cpd - 1))
 VAR_17 = VAR_9 + VAR_4[1].cbLineOffset;
      else
 VAR_17 = VAR_9 + VAR_3->cbLine;
      VAR_9 += VAR_4->cbLineOffset;

      VAR_16 = VAR_7->textlow + VAR_4->adr - VAR_8;

      VAR_15 = VAR_16 >> 2;
      for (VAR_14 = VAR_4->lnLow; VAR_9 < VAR_17;)
 {
   VAR_13 = *VAR_9 & 0x0f;
   VAR_12 = *VAR_9++ >> 4;
   if (VAR_12 >= 8)
     VAR_12 -= 16;
   if (VAR_12 == -8)
     {
       VAR_12 = (VAR_9[0] << 8) | VAR_9[1];
       if (VAR_12 >= 0x8000)
  VAR_12 -= 0x10000;
       VAR_9 += 2;
     }
   VAR_14 += VAR_12;



   if (VAR_5->nitems >= VAR_6)
     {
       FUNC_1 (&VAR_2,
    "guessed size of linetable for %s incorrectly",
    FUNC_2 (VAR_3));
       break;
     }
   VAR_11 = FUNC_0 (VAR_5, VAR_14, VAR_15, VAR_11);
   VAR_15 += VAR_13 + 1;
 }
    }
}
