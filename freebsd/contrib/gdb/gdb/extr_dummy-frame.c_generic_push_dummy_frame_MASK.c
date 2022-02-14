
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_frame {struct dummy_frame* next; int regcache; int id; int fp; scalar_t__ top; int sp; int pc; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dummy_frame* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct dummy_frame*) ;
 struct dummy_frame* FUNC_10 (int) ;

void
FUNC_11 (void)
{
  struct dummy_frame *VAR_3;
  CORE_ADDR VAR_4 = FUNC_2 (FUNC_1 ());





  VAR_3 = VAR_2;
  while (VAR_3)
    if (FUNC_0 (VAR_3->fp, VAR_4))
      {
 VAR_2 = VAR_3->next;
 FUNC_7 (VAR_3->regcache);
 FUNC_9 (VAR_3);
 VAR_3 = VAR_2;
      }
    else
      VAR_3 = VAR_3->next;

  VAR_3 = FUNC_10 (sizeof (struct dummy_frame));
  VAR_3->regcache = FUNC_8 (VAR_0);

  VAR_3->pc = FUNC_4 ();
  VAR_3->sp = FUNC_5 ();
  VAR_3->top = 0;
  VAR_3->fp = VAR_4;
  VAR_3->id = FUNC_3 (FUNC_1 ());
  FUNC_6 (VAR_3->regcache, VAR_1);
  VAR_3->next = VAR_2;
  VAR_2 = VAR_3;
}
