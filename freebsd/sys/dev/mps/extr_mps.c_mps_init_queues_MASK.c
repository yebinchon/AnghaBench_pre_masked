
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mps_softc {int pqdepth; int num_replies; int fqdepth; int replyframesz; int replyfreeindex; scalar_t__ reply_busaddr; scalar_t__* free_queue; scalar_t__ post_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static int
FUNC_1(struct mps_softc *VAR_1)
{
 int VAR_2;

 FUNC_0((uint8_t *)VAR_1->post_queue, 0xff, VAR_1->pqdepth * 8);






 if (VAR_1->num_replies >= VAR_1->fqdepth)
  return (VAR_0);




 for (VAR_2 = 0; VAR_2 < VAR_1->fqdepth; VAR_2++)
  VAR_1->free_queue[VAR_2] = VAR_1->reply_busaddr + (VAR_2 * VAR_1->replyframesz);
 VAR_1->replyfreeindex = VAR_1->num_replies;

 return (0);
}
