
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {scalar_t__ ext_buf; struct lge_softc* ext_arg1; } ;
struct mbuf {TYPE_2__ m_ext; } ;
struct TYPE_3__ {scalar_t__ lge_jumbo_buf; } ;
struct lge_softc {int lge_jfree_listhead; int lge_jinuse_listhead; TYPE_1__ lge_cdata; } ;
struct lge_jpool_entry {int slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lge_jpool_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lge_jpool_entry*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_3)
{
 struct lge_softc *VAR_4;
 int VAR_5;
 struct lge_jpool_entry *VAR_6;


 VAR_4 = VAR_3->m_ext.ext_arg1;

 if (VAR_4 == ((void*)0))
  FUNC_3("lge_jfree: can't find softc pointer!");


 VAR_5 = ((vm_offset_t)VAR_3->m_ext.ext_buf
      - (vm_offset_t)VAR_4->lge_cdata.lge_jumbo_buf) / VAR_0;

 if ((VAR_5 < 0) || (VAR_5 >= VAR_1))
  FUNC_3("lge_jfree: asked to free buffer that we don't manage!");

 VAR_6 = FUNC_0(&VAR_4->lge_jinuse_listhead);
 if (VAR_6 == ((void*)0))
  FUNC_3("lge_jfree: buffer not in use!");
 VAR_6->slot = VAR_5;
 FUNC_2(&VAR_4->lge_jinuse_listhead, VAR_2);
 FUNC_1(&VAR_4->lge_jfree_listhead, VAR_6, VAR_2);
}
