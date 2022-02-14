
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct map {int (* map_ip ) (struct map*,int ) ;} ;
struct machine {int dummy; } ;
struct dso {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct dso*,struct machine*,int ,int *,int ) ;
 int FUNC_1 (struct map*,int ) ;

ssize_t FUNC_2(struct dso *VAR_0, struct map *VAR_1,
       struct machine *VAR_2, u64 VAR_3,
       u8 *VAR_4, ssize_t VAR_5)
{
 u64 VAR_6 = VAR_1->map_ip(VAR_1, VAR_3);
 return FUNC_0(VAR_0, VAR_2, VAR_6, VAR_4, VAR_5);
}
