
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int time_t ;
struct lruhash_entry {int lock; int data; } ;
struct infra_cache {int dummy; } ;


 int VAR_0 ;
 struct lruhash_entry* FUNC_0 (struct infra_cache*,int *,size_t,int ) ;
 int FUNC_1 (struct infra_cache*,int *,size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct infra_cache* VAR_1, uint8_t* VAR_2,
 size_t VAR_3, time_t VAR_4)
{
 struct lruhash_entry* VAR_5;
 int VAR_6, VAR_7;
 if(!VAR_0)
  return 0;


 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if(!VAR_6)
  return 0;


 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, 0);
 if(!VAR_5)
  return 0;
 VAR_7 = FUNC_2(VAR_5->data, VAR_4);
 FUNC_3(&VAR_5->lock);

 return (VAR_7 >= VAR_6);
}
