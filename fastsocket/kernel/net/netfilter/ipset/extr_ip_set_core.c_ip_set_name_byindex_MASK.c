
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {scalar_t__ ref; char const* name; } ;
typedef size_t ip_set_id_t ;


 int FUNC_0 (int) ;
 struct ip_set** VAR_0 ;

const char *
FUNC_1(ip_set_id_t VAR_1)
{
 const struct ip_set *VAR_2 = VAR_0[VAR_1];

 FUNC_0(VAR_2 == ((void*)0));
 FUNC_0(VAR_2->ref == 0);


 return VAR_2->name;
}
