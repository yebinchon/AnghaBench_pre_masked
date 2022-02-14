
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_journal_softc {int sc_dconsumer; int sc_name; } ;
struct g_journal_desc {int (* jd_dirty ) (int ) ;} ;


 int FUNC_0 (int,char*,int ) ;
 struct g_journal_desc** VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct g_journal_softc *VAR_1)
{
 const struct g_journal_desc *VAR_2;
 int VAR_3;

 FUNC_0(1, "Marking file system %s as dirty.", VAR_1->sc_name);
 for (VAR_3 = 0; (VAR_2 = VAR_0[VAR_3]) != ((void*)0); VAR_3++)
  VAR_2->jd_dirty(VAR_1->sc_dconsumer);
}
