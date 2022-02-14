
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct query_info {int qclass; } ;
struct dns_msg {int dummy; } ;
struct auth_zones {int lock; } ;
struct auth_zone {int fallback_enabled; int lock; scalar_t__ zone_expired; int for_upstream; } ;


 struct auth_zone* FUNC_0 (struct auth_zones*,int *,size_t,int ) ;
 int FUNC_1 (struct auth_zone*,struct query_info*,struct regional*,struct dns_msg**,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct auth_zones* VAR_0, struct query_info* VAR_1,
 struct regional* VAR_2, struct dns_msg** VAR_3, int* VAR_4,
 uint8_t* VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct auth_zone* VAR_8;

 FUNC_2(&VAR_0->lock);
 VAR_8 = FUNC_0(VAR_0, VAR_5, VAR_6, VAR_1->qclass);
 if(!VAR_8) {
  FUNC_3(&VAR_0->lock);

  *VAR_4 = 1;
  return 0;
 }
 FUNC_2(&VAR_8->lock);
 FUNC_3(&VAR_0->lock);


 if(!VAR_8->for_upstream) {
  FUNC_3(&VAR_8->lock);
  *VAR_4 = 1;
  return 0;
 }
 if(VAR_8->zone_expired) {
  *VAR_4 = VAR_8->fallback_enabled;
  FUNC_3(&VAR_8->lock);
  return 0;
 }

 VAR_7 = FUNC_1(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_8->lock);
 return VAR_7;
}
