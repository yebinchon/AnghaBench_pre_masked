
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_pf {int dummy; } ;
typedef int sa_family_t ;




 struct sctp_pf* VAR_0 ;
 struct sctp_pf* VAR_1 ;

struct sctp_pf *FUNC_0(sa_family_t VAR_2) {

 switch (VAR_2) {
 case 129:
  return VAR_1;
 case 128:
  return VAR_0;
 default:
  return ((void*)0);
 }
}
