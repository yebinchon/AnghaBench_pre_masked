
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 char* FUNC_2 () ;
 int VAR_0 ;

void
FUNC_3(void)
{
 const char *VAR_1 = FUNC_2();

 (void)FUNC_1(VAR_0,
"usage: %s [-46AadefginpRtVv] [-N netrc] [-o outfile] [-P port] [-q quittime]\n"
"           [-r retry] [-s srcaddr] [-T dir,max[,inc]]\n"
"           [[user@]host [port]] [host:path[/]] [file:///file]\n"
"           [ftp://[user[:pass]@]host[:port]/path[/]]\n"
"           [http://[user[:pass]@]host[:port]/path] [...]\n"
"       %s -u URL file [...]\n", VAR_1, VAR_1);
 FUNC_0(1);
}
