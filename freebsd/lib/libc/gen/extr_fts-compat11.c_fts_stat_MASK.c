
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct freebsd11_stat {scalar_t__ st_dev; scalar_t__ st_ino; int st_mode; int st_nlink; } ;
struct TYPE_3__ {char* fts_accpath; char* fts_name; int fts_flags; int fts_errno; scalar_t__ fts_dev; scalar_t__ fts_ino; scalar_t__ fts_level; struct TYPE_3__* fts_cycle; struct TYPE_3__* fts_parent; int fts_nlink; struct freebsd11_stat* fts_statp; } ;
typedef TYPE_1__ FTSENT11 ;
typedef int FTS11 ;


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
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 void* VAR_16 ;
 scalar_t__ FUNC_5 (int,char const*,struct freebsd11_stat*,int ) ;
 int FUNC_6 (struct freebsd11_stat*,char,int) ;

__attribute__((used)) static int
FUNC_7(FTS11 *VAR_17, FTSENT11 *VAR_18, int VAR_19, int VAR_20)
{
 FTSENT11 *VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23;
 struct freebsd11_stat *VAR_24, VAR_25;
 int VAR_26;
 const char *VAR_27;

 if (VAR_20 == -1)
  VAR_27 = VAR_18->fts_accpath, VAR_20 = VAR_0;
 else
  VAR_27 = VAR_18->fts_name;


 VAR_24 = FUNC_1(VAR_9) ? &VAR_25 : VAR_18->fts_statp;
 if (FUNC_1(VAR_8) || VAR_19) {
  if (FUNC_5(VAR_20, VAR_27, VAR_24, 0)) {
   VAR_26 = VAR_16;
   if (FUNC_5(VAR_20, VAR_27, VAR_24,
       VAR_1)) {
    VAR_18->fts_errno = VAR_26;
    goto err;
   }
   VAR_16 = 0;
   if (FUNC_3(VAR_24->st_mode))
    return (VAR_13);
  }
 } else if (FUNC_5(VAR_20, VAR_27, VAR_24, VAR_1)) {
  VAR_18->fts_errno = VAR_16;
err: FUNC_6(VAR_24, 0, sizeof(*VAR_24));
  return (VAR_10);
 }

 if (FUNC_2(VAR_24->st_mode)) {







  VAR_22 = VAR_18->fts_dev = VAR_24->st_dev;
  VAR_23 = VAR_18->fts_ino = VAR_24->st_ino;
  VAR_18->fts_nlink = VAR_24->st_nlink;

  if (FUNC_0(VAR_18->fts_name))
   return (VAR_5);







  for (VAR_21 = VAR_18->fts_parent;
      VAR_21->fts_level >= VAR_11; VAR_21 = VAR_21->fts_parent)
   if (VAR_23 == VAR_21->fts_ino && VAR_22 == VAR_21->fts_dev) {
    VAR_18->fts_cycle = VAR_21;
    return (VAR_3);
   }
  return (VAR_2);
 }
 if (FUNC_3(VAR_24->st_mode))
  return (VAR_12);
 if (FUNC_4(VAR_24->st_mode))
  return (VAR_6);
 return (VAR_4);
}
