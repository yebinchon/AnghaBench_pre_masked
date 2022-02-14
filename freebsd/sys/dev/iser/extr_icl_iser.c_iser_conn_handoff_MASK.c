
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {scalar_t__ state; int handoff_done; int state_mutex; int min_posted_rx; } ;
struct icl_conn {int ic_maxtags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct iser_conn*,scalar_t__) ;
 struct iser_conn* FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (struct iser_conn*,int ) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (struct iser_conn*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct icl_conn *VAR_2, int VAR_3)
{
 struct iser_conn *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 FUNC_5(&VAR_4->state_mutex);
 if (VAR_4->state != VAR_1) {
  VAR_5 = VAR_0;
  FUNC_0("iser_conn %p state is %d, teardown started\n",
    VAR_4, VAR_4->state);
  goto out;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_2->ic_maxtags);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_4(VAR_4, VAR_4->min_posted_rx);
 if (VAR_5)
  goto post_error;

 VAR_4->handoff_done = 1;

 FUNC_6(&VAR_4->state_mutex);
 return (VAR_5);

post_error:
 FUNC_3(VAR_4);
out:
 FUNC_6(&VAR_4->state_mutex);
 return (VAR_5);

}
