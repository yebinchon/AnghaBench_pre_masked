
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* CommentType; int * ParsingParenBraceNode; scalar_t__ SpacesBefore; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (char*) ;

void
FUNC_1 (
    char VAR_6)
{

    if (VAR_6 != ' ')
    {
        VAR_5.SpacesBefore = 0;
    }

    switch (VAR_6)
    {
    case '\n':

        VAR_5.CommentType = VAR_4;
        break;

    case ' ':



        VAR_5.SpacesBefore++;
        break;

    case '(':

        VAR_5.CommentType = VAR_3;
        break;

    case ')':

        VAR_5.CommentType = VAR_2;
        break;

    case '{':

        VAR_5.CommentType = VAR_4;
        VAR_5.ParsingParenBraceNode = ((void*)0);
        FUNC_0 ("End Parsing paren/Brace node!\n");
        break;

    case '}':

        VAR_5.CommentType = VAR_1;
        break;

    case ',':

        VAR_5.CommentType = VAR_0;
        break;

    default:

        VAR_5.CommentType = VAR_0;
        break;
    }
}
