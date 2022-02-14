
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 unsigned long VAR_4 ;

int FUNC_2(struct file *VAR_5, unsigned long VAR_6,
    unsigned long VAR_7, unsigned long VAR_8,
    unsigned long VAR_9, unsigned long VAR_10)
{
 int VAR_11 = 0;

 if (VAR_9 < VAR_4) {
  VAR_11 = FUNC_0(VAR_3, FUNC_1(), VAR_0,
      VAR_2);

  if (VAR_11 == 0)
   VAR_3->flags |= VAR_1;
 }
 return VAR_11;
}
