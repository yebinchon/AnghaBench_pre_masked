
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obstack {scalar_t__ chunk_size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3 (const struct obstack *VAR_2)
{
  if (VAR_2->chunk_size == 0)
    {
      FUNC_1 (FUNC_0("attempt to allocate data in absolute section"));
      FUNC_2 (VAR_1, 0);
    }

  if (VAR_0 != ((void*)0))
    {
      FUNC_1 (FUNC_0("attempt to allocate data in common section"));
      VAR_0 = ((void*)0);
    }
}
