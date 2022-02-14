
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef scalar_t__ uchar_t ;
typedef int pid_t ;
typedef int dtrace_hdl_t ;
struct TYPE_4__ {scalar_t__* instr; uintptr_t addr; int pid; int * dtp; } ;
typedef TYPE_1__ dtrace_dis_t ;
struct TYPE_5__ {int d86_len; scalar_t__* d86_bytes; int * d86_check_func; int d86_get_byte; TYPE_1__* d86_data; } ;
typedef TYPE_2__ dis86_t ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_1(uchar_t *VAR_5, dtrace_hdl_t *VAR_6, pid_t VAR_7, uintptr_t VAR_8,
    char VAR_9)
{
 dtrace_dis_t VAR_10;
 dis86_t VAR_11;
 uint_t VAR_12;

 VAR_10.instr = VAR_5;
 VAR_10.dtp = VAR_6;
 VAR_10.pid = VAR_7;
 VAR_10.addr = VAR_8;

 VAR_11.d86_data = &VAR_10;
 VAR_11.d86_get_byte = VAR_4;
 VAR_11.d86_check_func = ((void*)0);

 VAR_12 = (VAR_9 == VAR_1) ? VAR_2 : VAR_3;

 if (FUNC_0(&VAR_11, VAR_12) != 0)
  return (-1);






 if (VAR_11.d86_len == 1 &&
     (uchar_t)VAR_11.d86_bytes[0] == VAR_0)
  return (-1);

 return (VAR_11.d86_len);
}
