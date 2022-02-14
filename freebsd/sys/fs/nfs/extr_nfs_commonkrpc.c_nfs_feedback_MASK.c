
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct nfsmount {scalar_t__ nm_tprintf_delay; } ;
struct nfs_feedback_arg {int nf_tprintfmsg; int nf_td; struct nfsmount* nf_mount; scalar_t__ nf_lastmsg; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfsmount*,int ,char*,int ,int ) ;
 int FUNC_1 (struct nfsmount*,int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, int VAR_4, void *VAR_5)
{
 struct nfs_feedback_arg *VAR_6 = (struct nfs_feedback_arg *) VAR_5;
 struct nfsmount *VAR_7 = VAR_6->nf_mount;
 time_t VAR_8;

 switch (VAR_3) {
 case 128:
 case 129:
  VAR_8 = VAR_0;
  if (VAR_6->nf_lastmsg + VAR_7->nm_tprintf_delay < VAR_8) {
   FUNC_0(VAR_7, VAR_6->nf_td,
       "not responding", 0, VAR_1);
   VAR_6->nf_tprintfmsg = VAR_2;
   VAR_6->nf_lastmsg = VAR_8;
  }
  break;

 case 130:
  FUNC_1(VAR_6->nf_mount, VAR_6->nf_td,
      "is alive again", VAR_1, VAR_6->nf_tprintfmsg);
  break;
 }
}
