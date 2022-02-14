
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
typedef int krb5_context ;


 int FUNC_0 (int ,int,int,char const*) ;
 int FUNC_1 (int ) ;
 struct servent* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static void
FUNC_4 (krb5_context VAR_0,
   int VAR_1, const char *VAR_2, const char *VAR_3)
{
    struct servent *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_2 (VAR_2, VAR_3);
    if (VAR_4 != ((void*)0)) {
 VAR_5 = VAR_4->s_port;
    } else {
 char *VAR_6;

 VAR_5 = FUNC_1(FUNC_3(VAR_2, &VAR_6, 0));
 if (VAR_6 == VAR_2)
     return;
    }
    FUNC_0 (VAR_0, VAR_1, VAR_5, VAR_3);
}
