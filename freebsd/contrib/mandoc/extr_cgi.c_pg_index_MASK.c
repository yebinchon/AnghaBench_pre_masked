
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*,char*) ;
 int FUNC_1 (int,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct req const*,int ) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_4(const struct req *VAR_2)
{

 FUNC_1(200, ((void*)0), ((void*)0));
 FUNC_3(VAR_2, VAR_0);
 FUNC_0("<p>\n"
        "This web interface is documented in the\n"
        "<a class=\"Xr\" href=\"/%s%sman.cgi.8\">man.cgi(8)</a>\n"
        "manual, and the\n"
        "<a class=\"Xr\" href=\"/%s%sapropos.1\">apropos(1)</a>\n"
        "manual explains the query syntax.\n"
        "</p>\n",
        VAR_1, *VAR_1 == '\0' ? "" : "/",
        VAR_1, *VAR_1 == '\0' ? "" : "/");
 FUNC_2();
}
