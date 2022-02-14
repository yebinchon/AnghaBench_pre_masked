
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {int pipe_alloc_mask; int pipe_cyclic_mask; TYPE_1__* comm_page; scalar_t__ bad_board; } ;
struct audiopipe {int index; int interleave; scalar_t__* dma_counter; int state; } ;
struct TYPE_2__ {scalar_t__* position; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct echoaudio *VAR_3, struct audiopipe *VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 char VAR_9;

 FUNC_0(("allocate_pipes: ch=%d int=%d\n", VAR_5, VAR_6));

 if (VAR_3->bad_board)
  return -VAR_1;

 VAR_9 = 1;

 for (VAR_8 = VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_8 |= 1 << (VAR_5 + VAR_7);
 if (VAR_3->pipe_alloc_mask & VAR_8) {
  FUNC_0(("allocate_pipes: channel already open\n"));
  return -VAR_0;
 }

 VAR_3->comm_page->position[VAR_5] = 0;
 VAR_3->pipe_alloc_mask |= VAR_8;
 if (VAR_9)
  VAR_3->pipe_cyclic_mask |= VAR_8;
 VAR_4->index = VAR_5;
 VAR_4->interleave = VAR_6;
 VAR_4->state = VAR_2;




 VAR_4->dma_counter = &VAR_3->comm_page->position[VAR_5];
 *VAR_4->dma_counter = 0;
 FUNC_0(("allocate_pipes: ok\n"));
 return VAR_5;
}
