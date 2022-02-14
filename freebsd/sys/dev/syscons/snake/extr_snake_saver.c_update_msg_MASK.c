
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ldavg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (int ,int ,char*,char*,char*,int,int,int,int,int,int) ;
 int FUNC_3 (int ,char*,char*,char*) ;

__attribute__((used)) static inline void
FUNC_4(void)
{
 if (!VAR_0) {
  VAR_4 = FUNC_3(VAR_3, "%s %s", VAR_6, VAR_5);
  return;
 }
 VAR_4 = FUNC_2(VAR_3, VAR_1,
     "%s %s (%d.%02d %d.%02d, %d.%02d)",
     VAR_6, VAR_5,
     FUNC_0(VAR_2.ldavg[0]), FUNC_1(VAR_2.ldavg[0]),
     FUNC_0(VAR_2.ldavg[1]), FUNC_1(VAR_2.ldavg[1]),
     FUNC_0(VAR_2.ldavg[2]), FUNC_1(VAR_2.ldavg[2]));
}
