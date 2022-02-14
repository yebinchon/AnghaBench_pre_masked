
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct fatcache {scalar_t__ fc_frcn; } ;
struct denode {struct fatcache* de_fc; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct denode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_2(struct denode *VAR_2, u_int VAR_3)
{
 int VAR_4;
 struct fatcache *VAR_5;

 FUNC_0(FUNC_1(VAR_2), "fc_purge");

 VAR_5 = VAR_2->de_fc;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++) {
  if (VAR_5->fc_frcn >= VAR_3)
   VAR_5->fc_frcn = VAR_0;
 }
}
