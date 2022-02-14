
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {unsigned int lineno; char* str; int type; struct command* next; } ;
typedef int s ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct command* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char*,char*) ;
 struct command** VAR_3 ;
 size_t FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_4)
{
    struct command *VAR_5;
    char VAR_6[1024];
    char *VAR_7;
    unsigned int VAR_8 = 0;
    FILE *VAR_9;

    VAR_9 = FUNC_5(VAR_4, "r");
    if (VAR_9 == ((void*)0))
 FUNC_1(1, "open: %s", VAR_4);

    while (FUNC_4(VAR_6, sizeof(VAR_6), VAR_9) != ((void*)0)) {

 VAR_6[FUNC_7(VAR_6, "#\n")] = '\0';
 VAR_8++;

 VAR_5 = FUNC_0(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
     FUNC_2(1, "malloc");

 VAR_5->lineno = VAR_8;
 (*VAR_3) = VAR_5;
 VAR_3 = &(VAR_5->next);

 if ((VAR_7 = FUNC_6(VAR_6, "expect ")) != ((void*)0)) {
     VAR_5->type = VAR_0;
     VAR_5->str = VAR_7;
 } else if ((VAR_7 = FUNC_6(VAR_6, "send ")) != ((void*)0)) {
     VAR_5->type = VAR_2;
     VAR_5->str = VAR_7;
 } else if ((VAR_7 = FUNC_6(VAR_6, "password ")) != ((void*)0)) {
     VAR_5->type = VAR_1;
     VAR_5->str = VAR_7;
 } else
     FUNC_2(1, "Invalid command on line %d: %s", VAR_8, VAR_6);
    }

    FUNC_3(VAR_9);
}
