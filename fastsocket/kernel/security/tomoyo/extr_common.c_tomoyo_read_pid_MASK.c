
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_io_buffer {scalar_t__ read_avail; int read_eof; int read_step; } ;
struct tomoyo_domain_info {TYPE_1__* domainname; int profile; } ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int name; } ;


 struct task_struct* FUNC_0 (int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct tomoyo_io_buffer*,char*,int const,int ,int ) ;
 struct tomoyo_domain_info* FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct tomoyo_io_buffer *VAR_1)
{
 if (VAR_1->read_avail == 0 && !VAR_1->read_eof) {
  const int VAR_2 = VAR_1->read_step;
  struct task_struct *VAR_3;
  struct tomoyo_domain_info *VAR_4 = ((void*)0);
  FUNC_1(&VAR_0);
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   VAR_4 = FUNC_4(VAR_3);
  FUNC_2(&VAR_0);
  if (VAR_4)
   FUNC_3(VAR_1, "%d %u %s", VAR_2, VAR_4->profile,
      VAR_4->domainname->name);
  VAR_1->read_eof = 1;
 }
 return 0;
}
