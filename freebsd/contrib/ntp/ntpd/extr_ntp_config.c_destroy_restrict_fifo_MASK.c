
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int restrict_node ;
typedef int restrict_fifo ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(
 restrict_fifo * VAR_1
 )
{
 restrict_node * VAR_2;

 if (VAR_1 != ((void*)0)) {
  for (;;) {
   FUNC_0(VAR_2, *VAR_1, VAR_0);
   if (VAR_2 == ((void*)0))
    break;
   FUNC_1(VAR_2);
  }
  FUNC_2(VAR_1);
 }
}
