
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_2__ TypeArgument ;
struct TYPE_7__ {int (* occheck ) (int,void*) ;int (* gccheck ) (int,int *,int *,void*) ;} ;
struct TYPE_9__ {int status; int (* ccheck ) (int,void*) ;TYPE_1__ charcheck; struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef int FORM ;
typedef TYPE_3__ FIELDTYPE ;
typedef int FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *,int *,void*) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (int,void*) ;

__attribute__((used)) static bool
FUNC_6(FORM *VAR_4,
    FIELD *VAR_5,
    FIELDTYPE *VAR_6,
    int VAR_7,
    TypeArgument *VAR_8)
{
  if (VAR_6)
    {
      if (VAR_6->status & VAR_3)
 {
   FUNC_1(VAR_8);
   return (
     FUNC_6(VAR_4, VAR_5, VAR_6->left, VAR_7, VAR_8->left) ||
     FUNC_6(VAR_4, VAR_5, VAR_6->right, VAR_7, VAR_8->right));
 }
      else
 {
   if (VAR_6->ccheck)
     return VAR_6->ccheck(VAR_7, (void *)VAR_8);

 }
    }
  return (!FUNC_2(FUNC_0(VAR_7)) ? VAR_1 : VAR_0);
}
