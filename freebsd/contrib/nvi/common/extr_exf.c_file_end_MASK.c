
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ (* close ) (TYPE_6__*) ;} ;
struct TYPE_21__ {scalar_t__ refcnt; int rcv_fd; scalar_t__ c_blen; struct TYPE_21__* c_lp; struct TYPE_21__* rcv_mpath; struct TYPE_21__* rcv_path; struct TYPE_21__* name; TYPE_6__* db; struct TYPE_21__* tname; int cno; int lno; } ;
struct TYPE_20__ {TYPE_3__* frp; TYPE_1__* gp; int cno; int lno; TYPE_3__* ep; } ;
struct TYPE_19__ {int frefq; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ FREF ;
typedef TYPE_3__ EXF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int ,TYPE_3__*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;

int
FUNC_10(
 SCR *VAR_6,
 EXF *VAR_7,
 int VAR_8)
{
 FREF *VAR_9;
 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_6->ep;
 if (--VAR_7->refcnt != 0)
  return (0);
 VAR_9 = VAR_6->frp;
 VAR_9->lno = VAR_6->lno;
 VAR_9->cno = VAR_6->cno;
 FUNC_1(VAR_9, VAR_0);
 if (!FUNC_0(VAR_9, VAR_1) && VAR_9->tname != ((void*)0)) {
  if (FUNC_9(VAR_9->tname))
   FUNC_7(VAR_6, VAR_4, VAR_9->tname, "240|%s: remove");
  FUNC_4(VAR_9->tname);
  VAR_9->tname = ((void*)0);
  if (FUNC_0(VAR_9, VAR_2)) {
   FUNC_2(VAR_6->gp->frefq, VAR_9, VAR_5);
   if (VAR_9->name != ((void*)0))
    FUNC_4(VAR_9->name);
   FUNC_4(VAR_9);
  }
  VAR_6->frp = ((void*)0);
 }






 if (VAR_7->db->close != ((void*)0) && VAR_7->db->close(VAR_7->db) && !VAR_8) {
  FUNC_7(VAR_6, VAR_4, VAR_9->name, "241|%s: close");
  ++VAR_7->refcnt;
  return (1);
 }




 (void)FUNC_5(VAR_6, VAR_7);


 (void)FUNC_6(VAR_6, VAR_7);
 if (!FUNC_0(VAR_7, VAR_3)) {
  if (VAR_7->rcv_path != ((void*)0) && FUNC_9(VAR_7->rcv_path))
   FUNC_7(VAR_6, VAR_4, VAR_7->rcv_path, "242|%s: remove");
  if (VAR_7->rcv_mpath != ((void*)0) && FUNC_9(VAR_7->rcv_mpath))
   FUNC_7(VAR_6, VAR_4, VAR_7->rcv_mpath, "243|%s: remove");
 }
 if (VAR_7->rcv_fd != -1)
  (void)FUNC_3(VAR_7->rcv_fd);
 if (VAR_7->rcv_path != ((void*)0))
  FUNC_4(VAR_7->rcv_path);
 if (VAR_7->rcv_mpath != ((void*)0))
  FUNC_4(VAR_7->rcv_mpath);
 if (VAR_7->c_blen > 0)
  FUNC_4(VAR_7->c_lp);

 FUNC_4(VAR_7);
 return (0);
}
