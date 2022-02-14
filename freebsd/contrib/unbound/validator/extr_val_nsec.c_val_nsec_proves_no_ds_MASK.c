
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct query_info {scalar_t__ qtype; int qname_len; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum sec_status
FUNC_3(struct ub_packed_rrset_key* VAR_7,
 struct query_info* VAR_8)
{
 FUNC_0(VAR_8->qtype == VAR_0);
 FUNC_0(FUNC_2(VAR_7->rk.type) == VAR_2);

 if(FUNC_1(VAR_7, VAR_3) && VAR_8->qname_len != 1) {


  return VAR_4;
 }
 if(FUNC_1(VAR_7, VAR_0)) {


  return VAR_4;
 }

 if(!FUNC_1(VAR_7, VAR_1)) {


  return VAR_5;
 }

 return VAR_6;
}
