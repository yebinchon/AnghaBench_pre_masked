
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uid_t ;
typedef int gid_t ;
typedef int boolean_t ;
struct TYPE_13__ {int a_type; scalar_t__ a_id; int a_perm; } ;
typedef TYPE_1__ aclent_t ;
struct TYPE_14__ {int aent_type; int allowed; } ;
typedef TYPE_2__ acevals_t ;
struct TYPE_15__ {int seen; scalar_t__ numusers; scalar_t__ numgroups; int dfacl_flag; int acl_mask; TYPE_2__ other_obj; TYPE_2__ group_obj; scalar_t__ hasmask; int group; int user; TYPE_2__ user_obj; } ;
typedef TYPE_3__ ace_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_3__*,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (void**,int) ;

__attribute__((used)) static int
FUNC_6(ace_list_t *VAR_11, aclent_t **VAR_12, int *VAR_13,
    uid_t VAR_14, gid_t VAR_15, boolean_t VAR_16)
{
 int VAR_17 = 0;
 aclent_t *VAR_18, *VAR_19 = ((void*)0);
 acevals_t *VAR_20;
 int VAR_21;

 if ((VAR_11->seen & (VAR_10 | VAR_7 | VAR_8)) !=
     (VAR_10 | VAR_7 | VAR_8)) {
  VAR_17 = VAR_5;
  goto out;
 }
 if ((! VAR_11->hasmask) && (VAR_11->numusers + VAR_11->numgroups > 0)) {
  VAR_17 = VAR_5;
  goto out;
 }

 VAR_21 = 3 + VAR_11->numusers + VAR_11->numgroups;




 if ((VAR_11->hasmask) || (! VAR_11->dfacl_flag))
  VAR_21 += 1;

 if (FUNC_5((void **)&VAR_19,
     VAR_21 * sizeof (aclent_t)) != 0) {
  VAR_17 = VAR_4;
  goto out;
 }
 VAR_18 = VAR_19;


 if (!(VAR_11->user_obj.aent_type & VAR_10)) {
  VAR_17 = VAR_3;
  goto out;
 }

 VAR_17 = FUNC_2(&VAR_11->user_obj, VAR_18, VAR_11, VAR_14, VAR_15,
     VAR_16);

 if (VAR_17 != 0)
  goto out;
 ++VAR_18;

 VAR_20 = ((void*)0);
 for (VAR_20 = FUNC_3(&VAR_11->user); VAR_20 != ((void*)0);
     VAR_20 = FUNC_0(&VAR_11->user, VAR_20)) {
  if (!(VAR_20->aent_type & VAR_9)) {
   VAR_17 = VAR_3;
   goto out;
  }
  VAR_17 = FUNC_2(VAR_20, VAR_18, VAR_11, VAR_14, VAR_15,
      VAR_16);
  if (VAR_17 != 0)
   goto out;
  ++VAR_18;
 }

 if (!(VAR_11->group_obj.aent_type & VAR_7)) {
  VAR_17 = VAR_3;
  goto out;
 }
 VAR_17 = FUNC_2(&VAR_11->group_obj, VAR_18, VAR_11, VAR_14, VAR_15,
     VAR_16);
 if (VAR_17 != 0)
  goto out;
 ++VAR_18;

 VAR_20 = ((void*)0);
 for (VAR_20 = FUNC_3(&VAR_11->group); VAR_20 != ((void*)0);
     VAR_20 = FUNC_0(&VAR_11->group, VAR_20)) {
  if (!(VAR_20->aent_type & VAR_6)) {
   VAR_17 = VAR_3;
   goto out;
  }
  VAR_17 = FUNC_2(VAR_20, VAR_18, VAR_11, VAR_14, VAR_15,
      VAR_16);
  if (VAR_17 != 0)
   goto out;
  ++VAR_18;
 }






 if ((VAR_11->hasmask) || (! VAR_11->dfacl_flag)) {
  if (VAR_11->hasmask) {
   uint32_t VAR_22 = VAR_1;
   if (VAR_16)
    VAR_22 |= VAR_0;
   VAR_17 = FUNC_1(VAR_11->acl_mask ^ VAR_22,
       &VAR_18->a_perm, VAR_16);
   if (VAR_17 != 0)
    goto out;
  } else {

   VAR_17 = FUNC_1(VAR_11->group_obj.allowed,
       &VAR_18->a_perm, VAR_16);
   if (VAR_17 != 0)
    goto out;
  }
  VAR_18->a_id = 0;
  VAR_18->a_type = VAR_2 | VAR_11->dfacl_flag;
  ++VAR_18;
 }

 if (!(VAR_11->other_obj.aent_type & VAR_8)) {
  VAR_17 = VAR_3;
  goto out;
 }
 VAR_17 = FUNC_2(&VAR_11->other_obj, VAR_18, VAR_11, VAR_14, VAR_15,
     VAR_16);
 if (VAR_17 != 0)
  goto out;
 ++VAR_18;

 *VAR_12 = VAR_19;
 *VAR_13 = VAR_21;

out:
 if (VAR_17 != 0) {
  if (VAR_19 != ((void*)0))
   FUNC_4(VAR_19, VAR_21 * sizeof (aclent_t));
 }

 return (VAR_17);
}
