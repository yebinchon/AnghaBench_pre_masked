
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {struct TYPE_16__* right; struct TYPE_16__* left; } ;
typedef TYPE_2__ TypeArgument ;
struct TYPE_18__ {TYPE_2__* buf; scalar_t__ opts; } ;
struct TYPE_15__ {int (* ofcheck ) (TYPE_5__*,void*) ;int (* gfcheck ) (int *,TYPE_5__*,void*) ;} ;
struct TYPE_17__ {int status; int (* fcheck ) (TYPE_5__*,void*) ;TYPE_1__ fieldcheck; struct TYPE_17__* right; struct TYPE_17__* left; } ;
typedef int FORM ;
typedef TYPE_2__ FIELD_CELL ;
typedef TYPE_4__ FIELDTYPE ;
typedef TYPE_5__ FIELD ;


 scalar_t__ FUNC_0 (TYPE_2__) ;
 scalar_t__ FUNC_1 (TYPE_2__) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_5__*,void*) ;
 int FUNC_4 (TYPE_5__*,void*) ;
 int FUNC_5 (TYPE_5__*,void*) ;

__attribute__((used)) static bool
FUNC_6(FORM *VAR_4, FIELDTYPE *VAR_5, FIELD *VAR_6, TypeArgument *VAR_7)
{
  if (VAR_5)
    {
      if ((unsigned)VAR_6->opts & VAR_0)
 {
   FIELD_CELL *VAR_8 = VAR_6->buf;

   FUNC_2(VAR_8);
   while (FUNC_1(*VAR_8))
     {
       VAR_8++;
     }
   if (FUNC_0(*VAR_8) == 0)
     return VAR_1;
 }

      if (VAR_5->status & VAR_3)
 {
   FUNC_2(VAR_7);
   return (
     FUNC_6(VAR_4, VAR_5->left, VAR_6, VAR_7->left) ||
     FUNC_6(VAR_4, VAR_5->right, VAR_6, VAR_7->right));
 }
      else
 {
   if (VAR_5->fcheck)
     return VAR_5->fcheck(VAR_6, (void *)VAR_7);

 }
    }
  return VAR_1;
}
