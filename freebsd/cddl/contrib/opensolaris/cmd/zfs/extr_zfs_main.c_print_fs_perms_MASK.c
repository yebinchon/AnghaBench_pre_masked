
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uu_avl_t ;
struct TYPE_9__ {int fsps_list; } ;
typedef TYPE_2__ fs_perm_set_t ;
struct TYPE_8__ {char* fsp_name; int * fsp_uge_avl; int * fsp_sc_avl; } ;
struct TYPE_10__ {TYPE_1__ fspn_fsperm; } ;
typedef TYPE_3__ fs_perm_node_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*) ;
 TYPE_3__* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(fs_perm_set_t *VAR_3)
{
 fs_perm_node_t *VAR_4 = ((void*)0);
 char VAR_5[VAR_2 + 32];
 const char *VAR_6 = VAR_5;

 for (VAR_4 = FUNC_6(VAR_3->fsps_list); VAR_4 != ((void*)0);
     VAR_4 = FUNC_7(VAR_3->fsps_list, VAR_4)) {
  uu_avl_t *VAR_7 = VAR_4->fspn_fsperm.fsp_sc_avl;
  uu_avl_t *VAR_8 = VAR_4->fspn_fsperm.fsp_uge_avl;
  int VAR_9 = 0;

  (void) FUNC_4(VAR_5, sizeof (VAR_5),
      FUNC_0("---- Permissions on %s "),
      VAR_4->fspn_fsperm.fsp_name);
  (void) FUNC_3(VAR_6);
  VAR_9 = 70 - FUNC_5(VAR_5);
  while (VAR_9-- > 0)
   (void) FUNC_3("-");
  (void) FUNC_3("\n");

  FUNC_1(VAR_7);
  FUNC_2(VAR_8, VAR_1, VAR_0,
      FUNC_0("Local permissions:\n"));
  FUNC_2(VAR_8, VAR_0, VAR_1,
      FUNC_0("Descendent permissions:\n"));
  FUNC_2(VAR_8, VAR_1, VAR_1,
      FUNC_0("Local+Descendent permissions:\n"));
 }
}
