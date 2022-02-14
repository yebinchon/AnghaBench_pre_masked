
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct obstack {int dummy; } ;
struct block {int dummy; } ;


 char* FUNC_0 (struct symbol const*) ;
 int FUNC_1 (struct block*,int ,struct obstack*) ;
 unsigned int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,unsigned int,struct obstack*) ;
 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_4 (char const*) ;

void
FUNC_5 (const struct symbol *VAR_2,
      struct block *VAR_3,
      struct obstack *VAR_4)
{



  if (FUNC_0 (VAR_2) != ((void*)0))
    {
      if (VAR_1)
 {
   FUNC_1
     (VAR_3, FUNC_3 (VAR_0,
      FUNC_4 (VAR_0),
      VAR_4),
      VAR_4);
 }
      else
 {
   const char *VAR_5 = FUNC_0 (VAR_2);
   unsigned int VAR_6 = FUNC_2 (VAR_5);

   FUNC_1 (VAR_3,
      FUNC_3 (VAR_5, VAR_6, VAR_4),
      VAR_4);
 }
    }
}
