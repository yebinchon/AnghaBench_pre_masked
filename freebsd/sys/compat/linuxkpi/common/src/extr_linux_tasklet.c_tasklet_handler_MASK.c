
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_worker {int head; } ;
struct tasklet_struct {int data; int (* func ) (int ) ;int count; } ;


 struct tasklet_struct* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct tasklet_struct*,int ) ;
 struct tasklet_struct* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct tasklet_struct*,int ) ;
 scalar_t__ FUNC_4 (struct tasklet_struct*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct tasklet_struct*,int ) ;
 int FUNC_6 (struct tasklet_worker*) ;
 int FUNC_7 (struct tasklet_worker*) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_11(void *VAR_5)
{
 struct tasklet_worker *VAR_6 = (struct tasklet_worker *)VAR_5;
 struct tasklet_struct *VAR_7;
 struct tasklet_struct *VAR_8;

 FUNC_9(VAR_2);

 FUNC_6(VAR_6);
 VAR_8 = FUNC_2(&VAR_6->head, VAR_4);
 while (1) {
  VAR_7 = FUNC_0(&VAR_6->head);
  if (VAR_7 == ((void*)0))
   break;
  FUNC_3(&VAR_6->head, VAR_7, VAR_3);

  if (!FUNC_8(&VAR_7->count)) {
   FUNC_7(VAR_6);
   do {

    FUNC_5(VAR_7, VAR_0);

    VAR_7->func(VAR_7->data);

   } while (FUNC_4(VAR_7, VAR_0,
           VAR_1) == 0);
   FUNC_6(VAR_6);
  } else {
   FUNC_1(&VAR_6->head, VAR_7, VAR_3);
  }
  if (VAR_7 == VAR_8)
   break;
 }
 FUNC_7(VAR_6);
}
