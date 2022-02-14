
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int *) ;

ldns_status
FUNC_7(
  ldns_rr_list *VAR_3,
  ldns_rr *VAR_4,
  ldns_rr *VAR_5,
  time_t VAR_6)
{
 ldns_buffer *VAR_7;
 ldns_buffer *VAR_8;
 ldns_status VAR_9;
 ldns_rr_list *VAR_10;

 if (!VAR_3) {
  return VAR_1;
 }

 VAR_10 = FUNC_3(VAR_3);

 VAR_7 = FUNC_1(VAR_0);
 VAR_8 = FUNC_1(VAR_0);

 VAR_9 = FUNC_2(VAR_7, VAR_8,
  VAR_10, VAR_4);
 if(VAR_9 != VAR_2) {
  FUNC_4(VAR_10);
  FUNC_0(VAR_7);
  FUNC_0(VAR_8);
  return VAR_9;
 }
 VAR_9 = FUNC_6(VAR_7, VAR_8,
  VAR_4, VAR_5);

 FUNC_4(VAR_10);
 FUNC_0(VAR_7);
 FUNC_0(VAR_8);


 if(VAR_9 == VAR_2)
  VAR_9 = FUNC_5(VAR_4, VAR_6);

 return VAR_9;
}
