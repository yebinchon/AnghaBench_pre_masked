
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin6_addr; } ;
union sctp_addr {TYPE_1__ v6; } ;
typedef int sctp_scope_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static sctp_scope_t FUNC_1(union sctp_addr *VAR_4)
{
 int VAR_5;
 sctp_scope_t VAR_6;





 VAR_5 = FUNC_0(&VAR_4->v6.sin6_addr);
 switch (VAR_5) {
 case 130:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 return VAR_6;
}
