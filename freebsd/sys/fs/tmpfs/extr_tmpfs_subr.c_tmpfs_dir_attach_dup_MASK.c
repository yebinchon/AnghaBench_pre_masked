
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tmpfs_dir_duphead {int dummy; } ;
struct TYPE_4__ {struct tmpfs_dir_duphead tn_dupindex; } ;
struct tmpfs_node {TYPE_1__ tn_dir; } ;
struct tmpfs_dirent {scalar_t__ td_cookie; } ;
struct TYPE_5__ {int entries; int index_entries; } ;
struct TYPE_6__ {TYPE_2__ td_dup; } ;


 struct tmpfs_dirent* FUNC_0 (struct tmpfs_dir_duphead*) ;
 int FUNC_1 (struct tmpfs_dirent*,struct tmpfs_dirent*,int ) ;
 int FUNC_2 (struct tmpfs_dirent*,struct tmpfs_dirent*,int ) ;
 int FUNC_3 (struct tmpfs_dir_duphead*,struct tmpfs_dirent*,int ) ;
 struct tmpfs_dirent* FUNC_4 (struct tmpfs_dirent*,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct tmpfs_dirent*) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct tmpfs_node *VAR_3,
    struct tmpfs_dir_duphead *VAR_4, struct tmpfs_dirent *VAR_5)
{
 struct tmpfs_dir_duphead *VAR_6;
 struct tmpfs_dirent *VAR_7, *VAR_8;

 VAR_6 = &VAR_3->tn_dir.tn_dupindex;
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 == ((void*)0) || VAR_7->td_cookie < VAR_0) {
  if (VAR_7 == ((void*)0))
   VAR_5->td_cookie = VAR_1;
  else
   VAR_5->td_cookie = VAR_7->td_cookie + 1;
  FUNC_5(FUNC_6(VAR_5));
  FUNC_3(VAR_6, VAR_5, VAR_2.td_dup.index_entries);
  FUNC_3(VAR_4, VAR_5, VAR_2.td_dup.entries);
  return;
 }






 while (1) {
  VAR_8 = VAR_7;
  VAR_7 = FUNC_4(VAR_7, VAR_2.td_dup.index_entries);
  if (VAR_7 == ((void*)0) && VAR_8->td_cookie != VAR_1) {




   VAR_5->td_cookie = VAR_1;
   FUNC_1(VAR_8, VAR_5, VAR_2.td_dup.index_entries);
   FUNC_3(VAR_4, VAR_5, VAR_2.td_dup.entries);
   return;
  } else if (VAR_7 == ((void*)0)) {






   VAR_5->td_cookie = VAR_0;
   FUNC_3(VAR_6, VAR_5,
       VAR_2.td_dup.index_entries);
   FUNC_3(VAR_4, VAR_5, VAR_2.td_dup.entries);
   return;
  }
  if (VAR_7->td_cookie + 1 == VAR_8->td_cookie ||
      VAR_7->td_cookie >= VAR_0)
   continue;
  VAR_5->td_cookie = VAR_7->td_cookie + 1;
  FUNC_5(FUNC_6(VAR_5));
  FUNC_5(VAR_8->td_cookie > VAR_5->td_cookie);
  FUNC_5(VAR_5->td_cookie > VAR_7->td_cookie);
  FUNC_2(VAR_7, VAR_5, VAR_2.td_dup.index_entries);
  FUNC_3(VAR_4, VAR_5, VAR_2.td_dup.entries);
  return;
 }
}
