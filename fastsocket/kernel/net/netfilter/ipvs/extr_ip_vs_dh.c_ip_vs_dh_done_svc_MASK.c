
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {struct ip_vs_dh_bucket* sched_data; } ;
struct ip_vs_dh_bucket {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_vs_dh_bucket*) ;
 int FUNC_2 (struct ip_vs_dh_bucket*) ;

__attribute__((used)) static int FUNC_3(struct ip_vs_service *VAR_1)
{
 struct ip_vs_dh_bucket *VAR_2 = VAR_1->sched_data;


 FUNC_1(VAR_2);


 FUNC_2(VAR_1->sched_data);
 FUNC_0(6, "DH hash table (memory=%Zdbytes) released\n",
    sizeof(struct ip_vs_dh_bucket)*VAR_0);

 return 0;
}
