
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* next; struct wordent* prev; int word; } ;
struct command {struct command* next; struct command* prev; int word; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct wordent*) ;
 int FUNC_2 (struct wordent*,int ) ;
 int FUNC_3 (struct wordent*) ;
 int FUNC_4 (struct wordent*,int,int *,int *,int ) ;
 int FUNC_5 (struct wordent*) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ) ;
 struct wordent* FUNC_8 (struct wordent*,struct wordent*,int ) ;
 int VAR_7 ;
 struct wordent* FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(Char **VAR_8)
{
    struct wordent VAR_9;
    struct wordent *VAR_10 = &VAR_9;
    struct command *VAR_11;
    struct wordent *VAR_12 = VAR_10;

    FUNC_6(VAR_2, VAR_1, VAR_4);
    FUNC_5(VAR_10);
    while (*VAR_8) {
 struct wordent *VAR_13 = FUNC_9(1, sizeof *VAR_12);

 VAR_13->prev = VAR_12;
 VAR_13->next = VAR_10;
 VAR_12->next = VAR_13;
 VAR_12 = VAR_13;
 VAR_12->word = FUNC_0(*VAR_8++);
    }
    VAR_10->prev = VAR_12;
    FUNC_2(&VAR_9, VAR_5);
    FUNC_1(&VAR_9);
    VAR_11 = FUNC_8(VAR_9, &VAR_9, 0);
    FUNC_2(VAR_11, VAR_7);
    if (VAR_6)
 FUNC_7(VAR_0);
    FUNC_4(VAR_11, -1, ((void*)0), ((void*)0), VAR_3);
    FUNC_3(&VAR_9);
}
