
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptop {struct cryptodesc* crp_desc; } ;
struct cryptodesc {int dummy; } ;
struct ccp_session {int dummy; } ;
struct ccp_queue {int dummy; } ;


 int FUNC_0 (struct ccp_queue*,struct ccp_session*,struct cryptop*,struct cryptodesc*,int) ;

__attribute__((used)) static void
FUNC_1(struct ccp_queue *VAR_0, struct ccp_session *VAR_1, void *VAR_2,
    int VAR_3)
{
 struct cryptodesc *VAR_4;
 struct cryptop *VAR_5;

 VAR_5 = VAR_2;
 VAR_4 = VAR_5->crp_desc;
 FUNC_0(VAR_0, VAR_1, VAR_5, VAR_4, VAR_3);
}
