
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ggd_connection {int c_sendfd; int c_recvfd; struct ggd_connection* c_path; int c_srcip; } ;


 int FUNC_0 (struct ggd_connection*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ggd_connection*) ;
 int FUNC_3 (int ,char*,int ,struct ggd_connection*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ggd_connection *VAR_2)
{

 FUNC_0(VAR_2, VAR_1);
 FUNC_3(VAR_0, "Connection removed [%s %s].",
     FUNC_4(VAR_2->c_srcip), VAR_2->c_path);
 if (VAR_2->c_sendfd != -1)
  FUNC_1(VAR_2->c_sendfd);
 if (VAR_2->c_recvfd != -1)
  FUNC_1(VAR_2->c_recvfd);
 FUNC_2(VAR_2->c_path);
 FUNC_2(VAR_2);
}
