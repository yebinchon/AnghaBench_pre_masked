
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcache_block {int* data; int * state; int refs; int addr; struct dcache_block* p; } ;
struct TYPE_2__ {struct dcache_block* valid_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_3, int VAR_4)
{
  struct dcache_block *VAR_5;

  FUNC_1 ("Dcache line width %d, depth %d\n",
     VAR_1, VAR_0);

  if (VAR_2)
    {
      FUNC_1 ("Cache state:\n");

      for (VAR_5 = VAR_2->valid_head; VAR_5; VAR_5 = VAR_5->p)
 {
   int VAR_6;
   FUNC_1 ("Line at %s, referenced %d times\n",
      FUNC_0 (VAR_5->addr), VAR_5->refs);

   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
     FUNC_1 ("%02x", VAR_5->data[VAR_6] & 0xFF);
   FUNC_1 ("\n");

   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
     FUNC_1 ("%2x", VAR_5->state[VAR_6]);
   FUNC_1 ("\n");
 }
    }
}
