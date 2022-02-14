
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_node {char* an_name; struct autofs_node* an_parent; struct autofs_mount* an_mount; } ;
struct autofs_mount {char* am_mountpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(struct autofs_node *VAR_2)
{
 struct autofs_mount *VAR_3;
 char *VAR_4, *VAR_5;

 VAR_3 = VAR_2->an_mount;

 VAR_4 = FUNC_4("", VAR_0);
 for (; VAR_2->an_parent != ((void*)0); VAR_2 = VAR_2->an_parent) {
  VAR_5 = FUNC_1(FUNC_5(VAR_2->an_name) + FUNC_5(VAR_4) + 2,
      VAR_0, VAR_1);
  FUNC_3(VAR_5, VAR_2->an_name);
  FUNC_2(VAR_5, "/");
  FUNC_2(VAR_5, VAR_4);
  FUNC_0(VAR_4, VAR_0);
  VAR_4 = VAR_5;
 }

 VAR_5 = FUNC_1(FUNC_5(VAR_3->am_mountpoint) + FUNC_5(VAR_4) + 2,
     VAR_0, VAR_1);
 FUNC_3(VAR_5, VAR_3->am_mountpoint);
 FUNC_2(VAR_5, "/");
 FUNC_2(VAR_5, VAR_4);
 FUNC_0(VAR_4, VAR_0);
 VAR_4 = VAR_5;

 return (VAR_4);
}
