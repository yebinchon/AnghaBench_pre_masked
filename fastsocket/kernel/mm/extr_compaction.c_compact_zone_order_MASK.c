
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct compact_control {int order; int sync; int contended; int migratepages; int freepages; struct zone* zone; int migratetype; int nr_migratepages; int nr_freepages; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct zone*,struct compact_control*) ;
 int FUNC_4 (int *) ;

unsigned long FUNC_5(struct zone *VAR_0,
     int VAR_1, gfp_t VAR_2,
     bool VAR_3, bool *VAR_4)
{
 unsigned long VAR_5;
 struct compact_control VAR_6 = {
  .nr_freepages = 0,
  .nr_migratepages = 0,
  .order = VAR_1,
  .migratetype = FUNC_2(VAR_2),
  .zone = VAR_0,
  .sync = VAR_3,
 };
 FUNC_0(&VAR_6.freepages);
 FUNC_0(&VAR_6.migratepages);

 VAR_5 = FUNC_3(VAR_0, &VAR_6);

 FUNC_1(!FUNC_4(&VAR_6.freepages));
 FUNC_1(!FUNC_4(&VAR_6.migratepages));

 *VAR_4 = VAR_6.contended;
 return VAR_5;
}
