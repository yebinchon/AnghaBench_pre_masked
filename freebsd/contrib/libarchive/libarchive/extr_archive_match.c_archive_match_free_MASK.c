
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct archive_match* ids; } ;
struct TYPE_3__ {struct archive_match* ids; } ;
struct archive_match {int inclusion_gnames; int inclusion_unames; TYPE_2__ inclusion_gids; TYPE_1__ inclusion_uids; int exclusion_entry_list; int exclusions; int inclusions; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*,int ,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct archive_match*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct archive *VAR_4)
{
 struct archive_match *VAR_5;

 if (VAR_4 == ((void*)0))
  return (VAR_1);
 FUNC_0(VAR_4, VAR_0,
     VAR_2 | VAR_3, "archive_match_free");
 VAR_5 = (struct archive_match *)VAR_4;
 FUNC_3(&(VAR_5->inclusions));
 FUNC_3(&(VAR_5->exclusions));
 FUNC_1(&(VAR_5->exclusion_entry_list));
 FUNC_2(VAR_5->inclusion_uids.ids);
 FUNC_2(VAR_5->inclusion_gids.ids);
 FUNC_3(&(VAR_5->inclusion_unames));
 FUNC_3(&(VAR_5->inclusion_gnames));
 FUNC_2(VAR_5);
 return (VAR_1);
}
