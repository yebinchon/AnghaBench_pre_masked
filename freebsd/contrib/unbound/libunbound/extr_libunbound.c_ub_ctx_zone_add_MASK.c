
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ub_ctx {TYPE_1__* local_zones; } ;
struct local_zone {int type; int lock; } ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (TYPE_1__*,int *,size_t,int,int ,int) ;
 struct local_zone* FUNC_3 (TYPE_1__*,int *,size_t,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int **,size_t*,int*) ;
 int FUNC_7 (struct ub_ctx*) ;

int FUNC_8(struct ub_ctx* VAR_4, const char *VAR_5,
 const char *VAR_6)
{
 enum localzone_type VAR_7;
 struct local_zone* VAR_8;
 uint8_t* VAR_9;
 int VAR_10;
 size_t VAR_11;

 int VAR_12 = FUNC_7(VAR_4);
 if (VAR_12) return VAR_12;

 if(!FUNC_1(VAR_6, &VAR_7)) {
  return VAR_3;
 }

 if(!FUNC_6(VAR_5, &VAR_9, &VAR_11, &VAR_10)) {
  return VAR_3;
 }

 FUNC_5(&VAR_4->local_zones->lock);
 if((VAR_8=FUNC_3(VAR_4->local_zones, VAR_9, VAR_11, VAR_10,
  VAR_0))) {

  FUNC_5(&VAR_8->lock);
  VAR_8->type = VAR_7;
  FUNC_4(&VAR_8->lock);
  FUNC_4(&VAR_4->local_zones->lock);
  FUNC_0(VAR_9);
  return VAR_1;
 }
 if(!FUNC_2(VAR_4->local_zones, VAR_9, VAR_11, VAR_10,
  VAR_0, VAR_7)) {
  FUNC_4(&VAR_4->local_zones->lock);
  return VAR_2;
 }
 FUNC_4(&VAR_4->local_zones->lock);
 return VAR_1;
}
