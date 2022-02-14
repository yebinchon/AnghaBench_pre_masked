
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_frame {int regcache; struct dummy_frame* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dummy_frame*) ;

__attribute__((used)) static void
FUNC_2 (struct dummy_frame **VAR_0)
{
  struct dummy_frame *VAR_1 = (*VAR_0);
  (*VAR_0) = (*VAR_0)->next;
  FUNC_0 (VAR_1->regcache);
  FUNC_1 (VAR_1);
}
