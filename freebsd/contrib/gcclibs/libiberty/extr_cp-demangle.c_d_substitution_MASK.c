
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_standard_sub_info {char code; char const* set_last_name; int set_last_name_len; char* full_expansion; int full_len; char* simple_expansion; int simple_len; } ;
struct d_info {int next_sub; int options; int expansion; struct demangle_component* last_name; struct demangle_component** subs; int did_subs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct d_info*,char) ;
 struct demangle_component* FUNC_3 (struct d_info*,char const*,int) ;
 char FUNC_4 (struct d_info*) ;
 char FUNC_5 (struct d_info*) ;
 struct d_standard_sub_info* VAR_1 ;

__attribute__((used)) static struct demangle_component *
FUNC_6 (struct d_info *VAR_2, int VAR_3)
{
  char VAR_4;

  if (! FUNC_2 (VAR_2, 'S'))
    return ((void*)0);

  VAR_4 = FUNC_4 (VAR_2);
  if (VAR_4 == '_' || FUNC_0 (VAR_4) || FUNC_1 (VAR_4))
    {
      int VAR_5;

      VAR_5 = 0;
      if (VAR_4 != '_')
 {
   do
     {
       if (FUNC_0 (VAR_4))
  VAR_5 = VAR_5 * 36 + VAR_4 - '0';
       else if (FUNC_1 (VAR_4))
  VAR_5 = VAR_5 * 36 + VAR_4 - 'A' + 10;
       else
  return ((void*)0);
       if (VAR_5 < 0)
  return ((void*)0);
       VAR_4 = FUNC_4 (VAR_2);
     }
   while (VAR_4 != '_');

   ++VAR_5;
 }

      if (VAR_5 >= VAR_2->next_sub)
 return ((void*)0);

      ++VAR_2->did_subs;

      return VAR_2->subs[VAR_5];
    }
  else
    {
      int VAR_6;
      const struct d_standard_sub_info *VAR_7;
      const struct d_standard_sub_info *VAR_8;

      VAR_6 = (VAR_2->options & VAR_0) != 0;
      if (! VAR_6 && VAR_3)
 {
   char VAR_9;

   VAR_9 = FUNC_5 (VAR_2);
   if (VAR_9 == 'C' || VAR_9 == 'D')
     VAR_6 = 1;
 }

      VAR_8 = (&VAR_1[0]
       + sizeof VAR_1 / sizeof VAR_1[0]);
      for (VAR_7 = &VAR_1[0]; VAR_7 < VAR_8; ++VAR_7)
 {
   if (VAR_4 == VAR_7->code)
     {
       const char *VAR_10;
       int VAR_11;

       if (VAR_7->set_last_name != ((void*)0))
  VAR_2->last_name = FUNC_3 (VAR_2, VAR_7->set_last_name,
         VAR_7->set_last_name_len);
       if (VAR_6)
  {
    VAR_10 = VAR_7->full_expansion;
    VAR_11 = VAR_7->full_len;
  }
       else
  {
    VAR_10 = VAR_7->simple_expansion;
    VAR_11 = VAR_7->simple_len;
  }
       VAR_2->expansion += VAR_11;
       return FUNC_3 (VAR_2, VAR_10, VAR_11);
     }
 }

      return ((void*)0);
    }
}
