
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {char** markers; int nmarkers; int name; } ;


 char** FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char const*,int ,char const*) ;
 char* FUNC_2 (char**,int) ;

__attribute__((used)) static void FUNC_3(struct module *VAR_0, const char *VAR_1, const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 FUNC_1(&VAR_3, "%s\t%d\t%s\n", VAR_1, VAR_0->name, VAR_2);
 FUNC_0(VAR_3);

 VAR_0->markers = FUNC_0(FUNC_2(VAR_0->markers, ((VAR_0->nmarkers + 1) *
           sizeof VAR_0->markers[0])));
 VAR_0->markers[VAR_0->nmarkers++] = VAR_3;
}
