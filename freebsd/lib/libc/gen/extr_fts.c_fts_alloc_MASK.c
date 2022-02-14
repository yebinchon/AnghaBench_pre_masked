
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_7__ {int fts_path; } ;
struct TYPE_6__ {char* fts_name; size_t fts_namelen; TYPE_2__* fts_fts; int * fts_pointer; scalar_t__ fts_number; int fts_instr; scalar_t__ fts_flags; scalar_t__ fts_errno; int fts_path; struct stat* fts_statp; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ FTS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static FTSENT *
FUNC_3(FTS *VAR_2, char *VAR_3, size_t VAR_4)
{
 FTSENT *VAR_5;
 size_t VAR_6;

 struct ftsent_withstat {
  FTSENT ent;
  struct stat statbuf;
 };







 if (FUNC_0(VAR_1))
  VAR_6 = sizeof(FTSENT) + VAR_4 + 1;
 else
  VAR_6 = sizeof(struct ftsent_withstat) + VAR_4 + 1;

 if ((VAR_5 = FUNC_1(VAR_6)) == ((void*)0))
  return (((void*)0));

 if (FUNC_0(VAR_1)) {
  VAR_5->fts_name = (char *)(VAR_5 + 1);
  VAR_5->fts_statp = ((void*)0);
 } else {
  VAR_5->fts_name = (char *)((struct ftsent_withstat *)VAR_5 + 1);
  VAR_5->fts_statp = &((struct ftsent_withstat *)VAR_5)->statbuf;
 }


 FUNC_2(VAR_5->fts_name, VAR_3, VAR_4);
 VAR_5->fts_name[VAR_4] = '\0';
 VAR_5->fts_namelen = VAR_4;
 VAR_5->fts_path = VAR_2->fts_path;
 VAR_5->fts_errno = 0;
 VAR_5->fts_flags = 0;
 VAR_5->fts_instr = VAR_0;
 VAR_5->fts_number = 0;
 VAR_5->fts_pointer = ((void*)0);
 VAR_5->fts_fts = VAR_2;
 return (VAR_5);
}
