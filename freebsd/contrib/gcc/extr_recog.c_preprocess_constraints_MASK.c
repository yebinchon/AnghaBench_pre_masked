
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct operand_alternative {char const* constraint; int matches; int matched; int anything_ok; int reject; int earlyclobber; int memory_ok; int decmem_ok; int incmem_ok; int nonoffmem_ok; int offmem_ok; int is_address; void* cl; } ;
struct TYPE_2__ {int n_operands; int n_alternatives; char** constraints; } ;


 int VAR_0 ;
 int FUNC_0 (char,char const*) ;
 int FUNC_1 (char,char const*) ;
 int FUNC_2 (char,char const*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_3 (unsigned char,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct operand_alternative*,int ,int) ;
 TYPE_1__ VAR_5 ;
 struct operand_alternative** VAR_6 ;
 void*** VAR_7 ;
 int FUNC_6 (char const*,char**,int) ;

void
FUNC_7 (void)
{
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_5.n_operands; VAR_8++)
    FUNC_5 (VAR_6[VAR_8], 0, (VAR_5.n_alternatives
     * sizeof (struct operand_alternative)));

  for (VAR_8 = 0; VAR_8 < VAR_5.n_operands; VAR_8++)
    {
      int VAR_9;
      struct operand_alternative *VAR_10;
      const char *VAR_11 = VAR_5.constraints[VAR_8];

      VAR_10 = VAR_6[VAR_8];

      for (VAR_9 = 0; VAR_9 < VAR_5.n_alternatives; VAR_9++)
 {
   VAR_10[VAR_9].cl = VAR_2;
   VAR_10[VAR_9].constraint = VAR_11;
   VAR_10[VAR_9].matches = -1;
   VAR_10[VAR_9].matched = -1;

   if (*VAR_11 == '\0' || *VAR_11 == ',')
     {
       VAR_10[VAR_9].anything_ok = 1;
       continue;
     }

   for (;;)
     {
       char VAR_12 = *VAR_11;
       if (VAR_12 == '#')
  do
    VAR_12 = *++VAR_11;
  while (VAR_12 != ',' && VAR_12 != '\0');
       if (VAR_12 == ',' || VAR_12 == '\0')
  {
    VAR_11++;
    break;
  }

       switch (VAR_12)
  {
  case '=': case '+': case '*': case '%':
  case 'E': case 'F': case 'G': case 'H':
  case 's': case 'i': case 'n':
  case 'I': case 'J': case 'K': case 'L':
  case 'M': case 'N': case 'O': case 'P':

    break;

  case '?':
    VAR_10[VAR_9].reject += 6;
    break;
  case '!':
    VAR_10[VAR_9].reject += 600;
    break;
  case '&':
    VAR_10[VAR_9].earlyclobber = 1;
    break;

  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
    {
      char *VAR_13;
      VAR_10[VAR_9].matches = FUNC_6 (VAR_11, &VAR_13, 10);
      VAR_6[VAR_10[VAR_9].matches][VAR_9].matched = VAR_8;
      VAR_11 = VAR_13;
    }
    continue;

  case 'm':
    VAR_10[VAR_9].memory_ok = 1;
    break;
  case '<':
    VAR_10[VAR_9].decmem_ok = 1;
    break;
  case '>':
    VAR_10[VAR_9].incmem_ok = 1;
    break;
  case 'V':
    VAR_10[VAR_9].nonoffmem_ok = 1;
    break;
  case 'o':
    VAR_10[VAR_9].offmem_ok = 1;
    break;
  case 'X':
    VAR_10[VAR_9].anything_ok = 1;
    break;

  case 'p':
    VAR_10[VAR_9].is_address = 1;
    VAR_10[VAR_9].cl = VAR_7[(int) VAR_10[VAR_9].cl]
        [(int) FUNC_4 (VAR_4, VAR_0, VAR_3)];
    break;

  case 'g':
  case 'r':
    VAR_10[VAR_9].cl =
     VAR_7[(int) VAR_10[VAR_9].cl][(int) VAR_1];
    break;

  default:
    if (FUNC_2 (VAR_12, VAR_11))
      {
        VAR_10[VAR_9].memory_ok = 1;
        break;
      }
    if (FUNC_1 (VAR_12, VAR_11))
      {
        VAR_10[VAR_9].is_address = 1;
        VAR_10[VAR_9].cl
   = (VAR_7
      [(int) VAR_10[VAR_9].cl]
      [(int) FUNC_4 (VAR_4, VAR_0,
        VAR_3)]);
        break;
      }

    VAR_10[VAR_9].cl
      = (VAR_7
         [(int) VAR_10[VAR_9].cl]
         [(int) FUNC_3 ((unsigned char) VAR_12, VAR_11)]);
    break;
  }
       VAR_11 += FUNC_0 (VAR_12, VAR_11);
     }
 }
    }
}
