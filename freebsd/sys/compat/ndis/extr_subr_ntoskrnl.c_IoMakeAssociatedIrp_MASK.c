
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_4__* irp_master; } ;
struct TYPE_8__ {int irp_thread; } ;
struct TYPE_9__ {TYPE_1__ irp_overlay; } ;
struct TYPE_11__ {TYPE_3__ irp_assoc; TYPE_2__ irp_tail; int irp_flags; } ;
typedef TYPE_4__ irp ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static irp *
FUNC_3(irp *VAR_3, uint8_t VAR_4)
{
 irp *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5 == ((void*)0))
  return (((void*)0));

 FUNC_1(&VAR_2);
 VAR_5->irp_flags |= VAR_1;
 VAR_5->irp_tail.irp_overlay.irp_thread =
     VAR_3->irp_tail.irp_overlay.irp_thread;
 VAR_5->irp_assoc.irp_master = VAR_3;
 FUNC_2(&VAR_2);

 return (VAR_5);
}
