
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zilog_t ;
typedef int u_longlong_t ;
struct TYPE_2__ {scalar_t__ lr_length; scalar_t__ lr_offset; scalar_t__ lr_foid; } ;
typedef TYPE_1__ lr_truncate_t ;
typedef int longlong_t ;


 int FUNC_0 (char*,char*,int ,int ,int ) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(zilog_t *VAR_1, int VAR_2, void *VAR_3)
{
 lr_truncate_t *VAR_4 = VAR_3;

 (void) FUNC_0("%sfoid %llu, offset 0x%llx, length 0x%llx\n", VAR_0,
     (u_longlong_t)VAR_4->lr_foid, (longlong_t)VAR_4->lr_offset,
     (u_longlong_t)VAR_4->lr_length);
}
