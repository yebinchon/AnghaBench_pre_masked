
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conntrack_helper {int dummy; } ;
struct nf_conn_help {int helper; int help; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
typedef int gfp_t ;
struct TYPE_2__ {int tuple; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct nf_conntrack_helper* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 struct nf_conn_help* FUNC_2 (struct nf_conn*,int ) ;
 struct nf_conn_help* FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (int ,struct nf_conntrack_helper*) ;

int FUNC_5(struct nf_conn *VAR_2, gfp_t VAR_3)
{
 int VAR_4 = 0;
 struct nf_conntrack_helper *VAR_5;
 struct nf_conn_help *VAR_6 = FUNC_3(VAR_2);

 VAR_5 = FUNC_0(&VAR_2->tuplehash[VAR_1].tuple);
 if (VAR_5 == ((void*)0)) {
  if (VAR_6)
   FUNC_4(VAR_6->helper, ((void*)0));
  goto out;
 }

 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_2(VAR_2, VAR_3);
  if (VAR_6 == ((void*)0)) {
   VAR_4 = -VAR_0;
   goto out;
  }
 } else {
  FUNC_1(&VAR_6->help, 0, sizeof(VAR_6->help));
 }

 FUNC_4(VAR_6->helper, VAR_5);
out:
 return VAR_4;
}
