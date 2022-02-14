
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct quoting_options {int* quote_these_too; } ;
typedef int mbstate_t ;
typedef enum quoting_style { ____Placeholder_quoting_style } quoting_style ;



 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;



 char* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

 size_t FUNC_5 (int *,char const*,int ,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,char const*,size_t) ;
 int FUNC_8 (int *,int ,int) ;


 size_t FUNC_9 (char const*) ;

__attribute__((used)) static size_t
FUNC_10 (char *VAR_2, size_t VAR_3,
     char const *VAR_4, size_t VAR_5,
     enum quoting_style VAR_6,
     struct quoting_options const *VAR_7)
{
  size_t VAR_8;
  size_t VAR_9 = 0;
  char const *VAR_10 = 0;
  size_t VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = VAR_1 == 1;
  switch (VAR_6)
    {
    case 133:
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('"'); VAR_9++; } while (0);
      VAR_12 = 1;
      VAR_10 = "\"";
      VAR_11 = 1;
      break;

    case 131:
      VAR_12 = 1;
      break;

    case 130:
    case 132:
      {
 char const *VAR_14 = FUNC_3 (FUNC_1("`"), VAR_6);
 char const *VAR_15 = FUNC_3 (FUNC_1("'"), VAR_6);
 for (VAR_10 = VAR_14; *VAR_10; VAR_10++)
   do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = (*VAR_10); VAR_9++; } while (0);
 VAR_12 = 1;
 VAR_10 = VAR_15;
 VAR_11 = FUNC_9 (VAR_10);
      }
      break;

    case 129:
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\''); VAR_9++; } while (0);
      VAR_10 = "'";
      VAR_11 = 1;
      break;

    default:
      break;
    }

  for (VAR_8 = 0; ! (VAR_5 == (size_t) -1 ? VAR_4[VAR_8] == '\0' : VAR_8 == VAR_5); VAR_8++)
    {
      unsigned char VAR_16;
      unsigned char VAR_17;

      if (VAR_12
   && VAR_11
   && VAR_8 + VAR_11 <= VAR_5
   && FUNC_7 (VAR_4 + VAR_8, VAR_10, VAR_11) == 0)
 do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\\'); VAR_9++; } while (0);

      VAR_16 = VAR_4[VAR_8];
      switch (VAR_16)
 {
 case '?':
   switch (VAR_6)
     {
     case 128:
       goto use_shell_always_quoting_style;

     case 133:
       if (VAR_8 + 2 < VAR_5 && VAR_4[VAR_8 + 1] == '?')
  switch (VAR_4[VAR_8 + 2])
    {
    case '!': case '\'':
    case '(': case ')': case '-': case '/':
    case '<': case '=': case '>':


      VAR_8 += 2;
      VAR_16 = VAR_4[VAR_8 + 2];
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('?'); VAR_9++; } while (0);
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\\'); VAR_9++; } while (0);
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('?'); VAR_9++; } while (0);
      break;
    }
       break;

     default:
       break;
     }
   break;

 case 134: VAR_17 = 'a'; goto c_escape;
 case '\b': VAR_17 = 'b'; goto c_escape;
 case '\f': VAR_17 = 'f'; goto c_escape;
 case '\n': VAR_17 = 'n'; goto c_and_shell_escape;
 case '\r': VAR_17 = 'r'; goto c_and_shell_escape;
 case '\t': VAR_17 = 't'; goto c_and_shell_escape;
 case '\v': VAR_17 = 'v'; goto c_escape;
 case '\\': VAR_17 = VAR_16; goto c_and_shell_escape;

 c_and_shell_escape:
   if (VAR_6 == 128)
     goto use_shell_always_quoting_style;
 c_escape:
   if (VAR_12)
     {
       VAR_16 = VAR_17;
       goto store_escape;
     }
   break;

 case '#': case '~':
   if (VAR_8 != 0)
     break;

 case ' ':
 case '!':
 case '"': case '$': case '&':
 case '(': case ')': case '*': case ';':
 case '<': case '>': case '[':
 case '^':
 case '`': case '|':




   if (VAR_6 == 128)
     goto use_shell_always_quoting_style;
   break;

 case '\'':
   switch (VAR_6)
     {
     case 128:
       goto use_shell_always_quoting_style;

     case 129:
       do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\''); VAR_9++; } while (0);
       do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\\'); VAR_9++; } while (0);
       do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\''); VAR_9++; } while (0);
       break;

     default:
       break;
     }
   break;

 case '%': case '+': case ',': case '-': case '.': case '/':
 case '0': case '1': case '2': case '3': case '4': case '5':
 case '6': case '7': case '8': case '9': case ':': case '=':
 case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
 case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
 case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
 case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
 case 'Y': case 'Z': case ']': case '_': case 'a': case 'b':
 case 'c': case 'd': case 'e': case 'f': case 'g': case 'h':
 case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
 case 'o': case 'p': case 'q': case 'r': case 's': case 't':
 case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
 case '{': case '}':


   break;

 default:





   {

     size_t VAR_18;

     int VAR_19;

     if (VAR_13)
       {
  VAR_18 = 1;
  VAR_19 = FUNC_0 (VAR_16);
       }
     else
       {
  mbstate_t VAR_20;
  FUNC_8 (&VAR_20, 0, sizeof VAR_20);

  VAR_18 = 0;
  VAR_19 = 1;
  if (VAR_5 == (size_t) -1)
    VAR_5 = FUNC_9 (VAR_4);

  do
    {
      wchar_t VAR_21;
      size_t VAR_22 = FUNC_5 (&VAR_21, &VAR_4[VAR_8 + VAR_18],
         VAR_5 - (VAR_8 + VAR_18), &VAR_20);
      if (VAR_22 == 0)
        break;
      else if (VAR_22 == (size_t) -1)
        {
   VAR_19 = 0;
   break;
        }
      else if (VAR_22 == (size_t) -2)
        {
   VAR_19 = 0;
   while (VAR_8 + VAR_18 < VAR_5 && VAR_4[VAR_8 + VAR_18])
     VAR_18++;
   break;
        }
      else
        {
   if (! FUNC_4 (VAR_21))
     VAR_19 = 0;
   VAR_18 += VAR_22;
        }
    }
  while (! FUNC_6 (&VAR_20));
       }

     if (1 < VAR_18 || (VAR_12 && ! VAR_19))
       {


  size_t VAR_23 = VAR_8 + VAR_18;

  for (;;)
    {
      if (VAR_12 && ! VAR_19)
        {
   do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\\'); VAR_9++; } while (0);
   do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('0' + (VAR_16 >> 6)); VAR_9++; } while (0);
   do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('0' + ((VAR_16 >> 3) & 7)); VAR_9++; } while (0);
   VAR_16 = '0' + (VAR_16 & 7);
        }
      if (VAR_23 <= VAR_8 + 1)
        break;
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = (VAR_16); VAR_9++; } while (0);
      VAR_16 = VAR_4[++VAR_8];
    }

  goto store_c;
       }
   }
 }

      if (! (VAR_12
      && VAR_7->quote_these_too[VAR_16 / VAR_0] & (1 << (VAR_16 % VAR_0))))
 goto store_c;

    store_escape:
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = ('\\'); VAR_9++; } while (0);

    store_c:
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = (VAR_16); VAR_9++; } while (0);
    }

  if (VAR_10)
    for (; *VAR_10; VAR_10++)
      do { if (VAR_9 < VAR_3) VAR_2[VAR_9] = (*VAR_10); VAR_9++; } while (0);

  if (VAR_9 < VAR_3)
    VAR_2[VAR_9] = '\0';
  return VAR_9;

 use_shell_always_quoting_style:
  return FUNC_10 (VAR_2, VAR_3, VAR_4, VAR_5,
       129, VAR_7);
}
