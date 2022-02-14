
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_conn {scalar_t__ pc_magic; scalar_t__ pc_side; int * pc_proto; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct proto_conn*,int) ;
 int FUNC_2 (struct proto_conn*) ;

__attribute__((used)) static void
FUNC_3(struct proto_conn *VAR_4)
{

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->pc_magic == VAR_0);
 FUNC_0(VAR_4->pc_side == VAR_1 ||
     VAR_4->pc_side == VAR_2 ||
     VAR_4->pc_side == VAR_3);
 FUNC_0(VAR_4->pc_proto != ((void*)0));

 FUNC_1(VAR_4, sizeof(*VAR_4));
 FUNC_2(VAR_4);
}
