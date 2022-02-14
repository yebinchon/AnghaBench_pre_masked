
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct sctp_bind_addr {int dummy; } ;
typedef int sctp_scope_t ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sctp_bind_addr*,union sctp_addr*,int ,int ) ;
 int FUNC_1 (struct sctp_bind_addr*,int ,int ,int) ;
 scalar_t__ FUNC_2 (union sctp_addr*,int ) ;
 scalar_t__ FUNC_3 (int *,union sctp_addr*) ;

__attribute__((used)) static int FUNC_4(struct sctp_bind_addr *VAR_6,
         union sctp_addr *VAR_7,
         sctp_scope_t VAR_8, gfp_t VAR_9,
         int VAR_10)
{
 int VAR_11 = 0;

 if (FUNC_3(((void*)0), VAR_7)) {
  VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10);
 } else if (FUNC_2(VAR_7, VAR_8)) {




  if ((((VAR_0 == VAR_7->sa.sa_family) &&
        (VAR_10 & VAR_2))) ||
      (((VAR_1 == VAR_7->sa.sa_family) &&
        (VAR_10 & VAR_3) &&
        (VAR_10 & VAR_4))))
   VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_5,
          VAR_9);
 }

 return VAR_11;
}
