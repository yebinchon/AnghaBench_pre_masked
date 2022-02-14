
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtpav_port {int mode; scalar_t__ output; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct mtpav {int num_ports; int spinlock; struct mtpav_port* ports; TYPE_1__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mtpav*,struct mtpav_port*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct mtpav *VAR_5 = (struct mtpav *)VAR_3;
 int VAR_6;

 FUNC_2(&VAR_5->spinlock, VAR_4);

 VAR_5->timer.expires = 1 + VAR_2;
 FUNC_0(&VAR_5->timer);

 for (VAR_6 = 0; VAR_6 <= VAR_5->num_ports * 2 + VAR_1; VAR_6++) {
  struct mtpav_port *VAR_7 = &VAR_5->ports[VAR_6];
  if ((VAR_7->mode & VAR_0) && VAR_7->output)
   FUNC_1(VAR_5, VAR_7, VAR_7->output);
 }
 FUNC_3(&VAR_5->spinlock, VAR_4);
}
