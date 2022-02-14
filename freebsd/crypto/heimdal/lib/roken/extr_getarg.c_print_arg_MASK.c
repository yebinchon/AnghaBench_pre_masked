
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getargs {scalar_t__ type; char const* arg_help; } ;


 scalar_t__ FUNC_0 (struct getargs) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static size_t
FUNC_4 (char *VAR_5,
    size_t VAR_6,
    int VAR_7,
    int VAR_8,
    struct getargs *VAR_9,
    char *(VAR_10)(const char *))
{
    const char *VAR_11;

    *VAR_5 = '\0';

    if (FUNC_0(*VAR_9) || (!VAR_8 && VAR_9->type == VAR_0))
 return 0;

    if(VAR_7){
 if(VAR_8)
     FUNC_1(VAR_5, "= Ns", VAR_6);
 FUNC_1(VAR_5, " Ar ", VAR_6);
    } else {
 if (VAR_8)
     FUNC_1 (VAR_5, "=", VAR_6);
 else
     FUNC_1 (VAR_5, " ", VAR_6);
    }

    if (VAR_9->arg_help)
 VAR_11 = (*VAR_10)(VAR_9->arg_help);
    else if (VAR_9->type == VAR_2 || VAR_9->type == VAR_0)
 VAR_11 = "integer";
    else if (VAR_9->type == VAR_3)
 VAR_11 = "string";
    else if (VAR_9->type == VAR_4)
 VAR_11 = "strings";
    else if (VAR_9->type == VAR_1)
 VAR_11 = "float";
    else
 VAR_11 = "<undefined>";

    FUNC_1(VAR_5, VAR_11, VAR_6);
    return 1 + FUNC_2(VAR_11);
}
