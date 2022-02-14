
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Token ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static Token
FUNC_2(Boolean VAR_9)
{
    Token VAR_10;

    VAR_10 = VAR_8;
    if (VAR_10 != VAR_3) {
 VAR_8 = VAR_3;
 return VAR_10;
    }

    while (*VAR_7 == ' ' || *VAR_7 == '\t') {
 VAR_7++;
    }

    switch (*VAR_7) {

    case '(':
 VAR_7++;
 return VAR_2;

    case ')':
 VAR_7++;
 return VAR_6;

    case '|':
 if (VAR_7[1] == '|') {
     VAR_7++;
 }
 VAR_7++;
 return VAR_5;

    case '&':
 if (VAR_7[1] == '&') {
     VAR_7++;
 }
 VAR_7++;
 return VAR_0;

    case '!':
 VAR_7++;
 return VAR_4;

    case '#':
    case '\n':
    case '\0':
 return VAR_1;

    case '"':
    case '$':
 return FUNC_0(VAR_9);

    default:
 return FUNC_1(VAR_9);
    }
}
