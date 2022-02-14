
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode_phys_t ;
typedef int spa_t ;
typedef int sa_hdr_phys_t ;
struct TYPE_6__ {scalar_t__ dn_bonustype; size_t dn_bonuslen; int dn_flags; char* dn_bonus; } ;
typedef TYPE_1__ dnode_phys_t ;
typedef int blkptr_t ;


 size_t FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int const*,TYPE_1__*,int ,char*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (void*,size_t) ;
 int FUNC_8 (int const*,int *,void*) ;

__attribute__((used)) static int
FUNC_9(const spa_t *VAR_4, dnode_phys_t *VAR_5, char *VAR_6, size_t VAR_7)
{
 int VAR_8 = 0;

 if (VAR_5->dn_bonustype == VAR_0) {
  sa_hdr_phys_t *VAR_9 = ((void*)0);
  size_t VAR_10 = 0;
  void *VAR_11 = ((void*)0);
  int VAR_12;
  char *VAR_13;

  if (VAR_5->dn_bonuslen != 0)
   VAR_9 = (sa_hdr_phys_t *)FUNC_1(VAR_5);
  else {
   blkptr_t *VAR_14;

   if ((VAR_5->dn_flags & VAR_1) == 0)
    return (VAR_2);
   VAR_14 = FUNC_2(VAR_5);

   VAR_10 = FUNC_0(VAR_14);
   VAR_11 = FUNC_6(VAR_10);
   VAR_8 = FUNC_8(VAR_4, VAR_14, VAR_11);
   if (VAR_8 != 0) {
    FUNC_7(VAR_11, VAR_10);
    return (VAR_8);
   }
   VAR_9 = VAR_11;
  }
  VAR_12 = FUNC_3(VAR_9);
  VAR_13 = (char *)((uintptr_t)VAR_9 + VAR_12 + VAR_3);
  FUNC_5(VAR_6, VAR_13, VAR_7);
  if (VAR_11 != ((void*)0))
   FUNC_7(VAR_11, VAR_10);
  return (0);
 }




 if (VAR_7 + sizeof(znode_phys_t) <= VAR_5->dn_bonuslen &&
     sizeof(znode_phys_t) <= sizeof(VAR_5->dn_bonus)) {
  FUNC_5(VAR_6, &VAR_5->dn_bonus[sizeof(znode_phys_t)], VAR_7);
 } else {
  VAR_8 = FUNC_4(VAR_4, VAR_5, 0, VAR_6, VAR_7);
 }
 return (VAR_8);
}
