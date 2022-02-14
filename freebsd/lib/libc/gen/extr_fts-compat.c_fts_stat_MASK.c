
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_short ;
struct freebsd11_stat {scalar_t__ st_dev; scalar_t__ st_ino; int st_mode; int st_nlink; } ;
struct TYPE_3__ {int fts_flags; int fts_errno; scalar_t__ fts_dev; scalar_t__ fts_ino; scalar_t__ fts_level; struct TYPE_3__* fts_cycle; struct TYPE_3__* fts_parent; int fts_name; int fts_nlink; int fts_accpath; struct freebsd11_stat* fts_statp; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 void* VAR_14 ;
 scalar_t__ FUNC_5 (int ,struct freebsd11_stat*) ;
 scalar_t__ FUNC_6 (int ,struct freebsd11_stat*) ;
 int FUNC_7 (struct freebsd11_stat*,char,int) ;

__attribute__((used)) static u_short
FUNC_8(FTS *VAR_15, FTSENT *VAR_16, int VAR_17)
{
 FTSENT *VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 struct freebsd11_stat *VAR_21, VAR_22;
 int VAR_23;


 VAR_21 = FUNC_1(VAR_7) ? &VAR_22 : VAR_16->fts_statp;
 if (FUNC_1(VAR_6) || VAR_17) {
  if (FUNC_6(VAR_16->fts_accpath, VAR_21)) {
   VAR_23 = VAR_14;
   if (!FUNC_5(VAR_16->fts_accpath, VAR_21)) {
    VAR_14 = 0;
    return (VAR_11);
   }
   VAR_16->fts_errno = VAR_23;
   goto err;
  }
 } else if (FUNC_5(VAR_16->fts_accpath, VAR_21)) {
  VAR_16->fts_errno = VAR_14;
err: FUNC_7(VAR_21, 0, sizeof(*VAR_21));
  return (VAR_8);
 }

 if (FUNC_2(VAR_21->st_mode)) {







  VAR_19 = VAR_16->fts_dev = VAR_21->st_dev;
  VAR_20 = VAR_16->fts_ino = VAR_21->st_ino;
  VAR_16->fts_nlink = VAR_21->st_nlink;

  if (FUNC_0(VAR_16->fts_name))
   return (VAR_3);







  for (VAR_18 = VAR_16->fts_parent;
      VAR_18->fts_level >= VAR_9; VAR_18 = VAR_18->fts_parent)
   if (VAR_20 == VAR_18->fts_ino && VAR_19 == VAR_18->fts_dev) {
    VAR_16->fts_cycle = VAR_18;
    return (VAR_1);
   }
  return (VAR_0);
 }
 if (FUNC_3(VAR_21->st_mode))
  return (VAR_10);
 if (FUNC_4(VAR_21->st_mode))
  return (VAR_4);
 return (VAR_2);
}
