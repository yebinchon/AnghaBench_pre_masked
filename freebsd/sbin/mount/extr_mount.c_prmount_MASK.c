
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
typedef int u_char ;
struct TYPE_2__ {scalar_t__* val; } ;
struct statfs {char* f_mntfromname; char* f_mntonname; char* f_fstypename; int f_flags; scalar_t__ f_owner; scalar_t__ f_syncwrites; scalar_t__ f_asyncwrites; scalar_t__ f_syncreads; scalar_t__ f_asyncreads; TYPE_1__ f_fsid; } ;
struct passwd {char* pw_name; } ;
struct opt {int o_opt; char* o_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct passwd* FUNC_0 (scalar_t__) ;
 struct opt* VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;

void
FUNC_2(struct statfs *VAR_4)
{
 uint64_t VAR_5;
 unsigned int VAR_6;
 struct opt *VAR_7;
 struct passwd *VAR_8;

 (void)FUNC_1("%s on %s (%s", VAR_4->f_mntfromname, VAR_4->f_mntonname,
     VAR_4->f_fstypename);

 VAR_5 = VAR_4->f_flags & VAR_1;
 for (VAR_7 = VAR_2; VAR_5 != 0 && VAR_7->o_opt != 0; VAR_7++)
  if (VAR_5 & VAR_7->o_opt) {
   (void)FUNC_1(", %s", VAR_7->o_name);
   VAR_5 &= ~VAR_7->o_opt;
  }




 if ((VAR_5 & VAR_0) != 0 || VAR_4->f_owner != 0) {
  (void)FUNC_1(", mounted by ");
  if ((VAR_8 = FUNC_0(VAR_4->f_owner)) != ((void*)0))
   (void)FUNC_1("%s", VAR_8->pw_name);
  else
   (void)FUNC_1("%d", VAR_4->f_owner);
 }
 if (VAR_3) {
  if (VAR_4->f_syncwrites != 0 || VAR_4->f_asyncwrites != 0)
   (void)FUNC_1(", writes: sync %ju async %ju",
       (uintmax_t)VAR_4->f_syncwrites,
       (uintmax_t)VAR_4->f_asyncwrites);
  if (VAR_4->f_syncreads != 0 || VAR_4->f_asyncreads != 0)
   (void)FUNC_1(", reads: sync %ju async %ju",
       (uintmax_t)VAR_4->f_syncreads,
       (uintmax_t)VAR_4->f_asyncreads);
  if (VAR_4->f_fsid.val[0] != 0 || VAR_4->f_fsid.val[1] != 0) {
   FUNC_1(", fsid ");
   for (VAR_6 = 0; VAR_6 < sizeof(VAR_4->f_fsid); VAR_6++)
    FUNC_1("%02x", ((u_char *)&VAR_4->f_fsid)[VAR_6]);
  }
 }
 (void)FUNC_1(")\n");
}
