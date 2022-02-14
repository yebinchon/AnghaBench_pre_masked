
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ type_kind_t ;
struct work_stuff {int dummy; } ;
struct TYPE_14__ {int b; } ;
typedef TYPE_1__ string ;
typedef int buf ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct work_stuff*,char const**,TYPE_1__*) ;
 char* FUNC_5 (char const) ;
 int FUNC_6 (struct work_stuff*,char const**,TYPE_1__*,int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct work_stuff*) ;
 int FUNC_9 (struct work_stuff*,int ,int ,int) ;
 int FUNC_10 (char*,char*,unsigned int) ;
 int FUNC_11 (char*,char*,unsigned int*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,char*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char*,char const*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_19 (struct work_stuff *VAR_6,
                    const char **VAR_7, string *VAR_8)
{
  int VAR_9 = 0;
  int VAR_10 = 1;
  char VAR_11[VAR_0 + 5 ];
  unsigned int VAR_12 = 0;
  type_kind_t VAR_13 = VAR_4;



  while (!VAR_9)
    {
      switch (**VAR_7)
 {
 case 'C':
 case 'V':
 case 'u':
   if (VAR_1)
     {
              if (!FUNC_3 (VAR_8))
                FUNC_16 (VAR_8, " ");
       FUNC_16 (VAR_8, FUNC_5 (**VAR_7));
     }
   (*VAR_7)++;
   break;
 case 'U':
   (*VAR_7)++;
   FUNC_0 (VAR_8);
   FUNC_12 (VAR_8, "unsigned");
   break;
 case 'S':
   (*VAR_7)++;
   FUNC_0 (VAR_8);
   FUNC_12 (VAR_8, "signed");
   break;
 case 'J':
   (*VAR_7)++;
   FUNC_0 (VAR_8);
   FUNC_12 (VAR_8, "__complex");
   break;
 default:
   VAR_9 = 1;
   break;
 }
    }



  switch (**VAR_7)
    {
    case '\0':
    case '_':
      break;
    case 'v':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "void");
      break;
    case 'x':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "long long");
      break;
    case 'l':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "long");
      break;
    case 'i':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "int");
      break;
    case 's':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "short");
      break;
    case 'b':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "bool");
      VAR_13 = VAR_2;
      break;
    case 'c':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "char");
      VAR_13 = VAR_3;
      break;
    case 'w':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "wchar_t");
      VAR_13 = VAR_3;
      break;
    case 'r':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "long double");
      VAR_13 = VAR_5;
      break;
    case 'd':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "double");
      VAR_13 = VAR_5;
      break;
    case 'f':
      (*VAR_7)++;
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, "float");
      VAR_13 = VAR_5;
      break;
    case 'G':
      (*VAR_7)++;
      if (!FUNC_1 ((unsigned char)**VAR_7))
 {
   VAR_10 = 0;
   break;
 }
    case 'I':
      (*VAR_7)++;
      if (**VAR_7 == '_')
 {
   int VAR_14;
   (*VAR_7)++;
   for (VAR_14 = 0;
        VAR_14 < (long) sizeof (VAR_11) - 1 && **VAR_7 && **VAR_7 != '_';
        (*VAR_7)++, VAR_14++)
     VAR_11[VAR_14] = **VAR_7;
   if (**VAR_7 != '_')
     {
       VAR_10 = 0;
       break;
     }
   VAR_11[VAR_14] = '\0';
   (*VAR_7)++;
 }
      else
 {
   FUNC_18 (VAR_11, *VAR_7, 2);
   VAR_11[2] = '\0';
   *VAR_7 += FUNC_7 (FUNC_17 (*VAR_7), 2);
 }
      FUNC_11 (VAR_11, "%x", &VAR_12);
      FUNC_10 (VAR_11, "int%u_t", VAR_12);
      FUNC_0 (VAR_8);
      FUNC_12 (VAR_8, VAR_11);
      break;



    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {
        int VAR_15 = FUNC_8 (VAR_6);
        string VAR_16;
        FUNC_15 (&VAR_16);
        if (FUNC_4 (VAR_6, VAR_7, &VAR_16)) {
          FUNC_9 (VAR_6, VAR_16.b, FUNC_2 (&VAR_16), VAR_15);
          FUNC_0 (VAR_8);
          FUNC_13 (VAR_8, &VAR_16);
        }
        else
          VAR_10 = 0;
        FUNC_14 (&VAR_16);
        break;
      }
    case 't':
      {
        string VAR_17;
        FUNC_15 (&VAR_17);
        VAR_10 = FUNC_6 (VAR_6, VAR_7, &VAR_17, 0, 1, 1);
        FUNC_13 (VAR_8, &VAR_17);
        FUNC_14 (&VAR_17);
        break;
      }
    default:
      VAR_10 = 0;
      break;
    }

  return VAR_10 ? ((int) VAR_13) : 0;
}
