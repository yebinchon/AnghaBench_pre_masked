
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kinfo_file {int kf_fd; int kf_structsize; int kf_status; int kf_offset; int kf_ref_count; int kf_cap_rights; int kf_flags; int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {int f_count; int f_flag; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kinfo_file*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,struct kinfo_file*,struct filedesc*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct kinfo_file*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct file *VAR_3, int VAR_4, cap_rights_t *VAR_5,
    struct kinfo_file *VAR_6, struct filedesc *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_6, sizeof(*VAR_6));


 VAR_6->kf_type = VAR_2;
 VAR_6->kf_flags = FUNC_6(VAR_3->f_flag);
 if (VAR_5 != ((void*)0))
  VAR_6->kf_cap_rights = *VAR_5;
 else
  FUNC_1(&VAR_6->kf_cap_rights);
 VAR_6->kf_fd = VAR_4;
 VAR_6->kf_ref_count = VAR_3->f_count;
 VAR_6->kf_offset = FUNC_3(VAR_3);





 VAR_9 = FUNC_2(VAR_3, VAR_6, VAR_7);
 if (VAR_9 == 0)
  VAR_6->kf_status |= VAR_1;
 if ((VAR_8 & VAR_0) != 0)
  FUNC_4(VAR_6);
 else
  VAR_6->kf_structsize = FUNC_5(sizeof(*VAR_6), sizeof(uint64_t));
}
