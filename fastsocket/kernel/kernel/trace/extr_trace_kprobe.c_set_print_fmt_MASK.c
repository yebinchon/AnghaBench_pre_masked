
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* print_fmt; } ;
struct TYPE_4__ {TYPE_1__ fmt; } ;
struct trace_probe {TYPE_2__ call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_probe*,char*,int) ;
 char* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct trace_probe *VAR_2)
{
 int VAR_3;
 char *VAR_4;


 VAR_3 = FUNC_0(VAR_2, ((void*)0), 0);
 VAR_4 = FUNC_1(VAR_3 + 1, VAR_1);
 if (!VAR_4)
  return -VAR_0;


 FUNC_0(VAR_2, VAR_4, VAR_3 + 1);
 VAR_2->call.fmt.print_fmt = VAR_4;

 return 0;
}
