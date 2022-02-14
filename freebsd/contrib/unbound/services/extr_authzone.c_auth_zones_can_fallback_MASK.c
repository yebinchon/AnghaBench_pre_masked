
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct auth_zones {int lock; } ;
struct auth_zone {int lock; int for_upstream; scalar_t__ fallback_enabled; } ;


 struct auth_zone* FUNC_0 (struct auth_zones*,int *,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct auth_zones* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3)
{
 int VAR_4;
 struct auth_zone* VAR_5;
 FUNC_1(&VAR_0->lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if(!VAR_5) {
  FUNC_2(&VAR_0->lock);

  return 1;
 }
 FUNC_1(&VAR_5->lock);
 FUNC_2(&VAR_0->lock);
 VAR_4 = VAR_5->fallback_enabled || (!VAR_5->for_upstream);
 FUNC_2(&VAR_5->lock);
 return VAR_4;
}
