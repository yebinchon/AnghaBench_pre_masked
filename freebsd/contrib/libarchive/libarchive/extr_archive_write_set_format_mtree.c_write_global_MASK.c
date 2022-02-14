
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int keys; int processing; scalar_t__ uid; scalar_t__ gid; scalar_t__ mode; scalar_t__ fflags_set; scalar_t__ fflags_clear; int type; } ;
struct archive_string {scalar_t__ length; unsigned int s; } ;
struct att_counter_set {TYPE_8__* flags_list; TYPE_7__* mode_list; TYPE_6__* gid_list; TYPE_5__* uid_list; } ;
struct mtree_writer {int keys; TYPE_9__ set; struct archive_string buf; scalar_t__ dironly; struct att_counter_set acs; } ;
typedef unsigned int intmax_t ;
struct TYPE_19__ {int count; TYPE_4__* m_entry; } ;
struct TYPE_18__ {int count; TYPE_3__* m_entry; } ;
struct TYPE_17__ {int count; TYPE_2__* m_entry; } ;
struct TYPE_16__ {int count; TYPE_1__* m_entry; } ;
struct TYPE_11__ {int s; } ;
struct TYPE_15__ {scalar_t__ fflags_set; scalar_t__ fflags_clear; TYPE_10__ fflags_text; } ;
struct TYPE_14__ {scalar_t__ mode; } ;
struct TYPE_13__ {scalar_t__ gid; TYPE_10__ gname; } ;
struct TYPE_12__ {scalar_t__ uid; TYPE_10__ uname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct archive_string*,char*) ;
 int FUNC_1 (struct archive_string*) ;
 int FUNC_2 (struct archive_string*) ;
 int FUNC_3 (struct archive_string*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (struct archive_string*,int ) ;

__attribute__((used)) static void
FUNC_6(struct mtree_writer *VAR_10)
{
 struct archive_string VAR_11;
 struct archive_string VAR_12;
 struct att_counter_set *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_2(&VAR_11);
 FUNC_2(&VAR_12);
 VAR_14 = VAR_10->keys & VAR_9;
 VAR_15 = VAR_10->set.keys;
 VAR_16 = VAR_14;
 VAR_13 = &VAR_10->acs;
 if (VAR_10->set.processing) {



  VAR_16 &= ~VAR_6;
  if (VAR_13->uid_list == ((void*)0))
   VAR_16 &= ~(VAR_8 | VAR_7);
  else if (VAR_15 & (VAR_8 | VAR_7)) {
   if (VAR_13->uid_list->count < 2 ||
       VAR_10->set.uid == VAR_13->uid_list->m_entry->uid)
    VAR_16 &= ~(VAR_8 | VAR_7);
  }
  if (VAR_13->gid_list == ((void*)0))
   VAR_16 &= ~(VAR_4 | VAR_3);
  else if (VAR_15 & (VAR_4 | VAR_3)) {
   if (VAR_13->gid_list->count < 2 ||
       VAR_10->set.gid == VAR_13->gid_list->m_entry->gid)
    VAR_16 &= ~(VAR_4 | VAR_3);
  }
  if (VAR_13->mode_list == ((void*)0))
   VAR_16 &= ~VAR_5;
  else if (VAR_15 & VAR_5) {
   if (VAR_13->mode_list->count < 2 ||
       VAR_10->set.mode == VAR_13->mode_list->m_entry->mode)
    VAR_16 &= ~VAR_5;
  }
  if (VAR_13->flags_list == ((void*)0))
   VAR_16 &= ~VAR_2;
  else if ((VAR_15 & VAR_2) != 0) {
   if (VAR_13->flags_list->count < 2 ||
       (VAR_13->flags_list->m_entry->fflags_set ==
    VAR_10->set.fflags_set &&
        VAR_13->flags_list->m_entry->fflags_clear ==
    VAR_10->set.fflags_clear))
    VAR_16 &= ~VAR_2;
  }
 } else {
  if (VAR_13->uid_list == ((void*)0))
   VAR_14 &= ~(VAR_8 | VAR_7);
  if (VAR_13->gid_list == ((void*)0))
   VAR_14 &= ~(VAR_4 | VAR_3);
  if (VAR_13->mode_list == ((void*)0))
   VAR_14 &= ~VAR_5;
  if (VAR_13->flags_list == ((void*)0))
   VAR_14 &= ~VAR_2;
 }
 if ((VAR_14 & VAR_16 & VAR_6) != 0) {
  if (VAR_10->dironly) {
   FUNC_0(&VAR_11, " type=dir");
   VAR_10->set.type = VAR_0;
  } else {
   FUNC_0(&VAR_11, " type=file");
   VAR_10->set.type = VAR_1;
  }
 }
 if ((VAR_14 & VAR_16 & VAR_8) != 0) {
  if (FUNC_4(&(VAR_13->uid_list->m_entry->uname)) > 0) {
   FUNC_0(&VAR_11, " uname=");
   FUNC_5(&VAR_11, VAR_13->uid_list->m_entry->uname.s);
  } else {
   VAR_14 &= ~VAR_8;
   if ((VAR_15 & VAR_8) != 0)
    FUNC_0(&VAR_12, " uname");
  }
 }
 if ((VAR_14 & VAR_16 & VAR_7) != 0) {
  VAR_10->set.uid = VAR_13->uid_list->m_entry->uid;
  FUNC_3(&VAR_11, " uid=%jd",
      (intmax_t)VAR_10->set.uid);
 }
 if ((VAR_14 & VAR_16 & VAR_4) != 0) {
  if (FUNC_4(&(VAR_13->gid_list->m_entry->gname)) > 0) {
   FUNC_0(&VAR_11, " gname=");
   FUNC_5(&VAR_11, VAR_13->gid_list->m_entry->gname.s);
  } else {
   VAR_14 &= ~VAR_4;
   if ((VAR_15 & VAR_4) != 0)
    FUNC_0(&VAR_12, " gname");
  }
 }
 if ((VAR_14 & VAR_16 & VAR_3) != 0) {
  VAR_10->set.gid = VAR_13->gid_list->m_entry->gid;
  FUNC_3(&VAR_11, " gid=%jd",
      (intmax_t)VAR_10->set.gid);
 }
 if ((VAR_14 & VAR_16 & VAR_5) != 0) {
  VAR_10->set.mode = VAR_13->mode_list->m_entry->mode;
  FUNC_3(&VAR_11, " mode=%o",
      (unsigned int)VAR_10->set.mode);
 }
 if ((VAR_14 & VAR_16 & VAR_2) != 0) {
  if (FUNC_4(
      &(VAR_13->flags_list->m_entry->fflags_text)) > 0) {
   FUNC_0(&VAR_11, " flags=");
   FUNC_5(&VAR_11,
       VAR_13->flags_list->m_entry->fflags_text.s);
   VAR_10->set.fflags_set =
       VAR_13->flags_list->m_entry->fflags_set;
   VAR_10->set.fflags_clear =
       VAR_13->flags_list->m_entry->fflags_clear;
  } else {
   VAR_14 &= ~VAR_2;
   if ((VAR_15 & VAR_2) != 0)
    FUNC_0(&VAR_12, " flags");
  }
 }
 if (VAR_12.length > 0)
  FUNC_3(&VAR_10->buf, "/unset%s\n", VAR_12.s);
 FUNC_1(&VAR_12);
 if (VAR_11.length > 0)
  FUNC_3(&VAR_10->buf, "/set%s\n", VAR_11.s);
 FUNC_1(&VAR_11);
 VAR_10->set.keys = VAR_14;
 VAR_10->set.processing = 1;
}
