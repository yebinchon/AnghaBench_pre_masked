
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* this_device; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,char**) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_7 = 0;
 int VAR_8;

 FUNC_5(&VAR_5);

 VAR_8 = ++VAR_6;
 if (VAR_6 == 1) {
  FUNC_1(&VAR_3, 0);
  FUNC_4(VAR_2, ((void*)0), 1);

  if (FUNC_0(&VAR_3)) {
   FUNC_2();
   VAR_7 = -VAR_0;
  }
 }

 FUNC_6(&VAR_5);

 if (VAR_7 == 0) {
  char VAR_9[20];
  char VAR_10[] = "EVENT=create";
  char *VAR_11[] = { VAR_10, VAR_9, ((void*)0) };

  FUNC_7(VAR_9, "COUNT=%d", VAR_8);
  FUNC_3(&VAR_4.this_device->kobj, VAR_1, VAR_11);
 }
 return VAR_7;
}
