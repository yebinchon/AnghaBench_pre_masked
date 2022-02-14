
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct putter_hdr {int pth_framelen; } ;
struct puffstestargs {int pta_servfd; int pta_rumpfd; } ;
struct puffs_req {scalar_t__ preq_optype; scalar_t__ preq_rv; int preq_opclass; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int,int ) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int) ;
 int VAR_5 ;
 int FUNC_7 (int,char*,size_t) ;

__attribute__((used)) static void *
FUNC_8(void *VAR_6)
{
 struct puffstestargs *VAR_7 = VAR_6;
 struct putter_hdr *VAR_8;
 struct puffs_req *VAR_9;
 char VAR_10[VAR_0];
 size_t VAR_11;
 ssize_t VAR_12;
 int VAR_13, VAR_14;

 FUNC_5(1);

 VAR_13 = VAR_7->pta_servfd;
 VAR_14 = VAR_7->pta_rumpfd;

 VAR_8 = (struct putter_hdr *)VAR_10;
 VAR_9 = (void *)VAR_10;

 for (;;) {
  uint64_t VAR_15;





  VAR_15 = 0;
  VAR_11 = sizeof(struct putter_hdr);
  FUNC_3(VAR_11 < VAR_0);
  do {
   VAR_12 = FUNC_7(VAR_13, VAR_10+VAR_15, VAR_11);
   if (VAR_12 <= 0) {
    FUNC_4(VAR_5, "writeshovel read %zd / %d\n",
        VAR_12, VAR_3);
    goto out;
   }
   VAR_15 += VAR_12;
   if (VAR_15 >= sizeof(struct putter_hdr))
    VAR_11 = VAR_8->pth_framelen - VAR_15;
   else
    VAR_11 = VAR_15 - sizeof(struct putter_hdr);
  } while (VAR_11);

  if (FUNC_1(
      FUNC_0(VAR_9->preq_opclass) == VAR_1
      && VAR_9->preq_optype == VAR_2)) {
   if (VAR_9->preq_rv == 0)
    VAR_4 = 1;
  }

  VAR_12 = FUNC_6(VAR_14, VAR_10, VAR_8->pth_framelen);
  if ((size_t)VAR_12 != VAR_8->pth_framelen) {
   FUNC_4(VAR_5, "writeshovel wr %zd / %d\n", VAR_12, VAR_3);
   break;
  }
 }

 out:
 if (VAR_12 != 0)
  FUNC_2();
 return ((void*)0);
}
