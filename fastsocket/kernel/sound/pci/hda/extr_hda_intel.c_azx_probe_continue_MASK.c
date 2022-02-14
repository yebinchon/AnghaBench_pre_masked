
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct azx {int dev_index; int running; int init_failed; int card; int bus; TYPE_1__* fw; int beep_mode; } ;
struct TYPE_2__ {int data; int size; } ;


 int FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*) ;
 int FUNC_2 (struct azx*,int ) ;
 int FUNC_3 (struct azx*) ;
 int FUNC_4 (struct azx*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_5 (struct azx*) ;
 int* VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct azx *VAR_3)
{
 int VAR_4 = VAR_3->dev_index;
 int VAR_5;






 VAR_5 = FUNC_2(VAR_3, VAR_1[VAR_4]);
 if (VAR_5 < 0)
  goto out_free;
 if ((VAR_2[VAR_4] & 1) == 0) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 < 0)
   goto out_free;
 }


 VAR_5 = FUNC_8(VAR_3->bus);
 if (VAR_5 < 0)
  goto out_free;


 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 < 0)
  goto out_free;

 VAR_5 = FUNC_7(VAR_3->card);
 if (VAR_5 < 0)
  goto out_free;

 VAR_3->running = 1;
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 FUNC_0(VAR_3);

 return 0;

out_free:
 VAR_3->init_failed = 1;
 return VAR_5;
}
