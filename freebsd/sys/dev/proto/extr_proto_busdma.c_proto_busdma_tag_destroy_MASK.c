
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_tag {int * parent; int children; int mds; } ;
struct proto_busdma {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct proto_tag*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct proto_tag*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct proto_busdma *VAR_4, struct proto_tag *VAR_5)
{

 if (!FUNC_0(&VAR_5->mds))
  return (VAR_0);
 if (!FUNC_0(&VAR_5->children))
  return (VAR_0);

 if (VAR_5->parent != ((void*)0)) {
  FUNC_1(VAR_5, VAR_2);
  VAR_5->parent = ((void*)0);
 }
 FUNC_1(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_1);
 return (0);
}
