
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tagged_tu_seen_cache {struct tagged_tu_seen_cache* next; } ;


 int FUNC_0 (struct tagged_tu_seen_cache*) ;
 struct tagged_tu_seen_cache const* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (const struct tagged_tu_seen_cache *VAR_1)
{
  const struct tagged_tu_seen_cache *VAR_2 = VAR_0;
  while (VAR_2 != VAR_1)
    {
      struct tagged_tu_seen_cache *VAR_3 = (struct tagged_tu_seen_cache*)VAR_2;
      VAR_2 = VAR_3->next;
      FUNC_0 (VAR_3);
    }
  VAR_0 = VAR_1;
}
