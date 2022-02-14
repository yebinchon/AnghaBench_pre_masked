
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_flags; struct bio* bi_private; } ;
typedef int mempool_t ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int *,int) ;
 int FUNC_1 (struct bio*,struct bio*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_1, mempool_t *VAR_2, int VAR_3)
{
 struct bio *VAR_4 = VAR_1->bi_private;

 if (FUNC_2(VAR_0, &VAR_1->bi_flags))
  FUNC_1(VAR_4, VAR_1);

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
