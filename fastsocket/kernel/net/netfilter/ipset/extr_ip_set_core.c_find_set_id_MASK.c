
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {int name; } ;
typedef size_t ip_set_id_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 struct ip_set** VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static ip_set_id_t
FUNC_1(const char *VAR_3)
{
 ip_set_id_t VAR_4, VAR_5 = VAR_0;
 const struct ip_set *VAR_6;

 for (VAR_4 = 0; VAR_5 == VAR_0 && VAR_4 < VAR_2; VAR_4++) {
  VAR_6 = VAR_1[VAR_4];
  if (VAR_6 != ((void*)0) && FUNC_0(VAR_6->name, VAR_3))
   VAR_5 = VAR_4;
 }
 return VAR_5;
}
