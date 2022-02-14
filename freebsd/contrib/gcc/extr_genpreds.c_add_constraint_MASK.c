
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constraint_data {size_t namelen; char const* name; int lineno; char const* c_name; char const* regclass; int is_register; int is_const_int; int is_const_dbl; int is_extra; int is_memory; int is_address; struct constraint_data* next_textual; struct constraint_data* next_this_letter; scalar_t__ exp; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char const* FUNC_1 (int) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,size_t) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 char const* FUNC_6 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct constraint_data** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct constraint_data** VAR_16 ;
 char const* FUNC_7 (char const*) ;
 int FUNC_8 (int,char*,...) ;
 struct constraint_data* FUNC_9 (int ,int) ;
 int VAR_17 ;
 scalar_t__ FUNC_10 (int ,char const) ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 size_t FUNC_12 (char const*) ;
 int FUNC_13 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_14 (scalar_t__,char const*,int) ;

__attribute__((used)) static void
FUNC_15 (const char *VAR_18, const char *VAR_19,
  rtx VAR_20, bool VAR_21, bool VAR_22,
  int VAR_23)
{
  struct constraint_data *VAR_24, **VAR_25, **VAR_26;
  const char *VAR_27;
  bool VAR_28 = 0;
  bool VAR_29;
  bool VAR_30;
  size_t VAR_31;

  if (VAR_20 && FUNC_14 (VAR_20, VAR_18, VAR_23))
    return;

  if (!FUNC_3 (VAR_18[0]) && VAR_18[0] != '_')
    {
      if (VAR_18[1] == '\0')
 FUNC_8 (VAR_23, "constraint name '%s' is not "
      "a letter or underscore", VAR_18);
      else
 FUNC_8 (VAR_23, "constraint name '%s' does not begin "
      "with a letter or underscore", VAR_18);
      VAR_12 = 1;
      return;
    }
  for (VAR_27 = VAR_18; *VAR_27; VAR_27++)
    if (!FUNC_2 (*VAR_27))
      {
 if (*VAR_27 == '<' || *VAR_27 == '>' || *VAR_27 == '_')
   VAR_28 = 1;
 else
   {
     FUNC_8 (VAR_23,
          "constraint name '%s' must be composed of "
          "letters, digits, underscores, and "
          "angle brackets", VAR_18);
     VAR_12 = 1;
     return;
   }
      }

  if (FUNC_10 (VAR_8, VAR_18[0]))
    {
      if (VAR_18[1] == '\0')
 FUNC_8 (VAR_23, "constraint letter '%s' cannot be "
      "redefined by the machine description", VAR_18);
      else
 FUNC_8 (VAR_23, "constraint name '%s' cannot be defined by "
      "the machine description, as it begins with '%c'",
      VAR_18, VAR_18[0]);
      VAR_12 = 1;
      return;
    }


  VAR_31 = FUNC_12 (VAR_18);
  VAR_26 = &VAR_7[(unsigned int)VAR_18[0]];
  for (VAR_25 = VAR_26; *VAR_25; VAR_25 = &(*VAR_25)->next_this_letter)
    {





      if ((*VAR_25)->namelen >= VAR_31)
 VAR_26 = VAR_25;

      if (!FUNC_11 ((*VAR_25)->name, VAR_18))
 {
   FUNC_8 (VAR_23, "redefinition of constraint '%s'", VAR_18);
   FUNC_8 ((*VAR_25)->lineno, "previous definition is here");
   VAR_12 = 1;
   return;
 }
      else if (!FUNC_13 ((*VAR_25)->name, VAR_18, (*VAR_25)->namelen))
 {
   FUNC_8 (VAR_23, "defining constraint '%s' here", VAR_18);
   FUNC_8 ((*VAR_25)->lineno, "renders constraint '%s' "
        "(defined here) a prefix", (*VAR_25)->name);
   VAR_12 = 1;
   return;
 }
      else if (!FUNC_13 ((*VAR_25)->name, VAR_18, VAR_31))
 {
   FUNC_8 (VAR_23, "constraint '%s' is a prefix", VAR_18);
   FUNC_8 ((*VAR_25)->lineno, "of constraint '%s' "
        "(defined here)", (*VAR_25)->name);
   VAR_12 = 1;
   return;
 }
    }

  VAR_29 = FUNC_10 (VAR_5, VAR_18[0]) != 0;
  VAR_30 = FUNC_10 (VAR_4, VAR_18[0]) != 0;

  if (VAR_29 || VAR_30)
    {
      enum rtx_code VAR_32
 = VAR_29 ? VAR_2 : VAR_1;


      if (VAR_19
   || FUNC_0 (VAR_20) != VAR_0
   || FUNC_0 (FUNC_5 (VAR_20, 0)) != VAR_3
   || FUNC_11 (FUNC_6 (FUNC_5 (VAR_20, 0), 0),
       FUNC_1 (VAR_32)))
 {
   if (VAR_18[1] == '\0')
     FUNC_8 (VAR_23, "constraint letter '%c' is reserved "
          "for %s constraints",
          VAR_18[0], FUNC_1 (VAR_32));
   else
     FUNC_8 (VAR_23, "constraint names beginning with '%c' "
          "(%s) are reserved for %s constraints",
          VAR_18[0], VAR_18,
          FUNC_1 (VAR_32));

   VAR_12 = 1;
   return;
 }

      if (VAR_21)
 {
   if (VAR_18[1] == '\0')
     FUNC_8 (VAR_23, "constraint letter '%c' cannot be a "
          "memory constraint", VAR_18[0]);
   else
     FUNC_8 (VAR_23, "constraint name '%s' begins with '%c', "
          "and therefore cannot be a memory constraint",
          VAR_18, VAR_18[0]);

   VAR_12 = 1;
   return;
 }
      else if (VAR_22)
 {
   if (VAR_18[1] == '\0')
     FUNC_8 (VAR_23, "constraint letter '%c' cannot be a "
          "memory constraint", VAR_18[0]);
   else
     FUNC_8 (VAR_23, "constraint name '%s' begins with '%c', "
          "and therefore cannot be a memory constraint",
          VAR_18, VAR_18[0]);

   VAR_12 = 1;
   return;
 }
    }


  VAR_24 = FUNC_9 (VAR_17, sizeof (struct constraint_data));
  VAR_24->name = VAR_18;
  VAR_24->c_name = VAR_28 ? FUNC_7 (VAR_18) : VAR_18;
  VAR_24->lineno = VAR_23;
  VAR_24->namelen = VAR_31;
  VAR_24->regclass = VAR_19;
  VAR_24->exp = VAR_20;
  VAR_24->is_register = VAR_19 != 0;
  VAR_24->is_const_int = VAR_29;
  VAR_24->is_const_dbl = VAR_30;
  VAR_24->is_extra = !(VAR_19 || VAR_29 || VAR_30);
  VAR_24->is_memory = VAR_21;
  VAR_24->is_address = VAR_22;

  VAR_24->next_this_letter = *VAR_26;
  *VAR_26 = VAR_24;



  VAR_24->next_textual = 0;
  *VAR_16 = VAR_24;
  VAR_16 = &VAR_24->next_textual;

  VAR_6 = FUNC_4 (VAR_6, FUNC_12 (VAR_18));
  VAR_15 |= VAR_24->is_register;
  VAR_11 |= VAR_24->is_const_int;
  VAR_10 |= VAR_24->is_const_dbl;
  VAR_13 |= VAR_24->is_extra;
  VAR_14 |= VAR_24->is_memory;
  VAR_9 |= VAR_24->is_address;
}
