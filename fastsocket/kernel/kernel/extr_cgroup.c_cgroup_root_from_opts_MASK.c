
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroupfs_root {int name; int release_agent_path; int flags; scalar_t__ subsys_bits; } ;
struct cgroup_sb_opts {int name; int release_agent; int flags; scalar_t__ subsys_bits; int none; } ;


 int VAR_0 ;
 struct cgroupfs_root* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cgroupfs_root*) ;
 int FUNC_2 (struct cgroupfs_root*) ;
 int FUNC_3 (struct cgroupfs_root*) ;
 struct cgroupfs_root* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct cgroupfs_root *FUNC_6(struct cgroup_sb_opts *VAR_2)
{
 struct cgroupfs_root *VAR_3;

 if (!VAR_2->subsys_bits && !VAR_2->none)
  return ((void*)0);

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 if (!FUNC_2(VAR_3)) {
  FUNC_3(VAR_3);
  return FUNC_0(-VAR_0);
 }
 FUNC_1(VAR_3);

 VAR_3->subsys_bits = VAR_2->subsys_bits;
 VAR_3->flags = VAR_2->flags;
 if (VAR_2->release_agent)
  FUNC_5(VAR_3->release_agent_path, VAR_2->release_agent);
 if (VAR_2->name)
  FUNC_5(VAR_3->name, VAR_2->name);
 return VAR_3;
}
