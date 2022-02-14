
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl_entry {int dummy; } ;
struct posix_acl {TYPE_1__* a_entries; } ;
struct ocfs2_acl_entry {int e_id; int e_perm; int e_tag; } ;
struct TYPE_2__ {int e_id; void* e_perm; void* e_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct posix_acl* FUNC_3 (int,int ) ;

__attribute__((used)) static struct posix_acl *FUNC_4(const void *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6;
 struct posix_acl *VAR_7;

 if (!VAR_3)
  return ((void*)0);
 if (VAR_4 < sizeof(struct posix_acl_entry))
  return FUNC_0(-VAR_0);

 VAR_6 = VAR_4 / sizeof(struct posix_acl_entry);
 if (VAR_6 < 0)
  return FUNC_0(-VAR_0);
 if (VAR_6 == 0)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  struct ocfs2_acl_entry *VAR_8 =
   (struct ocfs2_acl_entry *)VAR_3;

  VAR_7->a_entries[VAR_5].e_tag = FUNC_1(VAR_8->e_tag);
  VAR_7->a_entries[VAR_5].e_perm = FUNC_1(VAR_8->e_perm);
  VAR_7->a_entries[VAR_5].e_id = FUNC_2(VAR_8->e_id);
  VAR_3 += sizeof(struct posix_acl_entry);

 }
 return VAR_7;
}
