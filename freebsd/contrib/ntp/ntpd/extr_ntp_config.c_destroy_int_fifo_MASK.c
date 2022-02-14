
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_node ;
typedef int int_fifo ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(
 int_fifo * VAR_1
 )
{
 int_node * VAR_2;

 if (VAR_1 != ((void*)0)) {
  for (;;) {
   FUNC_0(VAR_2, *VAR_1, VAR_0);
   if (VAR_2 == ((void*)0))
    break;
   FUNC_1(VAR_2);
  }
  FUNC_1(VAR_1);
 }
}
