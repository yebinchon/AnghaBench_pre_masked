
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dos_partition {int dummy; } ;
struct TYPE_2__ {struct dos_partition* parts; } ;


 int FUNC_0 (struct dos_partition*,int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_1;
    struct dos_partition *VAR_2;

    FUNC_1();
    for (VAR_1 = 0; VAR_1 < 4; ++VAR_1) {
 VAR_2 = &VAR_0.parts[VAR_1];
 FUNC_0(VAR_2, sizeof(*VAR_2));
    }
}
