
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct utmpx {int ut_syslen; scalar_t__* ut_addr_v6; int ut_addr; int ut_host; int ut_user; int ut_pid; int ut_line; int ut_type; int ut_id; } ;
struct TYPE_10__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_5__ sin6_addr; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;
struct TYPE_9__ {TYPE_3__ sa; TYPE_2__ sa_in; } ;
struct logininfo {int type; int hostname; TYPE_4__ hostaddr; int username; int pid; int line; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;


 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 int FUNC_6 (struct utmpx*,char,int) ;
 int FUNC_7 (struct logininfo*,struct utmpx*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;

void
FUNC_10(struct logininfo *VAR_4, struct utmpx *VAR_5)
{



 FUNC_6(VAR_5, '\0', sizeof(*VAR_5));






 switch (VAR_4->type) {
 case 129:
  VAR_5->ut_type = VAR_3;
  break;
 case 128:
  VAR_5->ut_type = VAR_2;
  break;
 }
 FUNC_4(VAR_5->ut_line, VAR_4->line, sizeof(VAR_5->ut_line));
 FUNC_7(VAR_4, VAR_5);
 VAR_5->ut_pid = VAR_4->pid;


 FUNC_9(VAR_5->ut_user, VAR_4->username,
     FUNC_2(VAR_5->ut_user, VAR_4->username));

 if (VAR_4->type == 128)
  return;
}
