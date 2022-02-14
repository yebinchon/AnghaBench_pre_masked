
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int num; int state; int flags; int bdaddr; } ;
struct cmtp_conninfo {int num; int state; int flags; int bdaddr; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct cmtp_session *VAR_0, struct cmtp_conninfo *VAR_1)
{
 FUNC_0(&VAR_1->bdaddr, &VAR_0->bdaddr);

 VAR_1->flags = VAR_0->flags;
 VAR_1->state = VAR_0->state;

 VAR_1->num = VAR_0->num;
}
