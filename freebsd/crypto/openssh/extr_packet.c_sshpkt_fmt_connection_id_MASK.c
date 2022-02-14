
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {char* log_preamble; } ;


 int FUNC_0 (char*,size_t,char*,char*,char*,int,int ) ;
 int FUNC_1 (struct ssh*) ;
 int FUNC_2 (struct ssh*) ;

void
FUNC_3(struct ssh *VAR_0, char *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_1, VAR_2, "%.200s%s%s port %d",
     VAR_0->log_preamble ? VAR_0->log_preamble : "",
     VAR_0->log_preamble ? " " : "",
     FUNC_1(VAR_0), FUNC_2(VAR_0));
}
