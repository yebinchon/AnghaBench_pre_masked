
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nf_conn** keymap; } ;
struct TYPE_4__ {TYPE_1__ ct_pptp_info; } ;
struct nf_conn_help {TYPE_2__ help; } ;
struct nf_conn {int list; } ;
struct netns_proto_gre {int keymap_lock; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nf_conn*) ;
 int FUNC_1 (int *) ;
 struct netns_proto_gre* FUNC_2 (struct net*,int ) ;
 struct net* FUNC_3 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (char*,struct nf_conn*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct nf_conn *VAR_3)
{
 struct net *VAR_4 = FUNC_3(VAR_3);
 struct netns_proto_gre *VAR_5 = FUNC_2(VAR_4, VAR_2);
 struct nf_conn_help *VAR_6 = FUNC_4(VAR_3);
 enum ip_conntrack_dir VAR_7;

 FUNC_5("entering for ct %p\n", VAR_3);

 FUNC_6(&VAR_5->keymap_lock);
 for (VAR_7 = VAR_1; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_6->help.ct_pptp_info.keymap[VAR_7]) {
   FUNC_5("removing %p from list\n",
     VAR_6->help.ct_pptp_info.keymap[VAR_7]);
   FUNC_1(&VAR_6->help.ct_pptp_info.keymap[VAR_7]->list);
   FUNC_0(VAR_6->help.ct_pptp_info.keymap[VAR_7]);
   VAR_6->help.ct_pptp_info.keymap[VAR_7] = ((void*)0);
  }
 }
 FUNC_7(&VAR_5->keymap_lock);
}
