
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* buffer_status ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_7, VAR_8;





 VAR_8 = 1;

 while (!FUNC_1(VAR_1) && VAR_8)
 {
  VAR_8 = 0;

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   if (VAR_4[VAR_7] && VAR_5[VAR_7])
    if (VAR_3[VAR_7]->buffer_status != ((void*)0))
     if (VAR_3[VAR_7]->buffer_status(VAR_7))
      VAR_8++;





   if (VAR_8)
    FUNC_0(&VAR_6,
             VAR_0/10);
 }
}
