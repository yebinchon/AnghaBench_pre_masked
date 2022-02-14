
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef int uint64_t ;
struct TYPE_12__ {int td_flags; int (* td_func ) (int ,int *,int *,int *,TYPE_3__ const*,int ) ;int td_arg; int td_spa; TYPE_1__* td_resume; } ;
typedef TYPE_2__ traverse_data_t ;
struct TYPE_13__ {int dn_nblkptr; int dn_flags; int * dn_blkptr; scalar_t__ dn_nlevels; } ;
typedef TYPE_3__ dnode_phys_t ;
struct TYPE_11__ {int zb_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int *,int *,int *,TYPE_3__ const*,int ) ;
 int FUNC_3 (int ,int *,int *,int *,TYPE_3__ const*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__ const*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(traverse_data_t *VAR_8, const dnode_phys_t *VAR_9,
    uint64_t VAR_10, uint64_t VAR_11)
{
 int VAR_12, VAR_13 = 0;
 zbookmark_phys_t VAR_14;

 if (VAR_11 != VAR_0 && VAR_8->td_resume != ((void*)0) &&
     VAR_11 < VAR_8->td_resume->zb_object)
  return (0);

 if (VAR_8->td_flags & VAR_4) {
  FUNC_1(&VAR_14, VAR_10, VAR_11, VAR_7,
      VAR_6);
  VAR_13 = VAR_8->td_func(VAR_8->td_spa, ((void*)0), ((void*)0), &VAR_14, VAR_9,
      VAR_8->td_arg);
  if (VAR_13 == VAR_5)
   return (0);
  if (VAR_13 != 0)
   return (VAR_13);
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->dn_nblkptr; VAR_12++) {
  FUNC_1(&VAR_14, VAR_10, VAR_11, VAR_9->dn_nlevels - 1, VAR_12);
  VAR_13 = FUNC_4(VAR_8, VAR_9, &VAR_9->dn_blkptr[VAR_12], &VAR_14);
  if (VAR_13 != 0)
   break;
 }

 if (VAR_13 == 0 && (VAR_9->dn_flags & VAR_2)) {
  FUNC_1(&VAR_14, VAR_10, VAR_11, 0, VAR_1);
  VAR_13 = FUNC_4(VAR_8, VAR_9, FUNC_0(VAR_9), &VAR_14);
 }

 if (VAR_13 == 0 && (VAR_8->td_flags & VAR_3)) {
  FUNC_1(&VAR_14, VAR_10, VAR_11, VAR_7,
      VAR_6);
  VAR_13 = VAR_8->td_func(VAR_8->td_spa, ((void*)0), ((void*)0), &VAR_14, VAR_9,
      VAR_8->td_arg);
  if (VAR_13 == VAR_5)
   return (0);
  if (VAR_13 != 0)
   return (VAR_13);
 }
 return (VAR_13);
}
