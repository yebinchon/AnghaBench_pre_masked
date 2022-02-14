
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct smb_sb_info {int dummy; } ;
typedef int mm_segment_t ;
struct TYPE_2__ {int (* ioctl ) (struct socket*,int ,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct socket* FUNC_2 (struct smb_sb_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct socket*,int ,unsigned long) ;

int
FUNC_5(struct smb_sb_info *VAR_1)
{
 mm_segment_t VAR_2;
 int VAR_3, VAR_4;
 struct socket *VAR_5 = FUNC_2(VAR_1);

 VAR_2 = FUNC_1();
 FUNC_3(FUNC_0());
 VAR_4 = VAR_5->ops->ioctl(VAR_5, VAR_0, (unsigned long) &VAR_3);
 FUNC_3(VAR_2);
 return (VAR_4 >= 0) ? VAR_3 : VAR_4;
}
