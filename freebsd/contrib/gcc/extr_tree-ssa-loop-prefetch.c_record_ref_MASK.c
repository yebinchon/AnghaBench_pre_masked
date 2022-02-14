
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct mem_ref_group {struct mem_ref* refs; } ;
struct mem_ref {int write_p; scalar_t__ delta; int prefetch_mod; int issue_prefetch_p; struct mem_ref* next; struct mem_ref_group* group; int prefetch_before; void* mem; void* stmt; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,struct mem_ref*) ;
 struct mem_ref* FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2 (struct mem_ref_group *VAR_6, tree VAR_7, tree VAR_8,
     HOST_WIDE_INT VAR_9, bool VAR_10)
{
  struct mem_ref **VAR_11;


  for (VAR_11 = &VAR_6->refs; *VAR_11; VAR_11 = &(*VAR_11)->next)
    {


      if (!VAR_3
   && VAR_10
   && !(*VAR_11)->write_p)
 continue;
      if (!VAR_1
   && !VAR_10
   && (*VAR_11)->write_p)
 continue;

      if ((*VAR_11)->delta == VAR_9)
 return;
    }

  (*VAR_11) = FUNC_1 (1, sizeof (struct mem_ref));
  (*VAR_11)->stmt = VAR_7;
  (*VAR_11)->mem = VAR_8;
  (*VAR_11)->delta = VAR_9;
  (*VAR_11)->write_p = VAR_10;
  (*VAR_11)->prefetch_before = VAR_0;
  (*VAR_11)->prefetch_mod = 1;
  (*VAR_11)->issue_prefetch_p = 0;
  (*VAR_11)->group = VAR_6;
  (*VAR_11)->next = ((void*)0);

  if (VAR_4 && (VAR_5 & VAR_2))
    FUNC_0 (VAR_4, *VAR_11);
}
