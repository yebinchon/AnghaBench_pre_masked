
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ jj_offset; } ;
struct TYPE_3__ {scalar_t__ jj_offset; } ;
struct g_journal_softc {scalar_t__ sc_journal_offset; int sc_jend; int sc_jstart; int sc_name; TYPE_2__ sc_inactive; TYPE_1__ sc_active; scalar_t__ sc_id; } ;
typedef int off_t ;
typedef int intmax_t ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,unsigned int,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct g_journal_softc *VAR_5)
{
 off_t VAR_6, VAR_7;

 if ((VAR_5->sc_active.jj_offset < VAR_5->sc_inactive.jj_offset &&
      VAR_5->sc_journal_offset >= VAR_5->sc_inactive.jj_offset) ||
     (VAR_5->sc_active.jj_offset > VAR_5->sc_inactive.jj_offset &&
      VAR_5->sc_journal_offset >= VAR_5->sc_inactive.jj_offset &&
      VAR_5->sc_journal_offset < VAR_5->sc_active.jj_offset)) {
  FUNC_4("Journal overflow "
      "(id = %u joffset=%jd active=%jd inactive=%jd)",
      (unsigned)VAR_5->sc_id,
      (intmax_t)VAR_5->sc_journal_offset,
      (intmax_t)VAR_5->sc_active.jj_offset,
      (intmax_t)VAR_5->sc_inactive.jj_offset);
 }
 if (VAR_5->sc_active.jj_offset < VAR_5->sc_inactive.jj_offset) {
  VAR_6 = VAR_5->sc_inactive.jj_offset - VAR_5->sc_active.jj_offset;
  VAR_7 = VAR_5->sc_journal_offset - VAR_5->sc_active.jj_offset;
 } else {
  VAR_6 = VAR_5->sc_jend - VAR_5->sc_active.jj_offset;
  VAR_6 += VAR_5->sc_inactive.jj_offset - VAR_5->sc_jstart;
  if (VAR_5->sc_journal_offset >= VAR_5->sc_active.jj_offset)
   VAR_7 = VAR_5->sc_journal_offset - VAR_5->sc_active.jj_offset;
  else {
   VAR_7 = VAR_5->sc_jend - VAR_5->sc_active.jj_offset;
   VAR_7 += VAR_5->sc_journal_offset - VAR_5->sc_jstart;
  }
 }

 if (VAR_4)
  return;




 FUNC_1(VAR_6 > 0,
     ("length=%jd used=%jd active=%jd inactive=%jd joffset=%jd",
     (intmax_t)VAR_6, (intmax_t)VAR_7,
     (intmax_t)VAR_5->sc_active.jj_offset,
     (intmax_t)VAR_5->sc_inactive.jj_offset,
     (intmax_t)VAR_5->sc_journal_offset));
 if ((VAR_7 * 100) / VAR_6 > VAR_1) {
  VAR_2++;
  FUNC_0(1, "Journal %s %jd%% full, forcing journal switch.",
      VAR_5->sc_name, (VAR_7 * 100) / VAR_6);
  FUNC_2(&VAR_0);
  VAR_4 = 1;
  FUNC_5(&VAR_3);
  FUNC_3(&VAR_0);
 }
}
