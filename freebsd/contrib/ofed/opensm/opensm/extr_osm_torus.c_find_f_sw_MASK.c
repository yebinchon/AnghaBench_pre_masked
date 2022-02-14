
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fabric {unsigned int switch_cnt; struct f_switch** sw; } ;
struct f_switch {scalar_t__ n_id; } ;
typedef scalar_t__ guid_t ;



__attribute__((used)) static
struct f_switch *FUNC_0(struct fabric *VAR_0, guid_t VAR_1)
{
 unsigned VAR_2;
 struct f_switch *VAR_3;

 if (VAR_0->sw) {
  for (VAR_2 = 0; VAR_2 < VAR_0->switch_cnt; VAR_2++) {
   VAR_3 = VAR_0->sw[VAR_2];
   if (VAR_3->n_id == VAR_1)
    return VAR_3;
  }
 }
 return ((void*)0);
}
