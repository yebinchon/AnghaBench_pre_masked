
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wordent {char* word; struct wordent* prev; struct wordent* next; } ;
typedef char eChar ;
struct TYPE_3__ {int len; char* s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wordent*) ;
 int FUNC_3 (struct wordent*,int ) ;
 int FUNC_4 (struct wordent*) ;
 int VAR_3 ;
 int FUNC_5 (char) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char) ;
 char* FUNC_9 (int) ;
 struct wordent* FUNC_10 (int) ;

int
FUNC_11(struct wordent *VAR_11)
{
    struct wordent *VAR_12;
    eChar VAR_13;
    int VAR_14 = VAR_3;
    int VAR_15 = 0;

    VAR_6 = 0;
    VAR_5.len = 0;

    if (!VAR_10)
 FUNC_1(&VAR_9);
    VAR_11->next = VAR_11->prev = VAR_11;
    VAR_11->word = VAR_2;
    VAR_4 = 0;
    do
 VAR_13 = FUNC_6(0);
    while (VAR_13 == ' ' || VAR_13 == '\t');
    if (VAR_13 == (eChar)VAR_1 && VAR_7)

 FUNC_5(VAR_13);
    else
 FUNC_8(VAR_13);
    FUNC_3(VAR_11, VAR_8);
    VAR_12 = VAR_11;




    do {
 struct wordent *VAR_16;

 VAR_16 = FUNC_10(sizeof(*VAR_16));
 VAR_16->word = ((void*)0);
 VAR_16->prev = VAR_12;
 VAR_16->next = VAR_11;
 VAR_12->next = VAR_16;
 VAR_11->prev = VAR_16;
 VAR_12 = VAR_16;
 VAR_12->word = FUNC_9(VAR_14);
 VAR_14 = 0;
 if (VAR_3 && VAR_15++ > 10 * 1024)
     FUNC_7(VAR_0);
    } while (VAR_12->word[0] != '\n');
    FUNC_2(VAR_11);
    FUNC_4(VAR_11);
    FUNC_0(&VAR_5);
    if (VAR_5.len != 0 && VAR_5.s[VAR_5.len - 1] == '\n')
 VAR_5.s[VAR_5.len - 1] = '\0';
    VAR_6 = 1;

    return (VAR_4);
}
