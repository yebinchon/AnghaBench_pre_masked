
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {int name; } ;
typedef size_t ip_set_id_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (size_t) ;
 struct ip_set** VAR_1 ;
 size_t VAR_2 ;

ip_set_id_t
FUNC_2(const char *VAR_3, struct ip_set **VAR_4)
{
 ip_set_id_t VAR_5, VAR_6 = VAR_0;
 struct ip_set *VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_7 = VAR_1[VAR_5];
  if (VAR_7 != ((void*)0) && FUNC_0(VAR_7->name, VAR_3)) {
   FUNC_1(VAR_5);
   VAR_6 = VAR_5;
   *VAR_4 = VAR_7;
  }
 }

 return VAR_6;
}
