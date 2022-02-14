
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_token {char code; char* str; int const* reg; } ;
typedef int reg_entry ;
struct TYPE_2__ {char* op_string; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 void* VAR_4 ;
 char VAR_5 ;
 void* VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 void* VAR_10 ;
 char VAR_11 ;
 void* VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 struct intel_token VAR_16 ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_17 ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,char*,size_t) ;
 int * FUNC_6 (float*,char**) ;
 struct intel_token VAR_18 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13 (void)
{
  char *VAR_19;
  const reg_entry *VAR_20;
  struct intel_token VAR_21;

  VAR_21.code = VAR_5;
  VAR_21.reg = ((void*)0);
  VAR_21.str = ((void*)0);



  if (VAR_18.str)
    FUNC_2 (VAR_18.str);

  VAR_18 = VAR_16;


  while (FUNC_4 (*VAR_17.op_string))
    VAR_17.op_string++;


  if (*VAR_17.op_string == '\0')
    {
      VAR_16 = VAR_21;
      return;
    }



  VAR_21.str = (char *) FUNC_12 (FUNC_10 (VAR_17.op_string) + 1);
  VAR_21.str[0] = '\0';

  if (FUNC_9 ("0123456789", *VAR_17.op_string))
    {
      char *VAR_22 = VAR_21.str;
      char *VAR_23 = VAR_17.op_string;
      VAR_21.code = VAR_1;



      while (FUNC_3 (*VAR_23))
 *VAR_22++ = *VAR_23++;
      *VAR_22 = '\0';


      if (FUNC_10 (VAR_17.op_string) == 2
   && (VAR_17.op_string[1] == 'b'
       || VAR_17.op_string[1] == 'f'))
 VAR_21.code = VAR_4;
    }

  else if ((VAR_20 = FUNC_6 (VAR_17.op_string, &VAR_19)) != ((void*)0))
    {
      size_t VAR_24 = VAR_19 - VAR_17.op_string;

      VAR_21.code = VAR_9;
      VAR_21.reg = VAR_20;

      FUNC_5 (VAR_21.str, VAR_17.op_string, VAR_24);
      VAR_21.str[VAR_24] = '\0';
    }

  else if (FUNC_3 (*VAR_17.op_string))
    {
      char *VAR_25 = VAR_21.str;
      char *VAR_26 = VAR_17.op_string;



      if ((*VAR_26 == '.' || *VAR_26 == '$') && !FUNC_3 (*(VAR_26 + 1)))
 {
   VAR_21.code = '.';
   VAR_21.str[0] = '.';
   VAR_21.str[1] = '\0';
 }
      else
 {
   while (FUNC_3 (*VAR_26) || *VAR_26 == '@')
     *VAR_25++ = *VAR_26++;
   *VAR_25 = '\0';

   if (FUNC_7 (VAR_21.str, "NOT") == 0)
     VAR_21.code = '~';

   else if (FUNC_7 (VAR_21.str, "MOD") == 0)
     VAR_21.code = '%';

   else if (FUNC_7 (VAR_21.str, "AND") == 0)
     VAR_21.code = '&';

   else if (FUNC_7 (VAR_21.str, "OR") == 0)
     VAR_21.code = '|';

   else if (FUNC_7 (VAR_21.str, "XOR") == 0)
     VAR_21.code = '^';

   else if (FUNC_7 (VAR_21.str, "SHL") == 0)
     VAR_21.code = VAR_10;

   else if (FUNC_7 (VAR_21.str, "SHR") == 0)
     VAR_21.code = VAR_12;

   else if (FUNC_7 (VAR_21.str, "BYTE") == 0)
     VAR_21.code = VAR_0;

   else if (FUNC_7 (VAR_21.str, "WORD") == 0)
     VAR_21.code = VAR_14;

   else if (FUNC_7 (VAR_21.str, "DWORD") == 0)
     VAR_21.code = VAR_2;

   else if (FUNC_7 (VAR_21.str, "FWORD") == 0)
     VAR_21.code = VAR_3;

   else if (FUNC_7 (VAR_21.str, "QWORD") == 0)
     VAR_21.code = VAR_8;

   else if (FUNC_7 (VAR_21.str, "TBYTE") == 0

     || FUNC_7 (VAR_21.str, "XWORD") == 0)
     VAR_21.code = VAR_13;

   else if (FUNC_7 (VAR_21.str, "XMMWORD") == 0
     || FUNC_7 (VAR_21.str, "OWORD") == 0)
     VAR_21.code = VAR_15;

   else if (FUNC_7 (VAR_21.str, "PTR") == 0)
     VAR_21.code = VAR_7;

   else if (FUNC_7 (VAR_21.str, "SHORT") == 0)
     VAR_21.code = VAR_11;

   else if (FUNC_7 (VAR_21.str, "OFFSET") == 0)
     {
       VAR_21.code = VAR_6;




       if (FUNC_11 (VAR_26, " FLAT:", 6) == 0)
  FUNC_8 (VAR_21.str, " FLAT:");
     }


   else if (FUNC_7 (VAR_21.str, "FLAT") == 0)
     {
       VAR_21.code = VAR_6;
       if (*VAR_26 == ':')
  FUNC_8 (VAR_21.str, ":");
       else
  FUNC_1 (FUNC_0("`:' expected"));
     }

   else
     VAR_21.code = VAR_4;
 }
    }

  else if (FUNC_9 ("+-/*%|&^:[]()~", *VAR_17.op_string))
    {
      VAR_21.code = *VAR_17.op_string;
      VAR_21.str[0] = *VAR_17.op_string;
      VAR_21.str[1] = '\0';
    }

  else if (FUNC_9 ("<>", *VAR_17.op_string)
    && *VAR_17.op_string == *(VAR_17.op_string + 1))
    {
      VAR_21.code = *VAR_17.op_string == '<' ? VAR_10 : VAR_12;
      VAR_21.str[0] = *VAR_17.op_string;
      VAR_21.str[1] = *VAR_17.op_string;
      VAR_21.str[2] = '\0';
    }

  else
    FUNC_1 (FUNC_0("Unrecognized token `%s'"), VAR_17.op_string);

  VAR_17.op_string += FUNC_10 (VAR_21.str);
  VAR_16 = VAR_21;
}
