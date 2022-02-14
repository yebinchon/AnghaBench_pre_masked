
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ fts_dev; char* fts_path; TYPE_1__* fts_cur; void* fts_rfd; TYPE_1__* fts_child; } ;
struct TYPE_17__ {int fts_instr; scalar_t__ fts_info; int fts_errno; int fts_flags; scalar_t__ fts_dev; char* fts_accpath; scalar_t__ fts_level; size_t fts_pathlen; struct TYPE_17__* fts_parent; void* fts_symfd; scalar_t__ fts_namelen; int fts_name; struct TYPE_17__* fts_link; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ FTS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,void*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (char*,int,int ) ;
 int VAR_20 ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_1__*,int,char*) ;
 void* FUNC_12 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_13 (char*,int ,scalar_t__) ;

FTSENT *
FUNC_14(FTS *VAR_21)
{
 FTSENT *VAR_22, *VAR_23;
 int VAR_24;
 char *VAR_25;
 int VAR_26;


 if (VAR_21->fts_cur == ((void*)0) || FUNC_2(VAR_15))
  return (((void*)0));


 VAR_22 = VAR_21->fts_cur;


 VAR_24 = VAR_22->fts_instr;
 VAR_22->fts_instr = VAR_9;


 if (VAR_24 == VAR_1) {
  VAR_22->fts_info = FUNC_12(VAR_21, VAR_22, 0);
  return (VAR_22);
 }







 if (VAR_24 == VAR_6 &&
     (VAR_22->fts_info == VAR_13 || VAR_22->fts_info == VAR_14)) {
  VAR_22->fts_info = FUNC_12(VAR_21, VAR_22, 1);
  if (VAR_22->fts_info == VAR_2 && !FUNC_2(VAR_8)) {
   if ((VAR_22->fts_symfd = FUNC_6(".", VAR_19 | VAR_18,
       0)) < 0) {
    VAR_22->fts_errno = VAR_20;
    VAR_22->fts_info = VAR_5;
   } else
    VAR_22->fts_flags |= VAR_16;
  }
  return (VAR_22);
 }


 if (VAR_22->fts_info == VAR_2) {

  if (VAR_24 == VAR_12 ||
      (FUNC_2(VAR_17) && VAR_22->fts_dev != VAR_21->fts_dev)) {
   if (VAR_22->fts_flags & VAR_16)
    (void)FUNC_5(VAR_22->fts_symfd);
   if (VAR_21->fts_child) {
    FUNC_9(VAR_21->fts_child);
    VAR_21->fts_child = ((void*)0);
   }
   VAR_22->fts_info = VAR_4;
   return (VAR_22);
  }


  if (VAR_21->fts_child != ((void*)0) && FUNC_2(VAR_7)) {
   FUNC_0(VAR_7);
   FUNC_9(VAR_21->fts_child);
   VAR_21->fts_child = ((void*)0);
  }
  if (VAR_21->fts_child != ((void*)0)) {
   if (FUNC_11(VAR_21, VAR_22, -1, VAR_22->fts_accpath)) {
    VAR_22->fts_errno = VAR_20;
    VAR_22->fts_flags |= VAR_3;
    for (VAR_22 = VAR_21->fts_child; VAR_22 != ((void*)0);
        VAR_22 = VAR_22->fts_link)
     VAR_22->fts_accpath =
         VAR_22->fts_parent->fts_accpath;
   }
  } else if ((VAR_21->fts_child = FUNC_8(VAR_21, VAR_0)) == ((void*)0)) {
   if (FUNC_2(VAR_15))
    return (((void*)0));
   return (VAR_22);
  }
  VAR_22 = VAR_21->fts_child;
  VAR_21->fts_child = ((void*)0);
  goto name;
 }


next: VAR_23 = VAR_22;
 if ((VAR_22 = VAR_22->fts_link) != ((void*)0)) {
  FUNC_7(VAR_23);





  if (VAR_22->fts_level == VAR_10) {
   if (FUNC_1(VAR_21, VAR_21->fts_rfd)) {
    FUNC_4(VAR_15);
    return (((void*)0));
   }
   FUNC_10(VAR_21, VAR_22);
   return (VAR_21->fts_cur = VAR_22);
  }






  if (VAR_22->fts_instr == VAR_12)
   goto next;
  if (VAR_22->fts_instr == VAR_6) {
   VAR_22->fts_info = FUNC_12(VAR_21, VAR_22, 1);
   if (VAR_22->fts_info == VAR_2 && !FUNC_2(VAR_8)) {
    if ((VAR_22->fts_symfd =
        FUNC_6(".", VAR_19 | VAR_18, 0)) < 0) {
     VAR_22->fts_errno = VAR_20;
     VAR_22->fts_info = VAR_5;
    } else
     VAR_22->fts_flags |= VAR_16;
   }
   VAR_22->fts_instr = VAR_9;
  }

name: VAR_25 = VAR_21->fts_path + FUNC_3(VAR_22->fts_parent);
  *VAR_25++ = '/';
  FUNC_13(VAR_25, VAR_22->fts_name, VAR_22->fts_namelen + 1);
  return (VAR_21->fts_cur = VAR_22);
 }


 VAR_22 = VAR_23->fts_parent;
 FUNC_7(VAR_23);

 if (VAR_22->fts_level == VAR_11) {




  FUNC_7(VAR_22);
  VAR_20 = 0;
  return (VAR_21->fts_cur = ((void*)0));
 }


 VAR_21->fts_path[VAR_22->fts_pathlen] = '\0';






 if (VAR_22->fts_level == VAR_10) {
  if (FUNC_1(VAR_21, VAR_21->fts_rfd)) {
   FUNC_4(VAR_15);
   return (((void*)0));
  }
 } else if (VAR_22->fts_flags & VAR_16) {
  if (FUNC_1(VAR_21, VAR_22->fts_symfd)) {
   VAR_26 = VAR_20;
   (void)FUNC_5(VAR_22->fts_symfd);
   VAR_20 = VAR_26;
   FUNC_4(VAR_15);
   return (((void*)0));
  }
  (void)FUNC_5(VAR_22->fts_symfd);
 } else if (!(VAR_22->fts_flags & VAR_3) &&
     FUNC_11(VAR_21, VAR_22->fts_parent, -1, "..")) {
  FUNC_4(VAR_15);
  return (((void*)0));
 }
 VAR_22->fts_info = VAR_22->fts_errno ? VAR_5 : VAR_4;
 return (VAR_21->fts_cur = VAR_22);
}
