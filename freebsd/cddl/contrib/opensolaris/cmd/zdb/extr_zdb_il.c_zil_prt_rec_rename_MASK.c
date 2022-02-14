
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zilog_t ;
typedef char* u_longlong_t ;
struct TYPE_2__ {scalar_t__ lr_tdoid; scalar_t__ lr_sdoid; } ;
typedef TYPE_1__ lr_rename_t ;


 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_2(zilog_t *VAR_1, int VAR_2, void *VAR_3)
{
 lr_rename_t *VAR_4 = VAR_3;
 char *VAR_5 = (char *)(VAR_4 + 1);
 char *VAR_6 = VAR_5 + FUNC_1(VAR_5) + 1;

 (void) FUNC_0("%ssdoid %llu, tdoid %llu\n", VAR_0,
     (u_longlong_t)VAR_4->lr_sdoid, (u_longlong_t)VAR_4->lr_tdoid);
 (void) FUNC_0("%ssrc %s tgt %s\n", VAR_0, VAR_5, VAR_6);
}
