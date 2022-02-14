
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int llink ;
struct TYPE_5__ {char* p_path; } ;
struct TYPE_4__ {char* fts_path; int fts_statp; } ;
typedef TYPE_1__ FTSENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,char*) ;

int
FUNC_6(const FTSENT *VAR_5, int VAR_6)
{
 int VAR_7;
 char VAR_8[VAR_0];

 if (VAR_6 && VAR_1) {
  if (VAR_4)
   FUNC_0("%s not overwritten\n", VAR_3.p_path);
  return (1);
 }
 if ((VAR_7 = FUNC_1(VAR_5->fts_path, VAR_8, sizeof(VAR_8) - 1)) == -1) {
  FUNC_5("readlink: %s", VAR_5->fts_path);
  return (1);
 }
 VAR_8[VAR_7] = '\0';
 if (VAR_6 && FUNC_4(VAR_3.p_path)) {
  FUNC_5("unlink: %s", VAR_3.p_path);
  return (1);
 }
 if (FUNC_3(VAR_8, VAR_3.p_path)) {
  FUNC_5("symlink: %s", VAR_8);
  return (1);
 }
 return (VAR_2 ? FUNC_2(VAR_5->fts_statp, -1) : 0);
}
