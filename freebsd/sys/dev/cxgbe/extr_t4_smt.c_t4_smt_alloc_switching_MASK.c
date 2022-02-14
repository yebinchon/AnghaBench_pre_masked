
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct smt_entry {int dummy; } ;
struct smt_data {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct smt_entry* FUNC_3 (struct smt_data*,int *) ;

struct smt_entry *
FUNC_4(struct smt_data *VAR_0, uint8_t *VAR_1)
{
 struct smt_entry *VAR_2;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_1(&VAR_0->lock);
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock);
 return VAR_2;
}
