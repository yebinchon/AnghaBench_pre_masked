
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_3__ {int page; int page_size; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].page == VAR_1)
   return (VAR_0[VAR_2].page_size);
 }

 return (-1);
}
