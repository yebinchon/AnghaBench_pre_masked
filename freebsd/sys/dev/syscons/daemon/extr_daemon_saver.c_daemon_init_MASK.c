
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_2__ {char* pr_hostname; int pr_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* VAR_6 ;
 char* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int ,char*,char*,char*,char*) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(video_adapter_t *VAR_9)
{
 size_t VAR_10;

 FUNC_2(&VAR_8);
 for (;;) {
  VAR_10 = FUNC_5(VAR_8);
  FUNC_3(&VAR_8);

  VAR_5 = VAR_10 + 3 + FUNC_5(VAR_7) + 1 +
      FUNC_5(VAR_6);
  VAR_4 = FUNC_1(VAR_5 + 1, VAR_0, VAR_1);
  FUNC_2(&VAR_8);
  if (VAR_10 < FUNC_5(VAR_8)) {
   FUNC_0(VAR_4, VAR_0);
   continue;
  }
  break;
 }
 FUNC_4(VAR_4, "%s - %s %s", VAR_8, VAR_7, VAR_6);
 FUNC_3(&VAR_8);
 VAR_3 = 0;
 VAR_2 = ~0;

 return 0;
}
