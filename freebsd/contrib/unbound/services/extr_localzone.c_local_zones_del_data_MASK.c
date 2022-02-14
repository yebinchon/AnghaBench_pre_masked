
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int lock; } ;
struct local_zone {int lock; int * soa; int name; } ;
struct local_data {int name; int * rrsets; } ;


 int VAR_0 ;
 int FUNC_0 (struct local_zone*,struct local_data*,int *,size_t,int) ;
 int FUNC_1 (struct local_data*,int ) ;
 struct local_zone* FUNC_2 (struct local_zones*,int *,size_t,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct local_data* FUNC_6 (struct local_zone*,int *,size_t,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;

void FUNC_8(struct local_zones* VAR_1,
 uint8_t* VAR_2, size_t VAR_3, int VAR_4, uint16_t VAR_5)
{

 struct local_zone* VAR_6;
 struct local_data* VAR_7;


 FUNC_3(&VAR_1->lock);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_0);
 if(VAR_6) {
  FUNC_5(&VAR_6->lock);
  VAR_7 = FUNC_6(VAR_6, VAR_2, VAR_3, VAR_4);
  if(VAR_7) {
   FUNC_1(VAR_7, VAR_0);
   FUNC_0(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4);
  }
  FUNC_4(&VAR_6->lock);
 }
 FUNC_4(&VAR_1->lock);


 FUNC_3(&VAR_1->lock);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0);
 if(!VAR_6) {

  FUNC_4(&VAR_1->lock);
  return;
 }
 FUNC_5(&VAR_6->lock);
 FUNC_4(&VAR_1->lock);


 VAR_7 = FUNC_6(VAR_6, VAR_2, VAR_3, VAR_4);
 if(VAR_7) {

  VAR_7->rrsets = ((void*)0);

  if(FUNC_7(VAR_7->name, VAR_6->name) == 0)
   VAR_6->soa = ((void*)0);


  FUNC_0(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4);
 }

 FUNC_4(&VAR_6->lock);
}
