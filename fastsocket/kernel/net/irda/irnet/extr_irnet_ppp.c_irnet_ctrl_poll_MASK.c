
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_6__ {scalar_t__ event_index; int disco_number; int * discoveries; } ;
typedef TYPE_1__ irnet_socket ;
struct TYPE_7__ {scalar_t__ index; int rwait; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static inline unsigned int
FUNC_4(irnet_socket * VAR_6,
  struct file * VAR_7,
  poll_table * VAR_8)
{
  unsigned int VAR_9;

  FUNC_0(VAR_0, "(ap=0x%p)\n", VAR_6);

  FUNC_3(VAR_7, &VAR_5.rwait, VAR_8);
  VAR_9 = VAR_2 | VAR_4;

  if(VAR_6->event_index != VAR_5.index)
    VAR_9 |= VAR_1 | VAR_3;
  FUNC_1(VAR_0, " - mask=0x%X\n", VAR_9);
  return VAR_9;
}
