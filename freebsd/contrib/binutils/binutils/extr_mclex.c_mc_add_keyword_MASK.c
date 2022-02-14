
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wind_language_t ;
typedef int unichar ;
typedef void* rc_uint_type ;
struct TYPE_4__ {size_t len; char const* group_name; int rid; struct TYPE_4__* next; int lang_info; int * sval; void* nval; int * usz; } ;
typedef TYPE_1__ mc_keyword ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int const*,int) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int * FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 int * FUNC_7 (unsigned int) ;
 TYPE_1__* FUNC_8 (int) ;

void
FUNC_9 (unichar *VAR_1, int VAR_2, const char *VAR_3, rc_uint_type VAR_4, unichar *VAR_5)
{
  mc_keyword *VAR_6, *VAR_7, *VAR_8;
  size_t VAR_9 = FUNC_6 (VAR_1);

  VAR_7 = VAR_0;
  VAR_6 = ((void*)0);
  while (VAR_7 != ((void*)0))
    {
      if (VAR_7->len > VAR_9)
 break;
      if (VAR_7->len == VAR_9)
 {
   int VAR_10 = FUNC_2 (VAR_1, VAR_7->usz, VAR_9 * sizeof (unichar));

   if (VAR_10 < 0)
     break;
   if (! VAR_10)
     {
       if (! FUNC_4 (VAR_3, "keyword") || FUNC_4 (VAR_7->group_name, VAR_3) != 0)
  FUNC_1 (FUNC_0("Duplicate symbol entered into keyword list."));
       VAR_7->rid = VAR_2;
       VAR_7->nval = VAR_4;
       VAR_7->sval = (!VAR_5 ? ((void*)0) : FUNC_5 (VAR_5));
       if (! FUNC_4 (VAR_3, "language"))
  {
    const wind_language_t *VAR_11 = FUNC_7 ((unsigned) VAR_4);

    if (VAR_11 == ((void*)0))
      FUNC_1 ("Language ident 0x%lx is not resolvable.\n", (long) VAR_4);
    FUNC_3 (&VAR_7->lang_info, VAR_11, sizeof (*VAR_11));
  }
       return;
     }
 }
      VAR_7 = (VAR_6 = VAR_7)->next;
    }
  VAR_8 = FUNC_8 (sizeof (mc_keyword));
  VAR_8->next = VAR_7;
  VAR_8->len = VAR_9;
  VAR_8->group_name = VAR_3;
  VAR_8->usz = VAR_1;
  VAR_8->rid = VAR_2;
  VAR_8->nval = VAR_4;
  VAR_8->sval = (!VAR_5 ? ((void*)0) : FUNC_5 (VAR_5));
  if (! FUNC_4 (VAR_3, "language"))
    {
      const wind_language_t *VAR_12 = FUNC_7 ((unsigned) VAR_4);
      if (VAR_12 == ((void*)0))
 FUNC_1 ("Language ident 0x%lx is not resolvable.\n", (long) VAR_4);
      FUNC_3 (&VAR_8->lang_info, VAR_12, sizeof (*VAR_12));
    }
  if (! VAR_6)
    VAR_0 = VAR_8;
  else
    VAR_6->next = VAR_8;
}
