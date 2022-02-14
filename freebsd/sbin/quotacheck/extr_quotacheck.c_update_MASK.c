
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct stat {scalar_t__ st_size; } ;
struct quotafile {int dummy; } ;
struct fileusage {scalar_t__ fu_curinodes; scalar_t__ fu_curblocks; size_t fu_id; struct fileusage* fu_next; } ;
struct dqblk {scalar_t__ dqb_curinodes; scalar_t__ dqb_curblocks; scalar_t__ dqb_ihardlimit; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_bhardlimit; scalar_t__ dqb_bsoftlimit; } ;
typedef scalar_t__ off_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct dqblk*,int) ;
 struct fileusage*** VAR_1 ;
 struct fileusage* FUNC_1 (size_t,int) ;
 int FUNC_2 (char const*,int,struct dqblk*,struct fileusage*,size_t) ;
 size_t FUNC_3 (struct quotafile*) ;
 int FUNC_4 (struct quotafile*) ;
 scalar_t__ FUNC_5 (struct quotafile*,struct dqblk*,size_t) ;
 int FUNC_6 (struct quotafile*,struct dqblk*,size_t) ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 int FUNC_8 (int ,scalar_t__) ;

int
FUNC_9(const char *VAR_2, struct quotafile *VAR_3, int VAR_4)
{
 struct fileusage *VAR_5;
 u_long VAR_6, VAR_7, VAR_8 = 0;
 struct dqblk VAR_9;
 struct stat VAR_10;
 static struct dqblk VAR_11;
 static struct fileusage VAR_12;




 VAR_7 = FUNC_3(VAR_3);
 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++) {
  if (FUNC_5(VAR_3, &VAR_9, VAR_6) < 0)
   VAR_9 = VAR_11;
  if ((VAR_5 = FUNC_1(VAR_6, VAR_4)) == ((void*)0))
   VAR_5 = &VAR_12;
  if (VAR_5->fu_curinodes || VAR_5->fu_curblocks ||
      VAR_9.dqb_bsoftlimit || VAR_9.dqb_bhardlimit ||
      VAR_9.dqb_isoftlimit || VAR_9.dqb_ihardlimit)
   VAR_8 = VAR_6;
  if (VAR_9.dqb_curinodes == VAR_5->fu_curinodes &&
      VAR_9.dqb_curblocks == VAR_5->fu_curblocks) {
   VAR_5->fu_curinodes = 0;
   VAR_5->fu_curblocks = 0;
   continue;
  }
  FUNC_2(VAR_2, VAR_4, &VAR_9, VAR_5, VAR_6);
  VAR_9.dqb_curinodes = VAR_5->fu_curinodes;
  VAR_9.dqb_curblocks = VAR_5->fu_curblocks;
  (void) FUNC_6(VAR_3, &VAR_9, VAR_6);
  VAR_5->fu_curinodes = 0;
  VAR_5->fu_curblocks = 0;
 }






 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  for (VAR_5 = VAR_1[VAR_4][VAR_6]; VAR_5 != ((void*)0); VAR_5 = VAR_5->fu_next) {
   if (VAR_5->fu_id <= VAR_7)
    continue;
   if (VAR_5->fu_curinodes == 0 && VAR_5->fu_curblocks == 0)
    continue;
   FUNC_0(&VAR_9, sizeof(struct dqblk));
   if (VAR_5->fu_id > VAR_8)
    VAR_8 = VAR_5->fu_id;
   FUNC_2(VAR_2, VAR_4, &VAR_9, VAR_5, VAR_5->fu_id);
   VAR_9.dqb_curinodes = VAR_5->fu_curinodes;
   VAR_9.dqb_curblocks = VAR_5->fu_curblocks;
   (void) FUNC_6(VAR_3, &VAR_9, VAR_5->fu_id);
   VAR_5->fu_curinodes = 0;
   VAR_5->fu_curblocks = 0;
  }
 }





 if (VAR_8 < VAR_7 &&
     FUNC_7(FUNC_4(VAR_3), &VAR_10) == 0 &&
     VAR_10.st_size > (off_t)((VAR_8 + 2) * sizeof(struct dqblk)))
  FUNC_8(FUNC_4(VAR_3),
      (((off_t)VAR_8 + 2) * sizeof(struct dqblk)));
 return (0);
}
