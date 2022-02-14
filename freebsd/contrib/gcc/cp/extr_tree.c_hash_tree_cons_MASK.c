
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct list_proxy {void* chain; void* value; void* purpose; } ;


 int VAR_0 ;
 void** FUNC_0 (int ,struct list_proxy*,int,int ) ;
 int FUNC_1 (void*,void*,void*) ;
 int VAR_1 ;
 void* FUNC_2 (void*,void*,void*) ;

tree
FUNC_3 (tree VAR_2, tree VAR_3, tree VAR_4)
{
  int VAR_5 = 0;
  void **VAR_6;
  struct list_proxy VAR_7;


  VAR_5 = FUNC_1 (VAR_2, VAR_3, VAR_4);


  VAR_7.purpose = VAR_2;
  VAR_7.value = VAR_3;
  VAR_7.chain = VAR_4;

  VAR_6 = FUNC_0 (VAR_1, &VAR_7, VAR_5,
       VAR_0);

  if (!*VAR_6)
    *VAR_6 = FUNC_2 (VAR_2, VAR_3, VAR_4);
  return (tree) *VAR_6;
}
