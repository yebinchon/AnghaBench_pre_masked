
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_node {int an_name; int an_children; int an_mount; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct autofs_node* FUNC_1 (int ,int *,struct autofs_node*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,int,int ) ;

int
FUNC_5(struct autofs_node *VAR_3, const char *VAR_4,
    int VAR_5, struct autofs_node **VAR_6)
{
 struct autofs_node *VAR_7, VAR_8;
 int VAR_9;

 FUNC_0(VAR_3->an_mount);

 if (VAR_5 >= 0)
  VAR_8.an_name = FUNC_4(VAR_4, VAR_5, VAR_1);
 else
  VAR_8.an_name = FUNC_3(VAR_4, VAR_1);

 VAR_7 = FUNC_1(VAR_2, &VAR_3->an_children, &VAR_8);
 if (VAR_7 != ((void*)0)) {
  VAR_9 = 0;
  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_7;
 } else {
  VAR_9 = VAR_0;
 }

 FUNC_2(VAR_8.an_name, VAR_1);

 return (VAR_9);
}
