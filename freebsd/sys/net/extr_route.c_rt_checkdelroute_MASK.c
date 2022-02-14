
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {struct rtentry* rt_chain; int rt_gateway; } ;
struct rt_addrinfo {int * rti_info; } ;
struct rt_delinfo {struct rtentry* head; int rnh; struct rt_addrinfo info; } ;
struct radix_node {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 struct rtentry* FUNC_2 (int ,struct rt_addrinfo*,int*) ;

__attribute__((used)) static int
FUNC_3(struct radix_node *VAR_3, void *VAR_4)
{
 struct rt_delinfo *VAR_5;
 struct rt_addrinfo *VAR_6;
 struct rtentry *VAR_7;
 int VAR_8;

 VAR_5 = (struct rt_delinfo *)VAR_4;
 VAR_7 = (struct rtentry *)VAR_3;
 VAR_6 = &VAR_5->info;
 VAR_8 = 0;

 VAR_6->rti_info[VAR_0] = FUNC_0(VAR_7);
 VAR_6->rti_info[VAR_2] = FUNC_1(VAR_7);
 VAR_6->rti_info[VAR_1] = VAR_7->rt_gateway;

 VAR_7 = FUNC_2(VAR_5->rnh, VAR_6, &VAR_8);
 if (VAR_7 == ((void*)0)) {

  return (0);
 }


 VAR_7->rt_chain = VAR_5->head;
 VAR_5->head = VAR_7;

 return (0);
}
