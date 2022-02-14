
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_conn {scalar_t__ pc_magic; int pc_ctx; TYPE_1__* pc_proto; } ;
typedef int protoname ;
struct TYPE_2__ {int (* prt_recv ) (int ,unsigned char*,int,int*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int,struct proto_conn**) ;
 int FUNC_3 (int ,unsigned char*,int,int*) ;

int
FUNC_4(const struct proto_conn *VAR_2, bool VAR_3,
    struct proto_conn **VAR_4)
{
 char VAR_5[128];
 int VAR_6, VAR_7;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->pc_magic == VAR_0);
 FUNC_0(VAR_2->pc_proto != ((void*)0));
 FUNC_0(VAR_2->pc_proto->prt_recv != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));

 FUNC_1(VAR_5, sizeof(VAR_5));

 VAR_6 = VAR_2->pc_proto->prt_recv(VAR_2->pc_ctx,
     (unsigned char *)VAR_5, sizeof(VAR_5) - 1, &VAR_7);
 if (VAR_6 != 0) {
  VAR_1 = VAR_6;
  return (-1);
 }

 FUNC_0(VAR_7 >= 0);

 return (FUNC_2(VAR_5, VAR_3, VAR_7, VAR_4));
}
