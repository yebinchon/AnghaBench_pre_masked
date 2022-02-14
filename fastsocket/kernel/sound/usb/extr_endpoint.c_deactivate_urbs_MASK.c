
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct snd_usb_endpoint {unsigned int nurbs; TYPE_2__* urb; int unlink_mask; int active_mask; scalar_t__ next_packet_write_pos; scalar_t__ next_packet_read_pos; int ready_playback_urbs; int flags; TYPE_1__* chip; } ;
struct TYPE_4__ {struct urb* urb; } ;
struct TYPE_3__ {scalar_t__ async_unlink; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (unsigned int,int *) ;
 scalar_t__ FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static int FUNC_7(struct snd_usb_endpoint *VAR_2, int VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 if (!VAR_3 && VAR_2->chip->shutdown)
  return -VAR_0;

 VAR_6 = !VAR_4 && VAR_2->chip->async_unlink;

 FUNC_1(VAR_1, &VAR_2->flags);

 FUNC_0(&VAR_2->ready_playback_urbs);
 VAR_2->next_packet_read_pos = 0;
 VAR_2->next_packet_write_pos = 0;

 if (!VAR_6 && FUNC_2())
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->nurbs; VAR_5++) {
  if (FUNC_4(VAR_5, &VAR_2->active_mask)) {
   if (!FUNC_3(VAR_5, &VAR_2->unlink_mask)) {
    struct urb *VAR_7 = VAR_2->urb[VAR_5].urb;
    if (VAR_6)
     FUNC_6(VAR_7);
    else
     FUNC_5(VAR_7);
   }
  }
 }

 return 0;
}
