
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tport {int dummy; } ;
struct lsock_port {scalar_t__ str_sock; struct lsock_port* name; int peers; int * str_id; } ;
struct lsock_peer {int dummy; } ;


 struct lsock_peer* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lsock_port*) ;
 int FUNC_4 (struct lsock_peer*) ;
 int FUNC_5 (struct lsock_port*) ;
 int FUNC_6 (struct tport*) ;

__attribute__((used)) static void
FUNC_7(struct tport *VAR_0)
{
 struct lsock_port *VAR_1 = (struct lsock_port *)VAR_0;
 struct lsock_peer *VAR_2;

 if (VAR_1->str_id != ((void*)0))
  FUNC_2(VAR_1->str_id);
 if (VAR_1->str_sock >= 0)
  (void)FUNC_1(VAR_1->str_sock);
 (void)FUNC_5(VAR_1->name);

 FUNC_6(VAR_0);

 while ((VAR_2 = FUNC_0(&VAR_1->peers)) != ((void*)0))
  FUNC_4(VAR_2);

 FUNC_3(VAR_1->name);
 FUNC_3(VAR_1);
}
