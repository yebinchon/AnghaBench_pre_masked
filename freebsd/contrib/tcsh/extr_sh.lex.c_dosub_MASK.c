
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* prev; int * word; struct wordent* next; } ;
struct Hist {struct wordent Hlex; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 struct Hist* FUNC_2 (int ,struct wordent*,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ,int*,size_t*) ;
 struct wordent* FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct wordent *
FUNC_7(Char VAR_6, struct wordent *VAR_7, int VAR_8)
{
    struct wordent VAR_9;
    int VAR_10 = 0, VAR_11 = 0;
    struct wordent *VAR_12 = &VAR_9;
    struct wordent *VAR_13;
    int VAR_14 = VAR_5;
    struct Hist *VAR_15;

    VAR_13 = VAR_12;
    while (--VAR_14 >= 0) {
 struct wordent *VAR_16 = FUNC_5(1, sizeof *VAR_13);

 VAR_16->word = 0;
 VAR_16->prev = VAR_13;
 VAR_16->next = VAR_12;
 VAR_13->next = VAR_16;
 VAR_13 = VAR_16;
 VAR_7 = VAR_7->next;
 if (VAR_7->word) {
     Char *VAR_17, *VAR_18;

     if ((VAR_8 & VAR_2) || VAR_10 == 0) {
  size_t VAR_19;

  VAR_19 = 0;
  VAR_17 = FUNC_4(VAR_7->word, VAR_6, &VAR_11, &VAR_19);
  if (VAR_11)
      VAR_10 = 1;
  if (VAR_8 & VAR_1) {
      while (VAR_11 && VAR_17 != VAR_4) {
   VAR_18 = VAR_17;
   VAR_17 = FUNC_4(VAR_18, VAR_6, &VAR_11, &VAR_19);
   if (FUNC_0(VAR_17, VAR_18) == 0) {
       FUNC_6(VAR_18);
       break;
   }
   else
       FUNC_6(VAR_18);
      }
  }
     }
     else
  VAR_17 = FUNC_1(VAR_7->word);
     VAR_13->word = VAR_17;
 }
    }
    if (VAR_10 == 0)
 FUNC_3(VAR_0);
    VAR_12->prev = VAR_13;




    VAR_15 = FUNC_2(VAR_3, &VAR_9, 0, 0, -1);
    return &(VAR_15->Hlex);
}
