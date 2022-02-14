
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct putter_hdr {int pth_framelen; } ;
struct puffstestargs {int pta_servfd; int pta_rumpfd; int * pta_vn_toserv_ops; int * pta_vfs_toserv_ops; } ;
struct puffs_req {size_t preq_optype; int preq_opclass; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,int ) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;
 int VAR_7 ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void *
FUNC_7(void *VAR_8)
{
 struct putter_hdr *VAR_9;
 struct puffs_req *VAR_10;
 struct puffstestargs *VAR_11 = VAR_8;
 char VAR_12[VAR_0];
 ssize_t VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = VAR_11->pta_servfd;
 VAR_15 = VAR_11->pta_rumpfd;

 VAR_9 = (void *)VAR_12;
 VAR_10 = (void *)VAR_12;

 FUNC_4(1);

 for (;;) {
  VAR_13 = FUNC_5(VAR_15, VAR_12, sizeof(*VAR_9));
  if (VAR_13 <= 0) {
   FUNC_3(VAR_7, "readshovel r1 %zd / %d\n", VAR_13, VAR_5);
   break;
  }

  FUNC_2(VAR_9->pth_framelen < VAR_0);
  VAR_13 = FUNC_5(VAR_15, VAR_12+sizeof(*VAR_9),
      VAR_9->pth_framelen - sizeof(*VAR_9));
  if (VAR_13 <= 0) {
   FUNC_3(VAR_7, "readshovel r2 %zd / %d\n", VAR_13, VAR_5);
   break;
  }


  if (FUNC_0(VAR_10->preq_opclass) == VAR_1) {
   FUNC_2(VAR_10->preq_optype < VAR_3);
   VAR_11->pta_vfs_toserv_ops[VAR_10->preq_optype]++;
  } else if (FUNC_0(VAR_10->preq_opclass) == VAR_2) {
   FUNC_2(VAR_10->preq_optype < VAR_4);
   VAR_11->pta_vn_toserv_ops[VAR_10->preq_optype]++;
  }

  VAR_13 = VAR_9->pth_framelen;
  if (FUNC_6(VAR_14, VAR_12, VAR_13) != VAR_13) {
   FUNC_3(VAR_7, "readshovel write %zd / %d\n", VAR_13, VAR_5);
   break;
  }
 }

 if (VAR_13 != 0 && VAR_6 == 0)
  FUNC_1();
 return ((void*)0);
}
