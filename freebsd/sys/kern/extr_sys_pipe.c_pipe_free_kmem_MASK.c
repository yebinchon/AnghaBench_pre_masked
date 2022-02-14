
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_3__ {scalar_t__ npages; scalar_t__ pos; scalar_t__ cnt; } ;
struct TYPE_4__ {int * buffer; scalar_t__ size; } ;
struct pipe {TYPE_1__ pipe_map; TYPE_2__ pipe_buffer; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct pipe*) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct pipe *VAR_2)
{

 FUNC_0(!FUNC_3(FUNC_1(VAR_2)),
     ("pipe_free_kmem: pipe mutex locked"));

 if (VAR_2->pipe_buffer.buffer != ((void*)0)) {
  FUNC_2(&VAR_0, VAR_2->pipe_buffer.size);
  FUNC_4(VAR_1,
      (vm_offset_t)VAR_2->pipe_buffer.buffer,
      (vm_offset_t)VAR_2->pipe_buffer.buffer + VAR_2->pipe_buffer.size);
  VAR_2->pipe_buffer.buffer = ((void*)0);
 }

 {
  VAR_2->pipe_map.cnt = 0;
  VAR_2->pipe_map.pos = 0;
  VAR_2->pipe_map.npages = 0;
 }

}
