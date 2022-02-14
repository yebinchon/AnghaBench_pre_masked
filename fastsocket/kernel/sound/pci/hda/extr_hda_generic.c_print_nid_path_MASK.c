
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int* path; } ;
typedef int buf ;


 int FUNC_0 (char*,char const*,int,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, struct nid_path *VAR_1)
{
 char VAR_2[40];
 int VAR_3;


 VAR_2[0] = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->depth; VAR_3++) {
  char VAR_4[4];
  FUNC_1(VAR_4, ":%02x", VAR_1->path[VAR_3]);
  FUNC_2(VAR_2, VAR_4, sizeof(VAR_2));
 }
 FUNC_0("%s path: depth=%d %s\n", VAR_0, VAR_1->depth, VAR_2);
}
