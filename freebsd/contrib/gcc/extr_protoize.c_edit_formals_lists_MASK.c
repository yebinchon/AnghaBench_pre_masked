
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int formals_list; struct TYPE_10__* chain_next; } ;
typedef TYPE_4__ f_list_chain_item ;
struct TYPE_11__ {TYPE_4__* f_list_chain; int formal_names; TYPE_3__* file; TYPE_1__* hash_entry; } ;
typedef TYPE_5__ def_dec_info ;
struct TYPE_9__ {TYPE_2__* hash_entry; } ;
struct TYPE_8__ {int symbol; } ;
struct TYPE_7__ {char* symbol; } ;


 scalar_t__ FUNC_0 (unsigned char const) ;
 int FUNC_1 (int,char const*) ;
 char const* VAR_0 ;
 int FUNC_2 (char const*,size_t) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const) ;
 int FUNC_5 (char*,int ,int ,int ,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *,int ) ;
 size_t FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_11 (const char *VAR_1, unsigned int VAR_2,
      const def_dec_info *VAR_3)
{
  const char *VAR_4;
  int VAR_5;

  VAR_4 = VAR_1 - 1;
  VAR_5 = 1;
  for (; VAR_5; FUNC_1 (--VAR_4 > VAR_0, 0))
    {
      switch (*VAR_4)
 {
 case '(':
   VAR_5--;
   break;
 case ')':
   VAR_5++;
   break;
 }
    }
  VAR_4++;



  VAR_2--;

  if (VAR_2)
    {
      const char *VAR_6;



      VAR_6 = VAR_4 - 1;
      FUNC_1 (VAR_6 > VAR_0, 0);
      while (FUNC_0 ((const unsigned char)*VAR_6))
 FUNC_1 (--VAR_6 > VAR_0, 0);
      FUNC_1 (*VAR_6 == ')', VAR_6);
      FUNC_1 (--VAR_6 > VAR_0, 0);
      FUNC_1 (*VAR_6 == ')', VAR_6);
      if (FUNC_11 (VAR_6, VAR_2, VAR_3))
 return 1;
    }





  if (VAR_2 == 0)
    {
      const char *VAR_7 = VAR_3->hash_entry->symbol;
      const char *VAR_8;
      const char *VAR_9;
      size_t VAR_10;

      for (VAR_9 = VAR_4-1;
    FUNC_0 ((const unsigned char)*VAR_9); )
 FUNC_1 (--VAR_9 > VAR_0, 0);

      for (VAR_8 = VAR_9++;
    FUNC_4 (*VAR_8);
    VAR_8--)
 FUNC_1 (VAR_8 > VAR_0, 0);
      VAR_8++;
      VAR_10 = VAR_9 - VAR_8;
      if (VAR_10 == 0)
 FUNC_1 (0, VAR_8);
      if (VAR_10 != FUNC_9 (VAR_7)
   || FUNC_10 (VAR_8, VAR_7, VAR_10))
 {
   FUNC_5 ("%s: %d: warning: found '%s' but expected '%s'\n",
    FUNC_8 (((void*)0), VAR_3->file->hash_entry->symbol),
    FUNC_3 (VAR_8),
    FUNC_2 (VAR_8, VAR_10),
    VAR_7);
   return 1;
 }
    }

  FUNC_7 (VAR_4);





  {
    unsigned VAR_11;
    const f_list_chain_item *VAR_12 = VAR_3->f_list_chain;





    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
      VAR_12 = VAR_12->chain_next;
    FUNC_6 (VAR_12->formals_list);
  }


  VAR_0 = VAR_1 - 1;
  return 0;
}
