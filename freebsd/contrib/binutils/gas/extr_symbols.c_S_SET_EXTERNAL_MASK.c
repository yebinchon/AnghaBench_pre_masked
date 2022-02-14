
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {int dummy; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 char* VAR_4 ;
 int FUNC_3 (char*,unsigned int,int ) ;
 int FUNC_4 (char**,unsigned int*) ;
 TYPE_2__* FUNC_5 (struct local_symbol*) ;

void
FUNC_6 (symbolS *VAR_5)
{
  if (FUNC_0 (VAR_5))
    VAR_5 = FUNC_5 ((struct local_symbol *) VAR_5);
  if ((VAR_5->bsym->flags & VAR_3) != 0)
    {

      return;
    }
  if (VAR_5->bsym->flags & VAR_2)
    {
      char * VAR_6;
      unsigned int VAR_7;


      FUNC_4 (& VAR_6, & VAR_7);
      FUNC_3 (VAR_6, VAR_7,
       FUNC_2("section symbols are already global"));
      return;
    }
  VAR_5->bsym->flags |= VAR_0;
  VAR_5->bsym->flags &= ~(VAR_1 | VAR_3);





}
