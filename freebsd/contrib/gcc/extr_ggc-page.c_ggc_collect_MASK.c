
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float allocated_last_gc; float allocated; unsigned long context_depth_collections; int context_depth; int debug_file; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (float,size_t) ;
 float FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 () ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

void
FUNC_12 (void)
{



  float VAR_8 =
    FUNC_0 (VAR_0.allocated_last_gc, (size_t)FUNC_1 (VAR_3) * 1024);

  float VAR_9 = VAR_8 * FUNC_1 (VAR_2) / 100;

  if (VAR_0.allocated < VAR_8 + VAR_9 && !VAR_5)
    return;

  FUNC_10 (VAR_4);
  if (!VAR_6)
    FUNC_3 (VAR_7, " {GC %luk -> ", (unsigned long) VAR_0.allocated / 1024);
  if (VAR_1 >= 2)
    FUNC_3 (VAR_0.debug_file, "BEGIN COLLECTING\n");



  VAR_0.allocated = 0;



  FUNC_7 ();


  VAR_0.context_depth_collections = ((unsigned long)1 << (VAR_0.context_depth + 1)) - 1;

  FUNC_2 ();
  FUNC_4 ();



  FUNC_6 ();
  FUNC_11 ();
  FUNC_8 ();

  VAR_0.allocated_last_gc = VAR_0.allocated;

  FUNC_9 (VAR_4);

  if (!VAR_6)
    FUNC_3 (VAR_7, "%luk}", (unsigned long) VAR_0.allocated / 1024);
  if (VAR_1 >= 2)
    FUNC_3 (VAR_0.debug_file, "END COLLECTING\n");
}
