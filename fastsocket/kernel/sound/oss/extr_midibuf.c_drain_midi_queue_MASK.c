
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* buffer_status ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__** VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{





 if (VAR_2[VAR_4]->buffer_status != ((void*)0))
  while (!FUNC_1(VAR_1) && VAR_2[VAR_4]->buffer_status(VAR_4))
   FUNC_0(&VAR_3[VAR_4],
             VAR_0/10);
}
