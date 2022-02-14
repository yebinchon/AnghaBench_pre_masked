
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_pf {int dummy; } ;
typedef int sa_family_t ;




 struct sctp_pf* VAR_0 ;
 struct sctp_pf* VAR_1 ;

int FUNC_0(struct sctp_pf *VAR_2, sa_family_t VAR_3)
{
 switch (VAR_3) {
 case 129:
  if (VAR_1)
   return 0;
  VAR_1 = VAR_2;
  break;
 case 128:
  if (VAR_0)
   return 0;
  VAR_0 = VAR_2;
  break;
 default:
  return 0;
 }
 return 1;
}
