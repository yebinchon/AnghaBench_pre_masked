
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_conn {scalar_t__ pc_magic; int pc_ctx; TYPE_1__* pc_proto; } ;
struct TYPE_2__ {int (* prt_send ) (int ,unsigned char const*,scalar_t__,int) ;char* prt_name; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct proto_conn*) ;
 int FUNC_2 (struct proto_conn*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int ,unsigned char const*,scalar_t__,int) ;

int
FUNC_5(const struct proto_conn *VAR_2, struct proto_conn *VAR_3)
{
 const char *VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->pc_magic == VAR_0);
 FUNC_0(VAR_2->pc_proto != ((void*)0));
 FUNC_0(VAR_2->pc_proto->prt_send != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->pc_magic == VAR_0);
 FUNC_0(VAR_3->pc_proto != ((void*)0));
 VAR_6 = FUNC_2(VAR_3);
 FUNC_0(VAR_6 >= 0);
 VAR_4 = VAR_3->pc_proto->prt_name;
 FUNC_0(VAR_4 != ((void*)0));

 VAR_5 = VAR_2->pc_proto->prt_send(VAR_2->pc_ctx,
     (const unsigned char *)VAR_4, FUNC_3(VAR_4) + 1, VAR_6);
 FUNC_1(VAR_3);
 if (VAR_5 != 0) {
  VAR_1 = VAR_5;
  return (-1);
 }
 return (0);
}
