
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue {scalar_t__ mq_curmsgs; scalar_t__ mq_maxmsg; int mq_mutex; } ;
struct knote {int kn_fp; } ;


 struct mqueue* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_1, long VAR_2)
{
 struct mqueue *VAR_3 = FUNC_0(VAR_1->kn_fp);

 FUNC_1(&VAR_3->mq_mutex, VAR_0);
 return (VAR_3->mq_curmsgs < VAR_3->mq_maxmsg);
}
