
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_conn {int pc_side; int pc_magic; struct proto* pc_proto; } ;
struct proto {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct proto_conn* FUNC_1 (int) ;

__attribute__((used)) static struct proto_conn *
FUNC_2(struct proto *VAR_4, int VAR_5)
{
 struct proto_conn *VAR_6;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 == VAR_1 ||
     VAR_5 == VAR_2 ||
     VAR_5 == VAR_3);

 VAR_6 = FUNC_1(sizeof(*VAR_6));
 if (VAR_6 != ((void*)0)) {
  VAR_6->pc_proto = VAR_4;
  VAR_6->pc_side = VAR_5;
  VAR_6->pc_magic = VAR_0;
 }
 return (VAR_6);
}
