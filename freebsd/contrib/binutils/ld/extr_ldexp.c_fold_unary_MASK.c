
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int node_code; } ;
struct TYPE_8__ {int child; } ;
struct TYPE_12__ {TYPE_2__ type; TYPE_1__ unary; } ;
typedef TYPE_5__ etree_type ;
struct TYPE_11__ {int value; void* valid_p; } ;
struct TYPE_10__ {int end; int phase; } ;
struct TYPE_13__ {TYPE_4__ result; TYPE_3__ dataseg; int phase; int section; int dot; } ;





 int FUNC_0 () ;
 void* VAR_0 ;

 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (etree_type *VAR_10)
{
  FUNC_2 (VAR_10->unary.child);
  if (VAR_7.result.valid_p)
    {
      switch (VAR_10->type.node_code)
 {
 case 130:
   if (VAR_7.phase != VAR_9)
     FUNC_4 (FUNC_1 (VAR_7.dot, VAR_7.result.value));
   else
     VAR_7.result.valid_p = VAR_0;
   break;

 case 131:
   FUNC_3 ();
   break;

 case '~':
   FUNC_3 ();
   VAR_7.result.value = ~VAR_7.result.value;
   break;

 case '!':
   FUNC_3 ();
   VAR_7.result.value = !VAR_7.result.value;
   break;

 case '-':
   FUNC_3 ();
   VAR_7.result.value = -VAR_7.result.value;
   break;

 case 128:

   if (VAR_7.phase != VAR_9)
     {
       FUNC_3 ();
       VAR_7.result.value = FUNC_1 (VAR_7.dot, VAR_7.result.value);
     }
   else
     VAR_7.result.valid_p = VAR_0;
   break;

 case 129:
   if (VAR_7.phase != VAR_9
       && VAR_7.section == VAR_1
       && (VAR_7.dataseg.phase == VAR_3
    || VAR_7.dataseg.phase == VAR_6
    || VAR_7.dataseg.phase == VAR_2
    || VAR_7.dataseg.phase == VAR_5
    || VAR_7.phase == VAR_8))
     {
       if (VAR_7.dataseg.phase == VAR_3
    || VAR_7.dataseg.phase == VAR_6)
  {
    VAR_7.dataseg.phase = VAR_4;
    VAR_7.dataseg.end = VAR_7.result.value;
  }
     }
   else
     VAR_7.result.valid_p = VAR_0;
   break;

 default:
   FUNC_0 ();
   break;
 }
    }
}
