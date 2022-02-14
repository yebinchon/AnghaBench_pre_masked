
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_file {int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct file *VAR_1, struct kinfo_file *VAR_2, struct filedesc *VAR_3)
{

 VAR_2->kf_type = VAR_0;
 return (0);
}
