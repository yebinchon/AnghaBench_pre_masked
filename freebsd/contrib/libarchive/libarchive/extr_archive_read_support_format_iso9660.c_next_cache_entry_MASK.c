
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct file_info** last; struct file_info* first; } ;
struct TYPE_9__ {scalar_t__ used; TYPE_3__** files; } ;
struct TYPE_6__ {int * first; } ;
struct iso9660 {scalar_t__ current_position; TYPE_5__ cache_files; TYPE_4__ pending_files; struct file_info* rr_moved; TYPE_1__ re_files; } ;
struct file_info {scalar_t__ cl_offset; scalar_t__ offset; int re_descendant; int mode; int number; int nlinks; struct file_info* next; scalar_t__ re; scalar_t__ rr_moved_has_re_only; scalar_t__ rr_moved; TYPE_2__* parent; } ;
struct archive_read {int archive; } ;
typedef int intmax_t ;
typedef int int64_t ;
struct TYPE_8__ {int number; } ;
struct TYPE_7__ {scalar_t__ re_descendant; int subdirs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int FUNC_1 (struct iso9660*,struct file_info*) ;
 struct file_info* FUNC_2 (struct iso9660*) ;
 struct file_info* FUNC_3 (struct iso9660*) ;
 int FUNC_4 (struct iso9660*,struct file_info*) ;
 struct file_info* FUNC_5 (struct iso9660*) ;
 int FUNC_6 (struct archive_read*,struct file_info*) ;
 scalar_t__ FUNC_7 (struct file_info*) ;
 struct file_info* FUNC_8 (struct file_info*) ;

__attribute__((used)) static int
FUNC_9(struct archive_read *VAR_7, struct iso9660 *VAR_8,
    struct file_info **VAR_9)
{
 struct file_info *VAR_10;
 struct {
  struct file_info *first;
  struct file_info **last;
 } VAR_11;
 int64_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 != ((void*)0)) {
  *VAR_9 = VAR_10;
  return (VAR_6);
 }

 for (;;) {
  struct file_info *VAR_14, *VAR_15;

  *VAR_9 = VAR_10 = FUNC_3(VAR_8);
  if (VAR_10 == ((void*)0)) {




   if (VAR_8->re_files.first != ((void*)0) &&
       VAR_8->rr_moved != ((void*)0) &&
       VAR_8->rr_moved->rr_moved_has_re_only)

    FUNC_1(VAR_8, VAR_8->rr_moved);
   while ((VAR_14 = FUNC_5(VAR_8)) != ((void*)0)) {

    while ((VAR_15 = FUNC_8(VAR_14)) != ((void*)0))
     FUNC_1(VAR_8, VAR_15);
   }
   if (VAR_8->cache_files.first != ((void*)0))
    return (FUNC_9(VAR_7, VAR_8, VAR_9));
   return (VAR_3);
  }

  if (VAR_10->cl_offset) {
   struct file_info *VAR_16 = ((void*)0);
   int VAR_17 = 0;





   while ((VAR_14 = FUNC_5(VAR_8))
       != VAR_16) {
    if (VAR_16 == ((void*)0))
     VAR_16 = VAR_14;
    if (VAR_14->offset == VAR_10->cl_offset) {
     VAR_14->parent->subdirs--;
     VAR_14->parent = VAR_10->parent;
     VAR_14->re = 0;
     if (VAR_14->parent->re_descendant) {
      VAR_17 = 1;
      VAR_14->re_descendant = 1;
      if (FUNC_7(VAR_14) < 0)
       goto fatal_rr;


      while ((VAR_15 = FUNC_8(
          VAR_14)) != ((void*)0))
       if (FUNC_7(VAR_15)
           < 0)
        goto fatal_rr;
      break;
     }


     *VAR_9 = VAR_10 = VAR_14;

     while ((VAR_15 = FUNC_8(
         VAR_10)) != ((void*)0))
      FUNC_1(
          VAR_8, VAR_15);
     break;
    } else
     FUNC_4(VAR_8, VAR_14);
   }
   if (VAR_17) {





    continue;
   }
  } else if ((VAR_10->mode & VAR_1) == VAR_0) {
   int VAR_18;


   VAR_18 = FUNC_6(VAR_7, VAR_10);
   if (VAR_18 != VAR_6)
    return (VAR_18);





   if (VAR_10->rr_moved) {




    if (VAR_10->rr_moved_has_re_only)
     continue;

   } else if (VAR_10->re) {





    FUNC_4(VAR_8, VAR_10);
    continue;
   } else if (VAR_10->re_descendant) {






    if (FUNC_7(VAR_10) == 0)
     continue;



   }
  }
  break;
 }

 if ((VAR_10->mode & VAR_1) != VAR_2 || VAR_10->number == -1)
  return (VAR_6);

 VAR_13 = 0;
 VAR_12 = VAR_10->number;
 VAR_8->cache_files.first = ((void*)0);
 VAR_8->cache_files.last = &(VAR_8->cache_files.first);
 VAR_11.first = ((void*)0);
 VAR_11.last = &VAR_11.first;



 while (VAR_8->pending_files.used > 0 &&
     (VAR_8->pending_files.files[0]->number == -1 ||
      VAR_8->pending_files.files[0]->number == VAR_12)) {
  if (VAR_10->number == -1) {
   VAR_10->next = ((void*)0);
   *VAR_11.last = VAR_10;
   VAR_11.last = &(VAR_10->next);
  } else {
   VAR_13++;
   FUNC_1(VAR_8, VAR_10);
  }
  VAR_10 = FUNC_3(VAR_8);
 }

 if (VAR_13 == 0) {
  *VAR_9 = VAR_10;
  return ((VAR_10 == ((void*)0))?VAR_3:VAR_6);
 }
 if (VAR_10->number == -1) {
  VAR_10->next = ((void*)0);
  *VAR_11.last = VAR_10;
  VAR_11.last = &(VAR_10->next);
 } else {
  VAR_13++;
  FUNC_1(VAR_8, VAR_10);
 }

 if (VAR_13 > 1) {




  for (VAR_10 = VAR_8->cache_files.first;
      VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
   VAR_10->nlinks = VAR_13;
 }


 if (VAR_11.first != ((void*)0)) {
  *VAR_8->cache_files.last = VAR_11.first;
  VAR_8->cache_files.last = VAR_11.last;
 }
 *VAR_9 = FUNC_2(VAR_8);
 return ((*VAR_9 == ((void*)0))?VAR_3:VAR_6);

fatal_rr:
 FUNC_0(&VAR_7->archive, VAR_4,
     "Failed to connect 'CL' pointer to 'RE' rr_moved pointer of "
     "Rockridge extensions: current position = %jd, CL offset = %jd",
     (intmax_t)VAR_8->current_position, (intmax_t)VAR_10->cl_offset);
 return (VAR_5);
}
