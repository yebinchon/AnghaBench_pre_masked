
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union aux_ext {int dummy; } aux_ext ;
struct section_offsets {int dummy; } ;
struct objfile {int dummy; } ;
struct TYPE_10__ {scalar_t__ ssext; TYPE_4__* fdr; union aux_ext* external_aux; } ;
struct TYPE_9__ {int iauxBase; } ;
struct TYPE_8__ {scalar_t__ sc; int st; scalar_t__ iss; } ;
struct TYPE_7__ {scalar_t__ ifd; TYPE_2__ asym; } ;
typedef TYPE_1__ EXTR ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,union aux_ext*,char*,int,struct section_offsets*,struct objfile*) ;
 int FUNC_4 (char*,char*,scalar_t__,int ) ;
 scalar_t__ VAR_9 ;






__attribute__((used)) static void
FUNC_5 (EXTR *VAR_10, int VAR_11, struct section_offsets *VAR_12,
  struct objfile *VAR_13)
{
  union aux_ext *VAR_14;

  if (VAR_10->ifd != VAR_3)
    {
      VAR_0 = VAR_10->ifd;
      VAR_1 = VAR_2->fdr + VAR_0;
      VAR_14 = VAR_2->external_aux + VAR_1->iauxBase;
    }
  else
    {
      VAR_1 = VAR_2->fdr;
      VAR_14 = 0;
    }


  if (FUNC_1 (VAR_10->asym.sc) || VAR_10->asym.sc == VAR_9)
    {
      char *VAR_15;
      switch (VAR_10->asym.st)
 {
 case 130:


   return;
 case 128:
 case 129:
   VAR_15 = "procedure";
   VAR_6++;
   break;
 case 132:
   VAR_15 = "variable";
   VAR_8++;
   break;
 case 131:
   VAR_15 = "label";
   VAR_5++;
   break;
 default:
   VAR_15 = "symbol";
   break;
 }
      VAR_7++;

      if (VAR_4)
 FUNC_4 ("Warning: %s `%s' is undefined (in %s)\n",
    VAR_15, VAR_2->ssext + VAR_10->asym.iss,
    FUNC_2 (VAR_1));
      return;
    }

  switch (VAR_10->asym.st)
    {
    case 129:
    case 128:
      break;
    case 132:
    case 131:


      if (FUNC_0 (VAR_10->asym.sc))
 break;



      FUNC_3 (&VAR_10->asym, VAR_14, (char *) ((void*)0), VAR_11, VAR_12, VAR_13);
      break;
    default:
      break;
    }
}
