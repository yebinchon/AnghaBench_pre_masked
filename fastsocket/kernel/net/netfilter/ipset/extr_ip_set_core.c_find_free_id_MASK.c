
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {int name; } ;
typedef size_t ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 struct ip_set** VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_5, ip_set_id_t *VAR_6, struct ip_set **VAR_7)
{
 ip_set_id_t VAR_8;

 *VAR_6 = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_3[VAR_8] == ((void*)0)) {
   if (*VAR_6 == VAR_2)
    *VAR_6 = VAR_8;
  } else if (FUNC_0(VAR_5, VAR_3[VAR_8]->name)) {

   *VAR_7 = VAR_3[VAR_8];
   return -VAR_0;
  }
 }
 if (*VAR_6 == VAR_2)

  return -VAR_1;
 return 0;
}
