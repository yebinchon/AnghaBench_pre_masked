
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct arm64_insn {char* name; char* format; int mask; int pattern; TYPE_1__* tokens; } ;
struct TYPE_2__ {char* name; int pos; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int*) ;

__attribute__((used)) static void
FUNC_3(struct arm64_insn *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 char *VAR_12;
 int VAR_13;

 while (VAR_4->name != ((void*)0)) {
  VAR_5 = 0;
  VAR_6 = 0;
  VAR_12 = VAR_4->format;
  VAR_11 = 0;
  VAR_13 = 0;





  VAR_7 = (VAR_2 * VAR_3) - 1;
  while (*VAR_12 != '\0' && (VAR_7 >= 0)) {
   switch(*VAR_12) {
   case '0':

    VAR_5 |= (1 << VAR_7);
    VAR_7--;
    VAR_12++;
    break;
   case '1':

    VAR_5 |= (1 << VAR_7);
    VAR_6 |= (1 << VAR_7);
    VAR_7--;
    VAR_12++;
    break;
   case '|':

    VAR_12++;
    break;
   default:

    FUNC_0(VAR_4->tokens[VAR_11].name, 0,
        sizeof(VAR_4->tokens[VAR_11].name));
    VAR_8 = 0;
    while (*VAR_12 != '(') {
     VAR_4->tokens[VAR_11].name[VAR_8] = *VAR_12;
     VAR_8++;
     VAR_12++;
     if (VAR_8 >= VAR_1) {
      FUNC_1("ERROR: token too long in op %s\n",
          VAR_4->name);
      VAR_13 = 1;
      break;
     }
    }
    if (VAR_13 != 0)
     break;


    VAR_10 = FUNC_2(VAR_12, "(%d)", &VAR_9);
    if (VAR_10 == 1) {
     if (VAR_11 >= VAR_0) {
      FUNC_1("ERROR: to many tokens in op %s\n",
          VAR_4->name);
      VAR_13 = 1;
      break;
     }

     VAR_7 -= VAR_9;
     VAR_4->tokens[VAR_11].pos = VAR_7 + 1;
     VAR_4->tokens[VAR_11].len = VAR_9;
     VAR_11++;
    }


    while (*VAR_12 != 0 && *VAR_12 != '|')
     VAR_12++;
   }
  }


  VAR_4->mask = VAR_5;
  VAR_4->pattern = VAR_6;







  if (*VAR_12 != 0 || (VAR_7 != -1) || (VAR_13 != 0)) {
   VAR_4->mask = 0;
   VAR_4->pattern = 0xffffffff;
   FUNC_1("ERROR: skipping instruction op %s\n",
       VAR_4->name);
  }

  VAR_4++;
 }
}
