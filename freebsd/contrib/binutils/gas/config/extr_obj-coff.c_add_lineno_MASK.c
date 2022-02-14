
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {int line_number; TYPE_2__ u; } ;
struct line_no {TYPE_1__ l; int * frag; struct line_no* next; } ;
typedef int fragS ;
typedef int addressT ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct line_no* VAR_2 ;
 struct line_no* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (fragS * VAR_3, addressT VAR_4, int VAR_5)
{
  struct line_no * VAR_6 = FUNC_3 (sizeof (* VAR_6));

  if (!VAR_1)
    FUNC_1 ();




  if (VAR_5 <= 0)
    {

      FUNC_2 (FUNC_0("Line numbers must be positive integers\n"));
      VAR_5 = 1;
    }

  VAR_6->next = VAR_2;
  VAR_6->frag = VAR_3;
  VAR_6->l.line_number = VAR_5;
  VAR_6->l.u.offset = VAR_4;
  VAR_2 = VAR_6;
  VAR_0++;
}
