
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_8(void *VAR_7)
{
 int VAR_8;

 FUNC_5(&VAR_4);
 VAR_1++;
 FUNC_1(&VAR_2);

 while (VAR_1 < 2)
  FUNC_2(&VAR_2, &VAR_4);
 FUNC_6(&VAR_4);


 while ((VAR_3->flags & VAR_0) == 0)
  FUNC_3("take5", 0, 1, ((void*)0));

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++) {
  FUNC_7(&VAR_5, VAR_6[VAR_8]);
 }

 FUNC_4(0);
}
