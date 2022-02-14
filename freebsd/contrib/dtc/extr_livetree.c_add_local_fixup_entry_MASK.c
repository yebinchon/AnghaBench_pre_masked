
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_32 ;
typedef int uint32_t ;
struct property {int name; } ;
struct node {char* name; struct node* parent; } ;
struct marker {int offset; } ;
struct dt_info {int dummy; } ;


 int FUNC_0 (struct node*,int ,int *,int) ;
 struct node* FUNC_1 (struct node*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**) ;
 struct node* FUNC_4 (struct node*,char*) ;
 char** FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dt_info *VAR_0,
  struct node *VAR_1, struct node *VAR_2,
  struct property *VAR_3, struct marker *VAR_4,
  struct node *VAR_5)
{
 struct node *VAR_6, *VAR_7;
 uint32_t VAR_8;
 char **VAR_9;
 int VAR_10, VAR_11;


 VAR_11 = 0;
 for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->parent)
  VAR_11++;


 VAR_9 = FUNC_5(sizeof(*VAR_9) * VAR_11);


 for (VAR_6 = VAR_2, VAR_10 = VAR_11 - 1; VAR_6; VAR_6 = VAR_6->parent, VAR_10--)
  VAR_9[VAR_10] = VAR_6->name;


 for (VAR_6 = VAR_1, VAR_10 = 1; VAR_10 < VAR_11; VAR_10++, VAR_6 = VAR_7) {

  VAR_7 = FUNC_4(VAR_6, VAR_9[VAR_10]);
  if (!VAR_7)
   VAR_7 = FUNC_1(VAR_6, VAR_9[VAR_10]);
 }

 FUNC_3(VAR_9);

 VAR_8 = FUNC_2(VAR_4->offset);
 FUNC_0(VAR_6, VAR_3->name, &VAR_8, sizeof(VAR_8));
}
