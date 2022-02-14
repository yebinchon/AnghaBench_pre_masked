
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {struct ip_vs_lblc_table* sched_data; } ;
struct ip_vs_lblc_table {int periodic_timer; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ip_vs_lblc_table*) ;
 int FUNC_3 (struct ip_vs_lblc_table*) ;

__attribute__((used)) static int FUNC_4(struct ip_vs_service *VAR_0)
{
 struct ip_vs_lblc_table *VAR_1 = VAR_0->sched_data;


 FUNC_1(&VAR_1->periodic_timer);


 FUNC_2(VAR_1);


 FUNC_3(VAR_1);
 FUNC_0(6, "LBLC hash table (memory=%Zdbytes) released\n",
    sizeof(*VAR_1));

 return 0;
}
