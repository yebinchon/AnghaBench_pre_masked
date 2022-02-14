
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_svc_seq_data {int sd_max; int sd_lock; int sd_win; } ;
struct rsc {struct gss_svc_seq_data seqdata; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct rsc *VAR_1, int VAR_2)
{
 struct gss_svc_seq_data *VAR_3 = &VAR_1->seqdata;

 FUNC_4(&VAR_3->sd_lock);
 if (VAR_2 > VAR_3->sd_max) {
  if (VAR_2 >= VAR_3->sd_max + VAR_0) {
   FUNC_3(VAR_3->sd_win,0,sizeof(VAR_3->sd_win));
   VAR_3->sd_max = VAR_2;
  } else while (VAR_3->sd_max < VAR_2) {
   VAR_3->sd_max++;
   FUNC_0(VAR_3->sd_max % VAR_0, VAR_3->sd_win);
  }
  FUNC_1(VAR_2 % VAR_0, VAR_3->sd_win);
  goto ok;
 } else if (VAR_2 <= VAR_3->sd_max - VAR_0) {
  goto drop;
 }

 if (FUNC_2(VAR_2 % VAR_0, VAR_3->sd_win))
  goto drop;
ok:
 FUNC_5(&VAR_3->sd_lock);
 return 1;
drop:
 FUNC_5(&VAR_3->sd_lock);
 return 0;
}
