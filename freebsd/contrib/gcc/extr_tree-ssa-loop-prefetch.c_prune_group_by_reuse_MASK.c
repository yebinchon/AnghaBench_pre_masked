
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref_group {struct mem_ref* refs; } ;
struct mem_ref {int prefetch_before; int prefetch_mod; struct mem_ref* next; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int FUNC_1 (struct mem_ref*,struct mem_ref*) ;

__attribute__((used)) static void
FUNC_2 (struct mem_ref_group *VAR_5)
{
  struct mem_ref *VAR_6;

  for (VAR_6 = VAR_5->refs; VAR_6; VAR_6 = VAR_6->next)
    {
      FUNC_1 (VAR_6, VAR_5->refs);

      if (VAR_3 && (VAR_4 & VAR_2))
 {
   FUNC_0 (VAR_3, "Reference %p:", (void *) VAR_6);

   if (VAR_6->prefetch_before == VAR_1
       && VAR_6->prefetch_mod == 1)
     FUNC_0 (VAR_3, " no restrictions");
   else if (VAR_6->prefetch_before == 0)
     FUNC_0 (VAR_3, " do not prefetch");
   else if (VAR_6->prefetch_before <= VAR_6->prefetch_mod)
     FUNC_0 (VAR_3, " prefetch once");
   else
     {
       if (VAR_6->prefetch_before != VAR_1)
  {
    FUNC_0 (VAR_3, " prefetch before ");
    FUNC_0 (VAR_3, VAR_0,
      VAR_6->prefetch_before);
  }
       if (VAR_6->prefetch_mod != 1)
  {
    FUNC_0 (VAR_3, " prefetch mod ");
    FUNC_0 (VAR_3, VAR_0,
      VAR_6->prefetch_mod);
  }
     }
   FUNC_0 (VAR_3, "\n");
 }
    }
}
