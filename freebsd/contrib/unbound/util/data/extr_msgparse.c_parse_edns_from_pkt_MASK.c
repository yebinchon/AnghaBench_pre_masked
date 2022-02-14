
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct edns_data {int udp_size; int edns_present; int * opt_list; void* bits; void* edns_version; void* ext_rcode; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct edns_data*,int ,int) ;
 int FUNC_6 (int *,size_t,struct edns_data*,struct regional*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 void* FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 size_t FUNC_13 (int *) ;

int
FUNC_14(sldns_buffer* VAR_3, struct edns_data* VAR_4,
 struct regional* VAR_5)
{
 size_t VAR_6;
 uint8_t* VAR_7;
 FUNC_4(FUNC_3(FUNC_9(VAR_3)) == 1);
 if(FUNC_0(FUNC_9(VAR_3)) != 0 ||
  FUNC_2(FUNC_9(VAR_3)) != 0) {
  if(!FUNC_8(VAR_3, ((int)FUNC_0(FUNC_9(VAR_3)))+
   ((int)FUNC_2(FUNC_9(VAR_3)))))
   return 0;
 }

 if(FUNC_1(FUNC_9(VAR_3)) > 1) {
  return VAR_0;
 }
 if(FUNC_1(FUNC_9(VAR_3)) == 0) {
  FUNC_5(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->udp_size = 512;
  return 0;
 }

 if(FUNC_7(VAR_3) != 1)
  return VAR_0;
 if(FUNC_13(VAR_3) < 10)
  return VAR_0;
 if(FUNC_11(VAR_3) != VAR_2)
  return VAR_0;
 VAR_4->edns_present = 1;
 VAR_4->udp_size = FUNC_11(VAR_3);
 VAR_4->ext_rcode = FUNC_12(VAR_3);
 VAR_4->edns_version = FUNC_12(VAR_3);
 VAR_4->bits = FUNC_11(VAR_3);
 VAR_4->opt_list = ((void*)0);


 VAR_6 = FUNC_11(VAR_3);
 if(FUNC_13(VAR_3) < VAR_6)
  return VAR_0;
 VAR_7 = FUNC_10(VAR_3);
 if(!FUNC_6(VAR_7, VAR_6, VAR_4, VAR_5))
  return VAR_1;



 return 0;
}
