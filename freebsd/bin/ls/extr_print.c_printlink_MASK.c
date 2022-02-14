
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int path ;
typedef int name ;
struct TYPE_5__ {scalar_t__ fts_level; char* fts_name; TYPE_1__* fts_parent; } ;
struct TYPE_4__ {char* fts_accpath; } ;
typedef TYPE_2__ FTSENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,char*,...) ;
 int VAR_3 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(const FTSENT *VAR_4)
{
 int VAR_5;
 char VAR_6[VAR_1 + 1];
 char VAR_7[VAR_1 + 1];

 if (VAR_4->fts_level == VAR_0)
  (void)FUNC_4(VAR_6, sizeof(VAR_6), "%s", VAR_4->fts_name);
 else
  (void)FUNC_4(VAR_6, sizeof(VAR_6),
      "%s/%s", VAR_4->fts_parent->fts_accpath, VAR_4->fts_name);
 if ((VAR_5 = FUNC_3(VAR_6, VAR_7, sizeof(VAR_7) - 1)) == -1) {
  (void)FUNC_0(VAR_3, "\nls: %s: %s\n", VAR_6, FUNC_5(VAR_2));
  return;
 }
 VAR_7[VAR_5] = '\0';
 (void)FUNC_1(" -> ");
 (void)FUNC_2(VAR_7);
}
