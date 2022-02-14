
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {int dummy; } ;
struct compact_control {int order; int sync; int migratepages; int freepages; struct zone* zone; int nr_migratepages; int nr_freepages; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct zone*) ;
 int FUNC_4 (struct zone*,struct compact_control*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (struct zone*) ;

__attribute__((used)) static int FUNC_9(int VAR_3)
{
 int VAR_4;
 pg_data_t *VAR_5;
 struct zone *VAR_6;

 if (VAR_3 < 0 || VAR_3 >= VAR_2 || !FUNC_7(VAR_3))
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_3);


 FUNC_6();

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct compact_control VAR_7 = {
   .nr_freepages = 0,
   .nr_migratepages = 0,
   .order = -1,
   .sync = 1,
  };

  VAR_6 = &VAR_5->node_zones[VAR_4];
  if (!FUNC_8(VAR_6))
   continue;

  VAR_7.zone = VAR_6;
  FUNC_0(&VAR_7.freepages);
  FUNC_0(&VAR_7.migratepages);

  FUNC_3(VAR_6);
  FUNC_4(VAR_6, &VAR_7);

  FUNC_2(!FUNC_5(&VAR_7.freepages));
  FUNC_2(!FUNC_5(&VAR_7.migratepages));
 }

 return 0;
}
