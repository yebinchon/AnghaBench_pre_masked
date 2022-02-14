
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_option_value_info {char const* name; int value; } ;
struct dump_file_info {int state; int flags; int * suffix; int swtch; int glob; } ;


 int FUNC_0 (int,int ) ;
 struct dump_option_value_info* VAR_0 ;
 int FUNC_1 (char const*,char const*,unsigned int) ;
 char* FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char const*,char) ;
 unsigned int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,unsigned int,char const*,int ) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_1, struct dump_file_info *VAR_2, bool VAR_3)
{
  const char *VAR_4;
  const char *VAR_5;
  int VAR_6;

  if (VAR_3 && !VAR_2->glob)
    return 0;

  VAR_4 = FUNC_2 (VAR_1, VAR_3 ? VAR_2->glob : VAR_2->swtch);
  if (!VAR_4)
    return 0;

  VAR_5 = VAR_4;
  VAR_6 = 0;

  while (*VAR_5)
    {
      const struct dump_option_value_info *VAR_7;
      const char *VAR_8;
      unsigned VAR_9;

      while (*VAR_5 == '-')
 VAR_5++;
      VAR_8 = FUNC_3 (VAR_5, '-');
      if (!VAR_8)
 VAR_8 = VAR_5 + FUNC_4 (VAR_5);
      VAR_9 = VAR_8 - VAR_5;

      for (VAR_7 = VAR_0; VAR_7->name; VAR_7++)
 if (FUNC_4 (VAR_7->name) == VAR_9
     && !FUNC_1 (VAR_7->name, VAR_5, VAR_9))
   {
     VAR_6 |= VAR_7->value;
     goto found;
   }
      FUNC_5 (0, "ignoring unknown option %q.*s in %<-fdump-%s%>",
        VAR_9, VAR_5, VAR_2->swtch);
    found:;
      VAR_5 = VAR_8;
    }

  VAR_2->state = -1;
  VAR_2->flags |= VAR_6;



  if (VAR_2->suffix == ((void*)0))
    FUNC_0 (VAR_2->flags, 0);

  return 1;
}
