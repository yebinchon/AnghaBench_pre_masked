
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wordent {char* word; struct wordent* next; } ;
struct TYPE_3__ {struct wordent* next; } ;
struct Hist {scalar_t__ Hnum; TYPE_1__ Hlex; struct Hist* Hnext; } ;
struct TYPE_4__ {struct Hist* Hnext; } ;
typedef char Char ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct Hist *
FUNC_2(Char *VAR_3, int VAR_4)
{
    struct Hist *VAR_5;

    for (VAR_5 = VAR_1.Hnext; VAR_5; VAR_5 = VAR_5->Hnext) {
 Char *VAR_6;
 Char *VAR_7, *VAR_8;
 struct wordent *VAR_9 = VAR_5->Hlex.next;
 int VAR_10 = 0;







 if (VAR_5->Hnum < 0)
     continue;
 if (VAR_9->word[0] == '\n')
     continue;
 if (!VAR_4) {
     VAR_7 = VAR_3;
     VAR_8 = VAR_9->word;
     do
  if (!*VAR_7)
      return (VAR_5);
     while (*VAR_7++ == *VAR_8++);
     continue;
 }
 do {
     for (VAR_6 = VAR_9->word; *VAR_6; VAR_6++) {
  VAR_7 = VAR_3;
  VAR_8 = VAR_6;
  do
      if (!*VAR_7) {
   VAR_2 = VAR_10;
   return (VAR_5);
      }
  while (*VAR_7++ == *VAR_8++);
     }
     VAR_9 = VAR_9->next;
     VAR_10++;
 } while (VAR_9->word[0] != '\n');
    }
    FUNC_0(VAR_0, FUNC_1(VAR_3));
    return (0);
}
