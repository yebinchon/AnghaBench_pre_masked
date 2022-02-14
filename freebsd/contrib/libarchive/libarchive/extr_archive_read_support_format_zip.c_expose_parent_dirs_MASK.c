
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int s; } ;
struct zip_entry {int node; struct archive_string rsrcname; } ;
struct zip {int tree; int tree_rsrc; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct archive_string*) ;
 int FUNC_4 (struct archive_string*) ;
 int FUNC_5 (struct archive_string*,char const*,size_t) ;
 char* FUNC_6 (int ,char) ;

__attribute__((used)) static void
FUNC_7(struct zip *VAR_0, const char *VAR_1, size_t VAR_2)
{
 struct archive_string VAR_3;
 struct zip_entry *VAR_4;
 char *VAR_5;

 FUNC_4(&VAR_3);
 FUNC_5(&VAR_3, VAR_1, VAR_2);
 for (;;) {
  VAR_5 = FUNC_6(VAR_3.s, '/');
  if (VAR_5 == ((void*)0))
   break;
  *VAR_5 = '\0';


  VAR_4 = (struct zip_entry *)
      FUNC_0(&VAR_0->tree_rsrc, VAR_3.s);
  if (VAR_4 == ((void*)0))
   break;
  FUNC_2(&VAR_0->tree_rsrc, &VAR_4->node);
  FUNC_3(&VAR_4->rsrcname);
  FUNC_1(&VAR_0->tree, &VAR_4->node);
 }
 FUNC_3(&VAR_3);
}
