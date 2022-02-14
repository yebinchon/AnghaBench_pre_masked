
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_meta_list {int dummy; } ;
struct evrpc_meta {struct evrpc_meta* data; struct evrpc_meta* key; } ;


 int FUNC_0 (int ) ;
 struct evrpc_meta* FUNC_1 (struct evrpc_meta_list*) ;
 int FUNC_2 (struct evrpc_meta_list*,struct evrpc_meta*,int ) ;
 int FUNC_3 (struct evrpc_meta*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct evrpc_meta_list *VAR_1)
{
 struct evrpc_meta *VAR_2;
 FUNC_0(VAR_1 != ((void*)0));

 while ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0)) {
  FUNC_2(VAR_1, VAR_2, VAR_0);
  FUNC_3(VAR_2->key);
  FUNC_3(VAR_2->data);
  FUNC_3(VAR_2);
 }
}
