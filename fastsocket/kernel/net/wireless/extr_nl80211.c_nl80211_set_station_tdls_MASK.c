
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct station_parameters {void* vht_capa; void* ht_capa; } ;
struct genl_info {scalar_t__* attrs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct genl_info*,struct station_parameters*) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct genl_info *VAR_2,
        struct station_parameters *VAR_3)
{

 if (VAR_2->attrs[VAR_0])
  VAR_3->ht_capa =
   FUNC_1(VAR_2->attrs[VAR_0]);
 if (VAR_2->attrs[VAR_1])
  VAR_3->vht_capa =
   FUNC_1(VAR_2->attrs[VAR_1]);

 return FUNC_0(VAR_2, VAR_3);
}
