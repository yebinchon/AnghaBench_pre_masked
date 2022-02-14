
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct translation {int * convert_char_baton; void* convert_char; int c_parse_backslash_baton; scalar_t__ c_parse_backslash; int c_target_char_has_backslash_escape_baton; scalar_t__ c_target_char_has_backslash_escape; } ;
struct charset {char* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,struct charset*,struct charset*) ;
 struct charset* VAR_6 ;
 struct charset* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,char*,char*) ;
 int * VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 struct translation* FUNC_2 (char*,char*) ;
 int * VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static void
FUNC_3 (struct charset *VAR_16, struct charset *VAR_17)
{
  struct translation *VAR_18, *VAR_19;




  if (! VAR_16 || ! VAR_17)
    {
      VAR_6 = VAR_16;
      VAR_7 = VAR_17;
      return;
    }

  VAR_18 = FUNC_2 (VAR_16->name, VAR_17->name);
  VAR_19 = FUNC_2 (VAR_17->name, VAR_16->name);



  if (VAR_16 != VAR_17)
    {
      if (! VAR_18 || ! VAR_18->convert_char)
        {
          if (FUNC_0 (&VAR_4, VAR_16, VAR_17)
              < 0)
            FUNC_1 ("GDB can't convert from the `%s' character set to `%s'.",
                   VAR_16->name, VAR_17->name);
        }
      if (! VAR_19 || ! VAR_19->convert_char)
        {
          if (FUNC_0 (&VAR_5, VAR_17, VAR_16)
              < 0)
            FUNC_1 ("GDB can't convert from the `%s' character set to `%s'.",
                   VAR_17->name, VAR_16->name);
        }
    }

  if (VAR_19 && VAR_19->c_target_char_has_backslash_escape)
    {
      VAR_3
        = VAR_19->c_target_char_has_backslash_escape;
      VAR_2
        = VAR_19->c_target_char_has_backslash_escape_baton;
    }
  else
    VAR_3
      = VAR_9;

  if (VAR_18 && VAR_18->c_parse_backslash)
    {
      VAR_1 = VAR_18->c_parse_backslash;
      VAR_0 = VAR_18->c_parse_backslash_baton;
    }
  else
    VAR_1 = VAR_8;

  if (VAR_18 && VAR_18->convert_char)
    {
      VAR_11 = VAR_18->convert_char;
      VAR_10 = VAR_18->convert_char_baton;
    }
  else if (VAR_16 == VAR_17)
    VAR_11 = VAR_13;
  else
    {
      VAR_11 = VAR_12;
      VAR_10 = &VAR_4;
    }

  if (VAR_19 && VAR_19->convert_char)
    {
      VAR_15 = VAR_19->convert_char;
      VAR_14 = VAR_19->convert_char_baton;
    }
  else if (VAR_16 == VAR_17)
    VAR_15 = VAR_13;
  else
    {
      VAR_15 = VAR_12;
      VAR_14 = &VAR_5;
    }

  VAR_6 = VAR_16;
  VAR_7 = VAR_17;
}
