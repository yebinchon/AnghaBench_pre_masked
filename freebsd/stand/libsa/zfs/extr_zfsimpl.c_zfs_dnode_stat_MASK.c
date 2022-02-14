
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* zp_size; void* zp_gid; void* zp_uid; void* zp_mode; } ;
typedef TYPE_1__ znode_phys_t ;
typedef void* uint64_t ;
struct stat {void* st_size; void* st_gid; void* st_uid; void* st_mode; } ;
typedef int spa_t ;
typedef int sa_hdr_phys_t ;
struct TYPE_7__ {scalar_t__ dn_bonustype; scalar_t__ dn_bonuslen; int dn_flags; scalar_t__ dn_bonus; } ;
typedef TYPE_2__ dnode_phys_t ;
typedef int blkptr_t ;


 size_t FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (int const*,int *,void*) ;

__attribute__((used)) static int
FUNC_7(const spa_t *VAR_7, dnode_phys_t *VAR_8, struct stat *VAR_9)
{

 if (VAR_8->dn_bonustype != VAR_0) {
  znode_phys_t *VAR_10 = (znode_phys_t *)VAR_8->dn_bonus;

  VAR_9->st_mode = VAR_10->zp_mode;
  VAR_9->st_uid = VAR_10->zp_uid;
  VAR_9->st_gid = VAR_10->zp_gid;
  VAR_9->st_size = VAR_10->zp_size;
 } else {
  sa_hdr_phys_t *VAR_11;
  int VAR_12;
  size_t VAR_13 = 0;
  void *VAR_14 = ((void*)0);

  if (VAR_8->dn_bonuslen != 0)
   VAR_11 = (sa_hdr_phys_t *)FUNC_1(VAR_8);
  else {
   if ((VAR_8->dn_flags & VAR_1) != 0) {
    blkptr_t *VAR_15 = FUNC_2(VAR_8);
    int VAR_16;

    VAR_13 = FUNC_0(VAR_15);
    VAR_14 = FUNC_4(VAR_13);
    VAR_16 = FUNC_6(VAR_7, VAR_15, VAR_14);
    if (VAR_16 != 0) {
     FUNC_5(VAR_14, VAR_13);
     return (VAR_16);
    }
    VAR_11 = VAR_14;
   } else {
    return (VAR_2);
   }
  }
  VAR_12 = FUNC_3(VAR_11);
  VAR_9->st_mode = *(uint64_t *)((char *)VAR_11 + VAR_12 +
      VAR_4);
  VAR_9->st_uid = *(uint64_t *)((char *)VAR_11 + VAR_12 +
      VAR_6);
  VAR_9->st_gid = *(uint64_t *)((char *)VAR_11 + VAR_12 +
      VAR_3);
  VAR_9->st_size = *(uint64_t *)((char *)VAR_11 + VAR_12 +
      VAR_5);
  if (VAR_14 != ((void*)0))
   FUNC_5(VAR_14, VAR_13);
 }

 return (0);
}
