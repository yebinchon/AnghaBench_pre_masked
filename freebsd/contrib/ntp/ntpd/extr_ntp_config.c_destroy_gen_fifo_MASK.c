
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* fifo_deleter ) (int *) ;
typedef int any_node_fifo ;
typedef int any_node ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void*
FUNC_3(
 void *VAR_1,
 fifo_deleter VAR_2
 )
{
 any_node * VAR_3 = ((void*)0);
 any_node_fifo * VAR_4 = VAR_1;

 if (VAR_4 != ((void*)0)) {
  if (!VAR_2)
   VAR_2 = FUNC_1;
  for (;;) {
   FUNC_0(VAR_3, *VAR_4, VAR_0);
   if (VAR_3 == ((void*)0))
    break;
   (*VAR_2)(VAR_3);
  }
  FUNC_1(VAR_4);
 }
 return ((void*)0);
}
