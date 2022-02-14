
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int const*,scalar_t__) ;
 scalar_t__ FUNC_3 (int const*) ;

ldns_status
FUNC_4(ldns_buffer *VAR_1,const ldns_rr_list *VAR_2)
{
 uint16_t VAR_3;
 uint16_t VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  (void)FUNC_1(VAR_1, FUNC_2(VAR_2, VAR_4),
       VAR_0);
 }
 return FUNC_0(VAR_1);
}
