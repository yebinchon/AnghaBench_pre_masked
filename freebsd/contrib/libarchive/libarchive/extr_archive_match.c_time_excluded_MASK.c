
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct match_file {int flag; scalar_t__ ctime_sec; long ctime_nsec; scalar_t__ mtime_sec; long mtime_nsec; } ;
struct TYPE_4__ {int * rbt_ops; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct archive_match {int newer_ctime_filter; scalar_t__ newer_ctime_sec; long newer_ctime_nsec; int older_ctime_filter; scalar_t__ older_ctime_sec; long older_ctime_nsec; int newer_mtime_filter; scalar_t__ newer_mtime_sec; long newer_mtime_nsec; int older_mtime_filter; scalar_t__ older_mtime_sec; long older_mtime_nsec; TYPE_2__ exclusion_tree; TYPE_1__ exclusion_entry_list; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,void const*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 long FUNC_3 (struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct archive_entry*) ;
 long FUNC_5 (struct archive_entry*) ;
 void* FUNC_6 (struct archive_entry*) ;
 void* FUNC_7 (struct archive_entry*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct archive_match *VAR_7, struct archive_entry *VAR_8)
{
 struct match_file *VAR_9;
 const void *VAR_10;
 time_t VAR_11;
 long VAR_12;




 if (VAR_7->newer_ctime_filter) {

  if (FUNC_2(VAR_8))
   VAR_11 = FUNC_1(VAR_8);
  else
   VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 < VAR_7->newer_ctime_sec)
   return (1);
  if (VAR_11 == VAR_7->newer_ctime_sec) {
   if (FUNC_2(VAR_8))
    VAR_12 = FUNC_3(VAR_8);
   else
    VAR_12 = FUNC_5(VAR_8);
   if (VAR_12 < VAR_7->newer_ctime_nsec)
    return (1);
   if (VAR_12 == VAR_7->newer_ctime_nsec &&
       (VAR_7->newer_ctime_filter & VAR_1)
         == 0)
    return (1);
  }
 }
 if (VAR_7->older_ctime_filter) {

  if (FUNC_2(VAR_8))
   VAR_11 = FUNC_1(VAR_8);
  else
   VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 > VAR_7->older_ctime_sec)
   return (1);
  if (VAR_11 == VAR_7->older_ctime_sec) {
   if (FUNC_2(VAR_8))
    VAR_12 = FUNC_3(VAR_8);
   else
    VAR_12 = FUNC_5(VAR_8);
   if (VAR_12 > VAR_7->older_ctime_nsec)
    return (1);
   if (VAR_12 == VAR_7->older_ctime_nsec &&
       (VAR_7->older_ctime_filter & VAR_1)
         == 0)
    return (1);
  }
 }
 if (VAR_7->newer_mtime_filter) {
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 < VAR_7->newer_mtime_sec)
   return (1);
  if (VAR_11 == VAR_7->newer_mtime_sec) {
   VAR_12 = FUNC_5(VAR_8);
   if (VAR_12 < VAR_7->newer_mtime_nsec)
    return (1);
   if (VAR_12 == VAR_7->newer_mtime_nsec &&
       (VAR_7->newer_mtime_filter & VAR_1)
          == 0)
    return (1);
  }
 }
 if (VAR_7->older_mtime_filter) {
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 > VAR_7->older_mtime_sec)
   return (1);
  VAR_12 = FUNC_5(VAR_8);
  if (VAR_11 == VAR_7->older_mtime_sec) {
   if (VAR_12 > VAR_7->older_mtime_nsec)
    return (1);
   if (VAR_12 == VAR_7->older_mtime_nsec &&
       (VAR_7->older_mtime_filter & VAR_1)
          == 0)
    return (1);
  }
 }


 if (VAR_7->exclusion_entry_list.count == 0)
  return (0);





 (void)VAR_6;
 VAR_10 = FUNC_6(VAR_8);
 VAR_7->exclusion_tree.rbt_ops = &VAR_5;

 if (VAR_10 == ((void*)0))
  return (0);

 VAR_9 = (struct match_file *)FUNC_0(
  &(VAR_7->exclusion_tree), VAR_10);

 if (VAR_9 == ((void*)0))
  return (0);

 if (VAR_9->flag & VAR_0) {
  VAR_11 = FUNC_1(VAR_8);
  if (VAR_9->ctime_sec > VAR_11) {
   if (VAR_9->flag & VAR_4)
    return (1);
  } else if (VAR_9->ctime_sec < VAR_11) {
   if (VAR_9->flag & VAR_3)
    return (1);
  } else {
   VAR_12 = FUNC_3(VAR_8);
   if (VAR_9->ctime_nsec > VAR_12) {
    if (VAR_9->flag & VAR_4)
     return (1);
   } else if (VAR_9->ctime_nsec < VAR_12) {
    if (VAR_9->flag & VAR_3)
     return (1);
   } else if (VAR_9->flag & VAR_1)
    return (1);
  }
 }
 if (VAR_9->flag & VAR_2) {
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_9->mtime_sec > VAR_11) {
   if (VAR_9->flag & VAR_4)
    return (1);
  } else if (VAR_9->mtime_sec < VAR_11) {
   if (VAR_9->flag & VAR_3)
    return (1);
  } else {
   VAR_12 = FUNC_5(VAR_8);
   if (VAR_9->mtime_nsec > VAR_12) {
    if (VAR_9->flag & VAR_4)
     return (1);
   } else if (VAR_9->mtime_nsec < VAR_12) {
    if (VAR_9->flag & VAR_3)
     return (1);
   } else if (VAR_9->flag & VAR_1)
    return (1);
  }
 }
 return (0);
}
