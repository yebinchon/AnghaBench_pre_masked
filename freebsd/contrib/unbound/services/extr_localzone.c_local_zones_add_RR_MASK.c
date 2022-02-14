
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int lock; } ;
struct local_zone {int lock; } ;


 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int **,int *,int *) ;
 int VAR_0 ;
 struct local_zone* FUNC_3 (struct local_zones*,int *,size_t,int,int ,int ) ;
 struct local_zone* FUNC_4 (struct local_zones*,int *,size_t,int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct local_zone*,char const*) ;

int
FUNC_8(struct local_zones* VAR_1, const char* VAR_2)
{
 uint8_t* VAR_3;
 uint16_t VAR_4, VAR_5;
 size_t VAR_6;
 int VAR_7;
 struct local_zone* VAR_8;
 int VAR_9;
 if(!FUNC_2(VAR_2, &VAR_3, &VAR_4, &VAR_5)) {
  return 0;
 }
 VAR_7 = FUNC_0(VAR_3, &VAR_6);


 FUNC_6(&VAR_1->lock);
 VAR_8 = FUNC_4(VAR_1, VAR_3, VAR_6, VAR_7, VAR_4, VAR_5);
 if(!VAR_8) {
  VAR_8 = FUNC_3(VAR_1, VAR_3, VAR_6, VAR_7, VAR_4,
   VAR_0);
  if(!VAR_8) {
   FUNC_5(&VAR_1->lock);
   return 0;
  }
 } else {
  FUNC_1(VAR_3);
 }
 FUNC_6(&VAR_8->lock);
 FUNC_5(&VAR_1->lock);
 VAR_9 = FUNC_7(VAR_8, VAR_2);
 FUNC_5(&VAR_8->lock);
 return VAR_9;
}
