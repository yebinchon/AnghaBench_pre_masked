
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_metadata {char* name; } ;
struct ftrace_event_call {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 int FUNC_4 (char const*) ;
 int VAR_5 ;

int FUNC_5(struct ftrace_event_call *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 const char *VAR_9;

 VAR_9 = ((struct syscall_metadata *)VAR_6->data)->name;
 VAR_8 = FUNC_4(VAR_9);
 if (VAR_8 < 0 || VAR_8 >= VAR_1)
  return -VAR_0;
 FUNC_0(&VAR_5);
 if (!VAR_4)
  VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7) {
  FUNC_3(VAR_8, VAR_2);
  VAR_4++;
 }
 FUNC_1(&VAR_5);
 return VAR_7;
}
