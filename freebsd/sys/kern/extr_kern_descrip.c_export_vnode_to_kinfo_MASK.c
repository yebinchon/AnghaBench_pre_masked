
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {int dummy; } ;
struct kinfo_file {int kf_fd; int kf_ref_count; int kf_offset; int kf_structsize; int kf_cap_rights; int kf_flags; int kf_status; int kf_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kinfo_file*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kinfo_file*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct vnode*,struct kinfo_file*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct vnode *VAR_3, int VAR_4, int VAR_5,
    struct kinfo_file *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6, sizeof(*VAR_6));

 VAR_6->kf_type = VAR_2;
 VAR_8 = FUNC_4(VAR_3, VAR_6);
 if (VAR_8 == 0)
  VAR_6->kf_status |= VAR_1;
 VAR_6->kf_flags = FUNC_6(VAR_5);
 FUNC_1(&VAR_6->kf_cap_rights);
 VAR_6->kf_fd = VAR_4;
 VAR_6->kf_ref_count = -1;
 VAR_6->kf_offset = -1;
 if ((VAR_7 & VAR_0) != 0)
  FUNC_2(VAR_6);
 else
  VAR_6->kf_structsize = FUNC_3(sizeof(*VAR_6), sizeof(uint64_t));
 FUNC_5(VAR_3);
}
