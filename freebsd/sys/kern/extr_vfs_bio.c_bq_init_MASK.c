
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {int bq_index; int bq_subqueue; scalar_t__ bq_len; int bq_queue; int bq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct bufqueue *VAR_1, int VAR_2, int VAR_3, const char *VAR_4)
{

 FUNC_1(&VAR_1->bq_lock, VAR_4, ((void*)0), VAR_0);
 FUNC_0(&VAR_1->bq_queue);
 VAR_1->bq_len = 0;
 VAR_1->bq_index = VAR_2;
 VAR_1->bq_subqueue = VAR_3;
}
