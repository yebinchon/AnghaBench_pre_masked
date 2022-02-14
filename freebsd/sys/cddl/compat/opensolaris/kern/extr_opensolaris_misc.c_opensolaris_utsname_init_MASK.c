
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pr_hostname; } ;
struct TYPE_3__ {int version; int release; int nodename; int sysname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int,char*,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(void *VAR_5)
{

 VAR_4.sysname = VAR_2;
 VAR_4.nodename = VAR_3;
 VAR_4.release = VAR_1;
 FUNC_0(VAR_4.version, sizeof(VAR_4.version), "%d", VAR_0);
}
