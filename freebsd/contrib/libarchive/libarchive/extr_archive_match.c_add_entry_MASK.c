
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct match_file {int flag; int pathname; int ctime_nsec; int ctime_sec; int mtime_nsec; int mtime_sec; int node; } ;
struct TYPE_3__ {int * rbt_ops; } ;
struct archive_match {int setflag; int exclusion_entry_list; TYPE_1__ exclusion_tree; int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,void const*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 void* FUNC_6 (struct archive_entry*) ;
 void* FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,void const*) ;
 int FUNC_10 (int *,void const*) ;
 int FUNC_11 (int *,int ,char*) ;
 struct match_file* FUNC_12 (int,int) ;
 int FUNC_13 (int *,struct match_file*) ;
 int FUNC_14 (struct archive_match*) ;
 int FUNC_15 (struct match_file*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_16(struct archive_match *VAR_6, int VAR_7,
    struct archive_entry *VAR_8)
{
 struct match_file *VAR_9;
 const void *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_12(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (FUNC_14(VAR_6));
 (void)VAR_5;
 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10 == ((void*)0)) {
  FUNC_15(VAR_9);
  FUNC_11(&(VAR_6->archive), VAR_2, "pathname is NULL");
  return (VAR_0);
 }
 FUNC_9(&(VAR_9->pathname), VAR_10);
 VAR_6->exclusion_tree.rbt_ops = &VAR_4;

 VAR_9->flag = VAR_7;
 VAR_9->mtime_sec = FUNC_4(VAR_8);
 VAR_9->mtime_nsec = FUNC_5(VAR_8);
 VAR_9->ctime_sec = FUNC_2(VAR_8);
 VAR_9->ctime_nsec = FUNC_3(VAR_8);
 VAR_11 = FUNC_1(&(VAR_6->exclusion_tree), &(VAR_9->node));
 if (!VAR_11) {
  struct match_file *VAR_12;


  VAR_12 = (struct match_file *)FUNC_0(
   &(VAR_6->exclusion_tree), VAR_10);
  if (VAR_12 != ((void*)0)) {
   VAR_12->flag = VAR_9->flag;
   VAR_12->mtime_sec = VAR_9->mtime_sec;
   VAR_12->mtime_nsec = VAR_9->mtime_nsec;
   VAR_12->ctime_sec = VAR_9->ctime_sec;
   VAR_12->ctime_nsec = VAR_9->ctime_nsec;
  }

  FUNC_8(&(VAR_9->pathname));
  FUNC_15(VAR_9);
  return (VAR_1);
 }
 FUNC_13(&(VAR_6->exclusion_entry_list), VAR_9);
 VAR_6->setflag |= VAR_3;
 return (VAR_1);
}
