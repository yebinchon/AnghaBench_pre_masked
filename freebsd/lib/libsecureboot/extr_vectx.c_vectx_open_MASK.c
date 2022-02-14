
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vtable; } ;
struct vectx {int vec_fd; char const* vec_path; char* vec_want; int vec_status; size_t vec_hashsz; TYPE_1__ vec_ctx; TYPE_2__* vec_md; scalar_t__ vec_off; int vec_size; } ;
struct stat {int st_size; int st_mode; } ;
typedef int off_t ;
struct TYPE_7__ {int (* init ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_2__ VAR_6 ;
 size_t VAR_7 ;
 TYPE_2__ VAR_8 ;
 size_t VAR_9 ;
 TYPE_2__ VAR_10 ;
 size_t VAR_11 ;
 TYPE_2__ VAR_12 ;
 char* FUNC_1 (int,char const*) ;
 int FUNC_2 (struct vectx*) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,int ,int ) ;
 struct vectx* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (struct vectx*,int ,int ) ;

struct vectx *
FUNC_10(int VAR_13, const char *VAR_14, off_t VAR_15, struct stat *VAR_16, int *VAR_17)
{
 struct vectx *VAR_18;
 struct stat VAR_19;
 size_t VAR_20;
 char *VAR_21;

 if (!VAR_16) {
  if (FUNC_3(VAR_13, &VAR_19) == 0)
   VAR_16 = &VAR_19;
 }


 if (VAR_16 && !FUNC_0(VAR_16->st_mode)) {
  *VAR_17 = 0;
  return (((void*)0));
 }

 VAR_18 = FUNC_5(sizeof(struct vectx));
 if (!VAR_18)
  goto enomem;
 VAR_18->vec_fd = VAR_13;
 VAR_18->vec_path = VAR_14;
 VAR_18->vec_size = VAR_16->st_size;
 VAR_18->vec_off = 0;
 VAR_18->vec_want = ((void*)0);
 VAR_18->vec_status = 0;
 VAR_20 = 0;

 VAR_21 = FUNC_1(VAR_13, VAR_14);
 if (!VAR_21) {
  VAR_18->vec_status = VAR_3;
  FUNC_8("%s: no entry", VAR_14);
 } else {
  if (FUNC_6(VAR_21, "no_hash", 7) == 0) {
   VAR_18->vec_status = VAR_2;
   VAR_20 = 0;
  } else if (FUNC_6(VAR_21, "sha256=", 7) == 0) {
   VAR_18->vec_md = &VAR_8;
   VAR_20 = VAR_7;
   VAR_21 += 7;
  } else {
   VAR_18->vec_status = VAR_4;
   FUNC_8("%s: no supported fingerprint", VAR_14);
  }
 }
 *VAR_17 = VAR_18->vec_status;
 VAR_18->vec_hashsz = VAR_20;
 VAR_18->vec_want = VAR_21;
 if (VAR_20 > 0) {
  VAR_18->vec_md->init(&VAR_18->vec_ctx.vtable);

  if (VAR_15 > 0) {
   FUNC_4(VAR_13, 0, VAR_1);
   FUNC_9(VAR_18, VAR_15, VAR_1);
  }
 }
 return (VAR_18);

enomem:
 *VAR_17 = VAR_0;
 FUNC_2(VAR_18);
 return (((void*)0));
}
