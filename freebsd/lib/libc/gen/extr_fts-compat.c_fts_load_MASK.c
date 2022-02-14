
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* fts_path; int fts_dev; } ;
struct TYPE_5__ {int fts_pathlen; int fts_namelen; char* fts_name; char* fts_accpath; char* fts_path; int fts_dev; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ FTS ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(FTS *VAR_0, FTSENT *VAR_1)
{
 int VAR_2;
 char *VAR_3;
 VAR_2 = VAR_1->fts_pathlen = VAR_1->fts_namelen;
 FUNC_0(VAR_0->fts_path, VAR_1->fts_name, VAR_2 + 1);
 if ((VAR_3 = FUNC_2(VAR_1->fts_name, '/')) && (VAR_3 != VAR_1->fts_name || VAR_3[1])) {
  VAR_2 = FUNC_1(++VAR_3);
  FUNC_0(VAR_1->fts_name, VAR_3, VAR_2 + 1);
  VAR_1->fts_namelen = VAR_2;
 }
 VAR_1->fts_accpath = VAR_1->fts_path = VAR_0->fts_path;
 VAR_0->fts_dev = VAR_1->fts_dev;
}
