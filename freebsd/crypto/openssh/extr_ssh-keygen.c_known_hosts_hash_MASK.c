
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct known_hosts_ctx {int has_unhashed; int invalid; int out; } ;
struct hostkey_foreach_line {int status; char* line; char* rawkey; int linenum; int path; int * hosts; int marker; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,int ,int ,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *) ;
 char* FUNC_8 (char**,char*) ;
 char* FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct hostkey_foreach_line *VAR_3, void *VAR_4)
{
 struct known_hosts_ctx *VAR_5 = (struct known_hosts_ctx *)VAR_4;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 int VAR_10 = VAR_3->hosts && FUNC_6(VAR_3->hosts, "*?!") != FUNC_7(VAR_3->hosts);
 int VAR_11 = VAR_3->hosts && VAR_3->hosts[0] == VAR_0;

 switch (VAR_3->status) {
 case 128:
 case 129:




  if (VAR_11 || VAR_10 || VAR_3->marker != VAR_1) {
   FUNC_1(VAR_5->out, "%s\n", VAR_3->line);
   if (VAR_10 && !VAR_2) {
    FUNC_4("%s:%lu: ignoring host name "
        "with wildcard: %.64s", VAR_3->path,
        VAR_3->linenum, VAR_3->hosts);
   }
   return 0;
  }




  VAR_9 = VAR_8 = FUNC_9(VAR_3->hosts);
  while ((VAR_7 = FUNC_8(&VAR_8, ",")) != ((void*)0) && *VAR_7 != '\0') {
   FUNC_5(VAR_7);
   if ((VAR_6 = FUNC_3(VAR_7, ((void*)0), 0)) == ((void*)0))
    FUNC_0("hash_host failed");
   FUNC_1(VAR_5->out, "%s %s\n", VAR_6, VAR_3->rawkey);
   VAR_5->has_unhashed = 1;
  }
  FUNC_2(VAR_9);
  return 0;
 case 130:

  VAR_5->invalid = 1;
  FUNC_4("%s:%lu: invalid line", VAR_3->path, VAR_3->linenum);

 default:
  FUNC_1(VAR_5->out, "%s\n", VAR_3->line);
  return 0;
 }

 return -1;
}
