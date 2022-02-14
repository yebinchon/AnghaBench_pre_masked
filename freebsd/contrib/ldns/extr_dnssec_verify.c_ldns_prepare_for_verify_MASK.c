
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,int const*) ;
 scalar_t__ FUNC_9 (int *,int const*) ;
 scalar_t__ FUNC_10 (int *,int const*) ;

__attribute__((used)) static ldns_status
FUNC_11(ldns_buffer* VAR_3, ldns_buffer* VAR_4,
 ldns_rr_list* VAR_5, const ldns_rr* VAR_6)
{
 ldns_status VAR_7;


 FUNC_0(FUNC_6(VAR_6));


 if (FUNC_1(FUNC_7(VAR_6)) !=
     FUNC_2(FUNC_4(VAR_5, 0)))
  return VAR_0;


 VAR_7 = FUNC_10(VAR_3, VAR_6);
 if(VAR_7 != VAR_2)
  return VAR_7;



 FUNC_8(VAR_5, VAR_6);


 FUNC_5(VAR_5);


 if (FUNC_9(VAR_4, VAR_6) != VAR_2)
  return VAR_1;


 if(FUNC_3(VAR_4, VAR_5)
  != VAR_2)
  return VAR_1;

 return VAR_2;
}
