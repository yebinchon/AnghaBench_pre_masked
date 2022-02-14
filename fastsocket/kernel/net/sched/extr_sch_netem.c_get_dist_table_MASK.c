
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netem_sched_data {struct disttable* delay_dist; } ;
struct disttable {unsigned long size; int * table; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;
typedef int __s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct disttable*) ;
 struct disttable* FUNC_1 (int,int ) ;
 int * FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct nlattr const*) ;
 struct netem_sched_data* FUNC_4 (struct Qdisc*) ;
 int * FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_3, const struct nlattr *VAR_4)
{
 struct netem_sched_data *VAR_5 = FUNC_4(VAR_3);
 unsigned long VAR_6 = FUNC_3(VAR_4)/sizeof(__s16);
 const __s16 *VAR_7 = FUNC_2(VAR_4);
 spinlock_t *VAR_8;
 struct disttable *VAR_9;
 int VAR_10;

 if (VAR_6 > 65536)
  return -VAR_0;

 VAR_9 = FUNC_1(sizeof(*VAR_9) + VAR_6*sizeof(VAR_9->table[0]), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->size = VAR_6;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  VAR_9->table[VAR_10] = VAR_7[VAR_10];

 VAR_8 = FUNC_5(VAR_3);

 FUNC_6(VAR_8);
 FUNC_0(VAR_5->delay_dist);
 VAR_5->delay_dist = VAR_9;
 FUNC_7(VAR_8);
 return 0;
}
