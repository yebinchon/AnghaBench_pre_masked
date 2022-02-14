
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct browser_context {char* hover_link; int progress; char* title; int win; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,int,char*) ;

__attribute__((used)) static void FUNC_3(struct browser_context *VAR_0)
{
 char VAR_1[100];

 if (VAR_0->hover_link) {
  FUNC_1(FUNC_0(VAR_0->win), VAR_0->hover_link);
  return;
 }

 if (VAR_0->progress == 100) {
  FUNC_1(FUNC_0(VAR_0->win),
         VAR_0->title ? VAR_0->title :
         "Hotspot 2.0 client");
  return;
 }

 FUNC_2(VAR_1, sizeof(VAR_1), "[%d%%] %s", VAR_0->progress,
   VAR_0->title ? VAR_0->title : "Hotspot 2.0 client");
 FUNC_1(FUNC_0(VAR_0->win), VAR_1);
}
