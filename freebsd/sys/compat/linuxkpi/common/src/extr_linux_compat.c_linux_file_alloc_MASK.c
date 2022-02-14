
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct linux_file {int f_count; int f_kqlock; TYPE_1__ f_selinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int ,int ) ;
 struct linux_file* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

struct linux_file *
FUNC_3(void)
{
 struct linux_file *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);


 VAR_5->f_count = 1;


 FUNC_2(&VAR_5->f_kqlock);
 FUNC_0(&VAR_5->f_selinfo.si_note, &VAR_5->f_kqlock,
     VAR_1, VAR_4,
     VAR_2, VAR_3);

 return (VAR_5);
}
