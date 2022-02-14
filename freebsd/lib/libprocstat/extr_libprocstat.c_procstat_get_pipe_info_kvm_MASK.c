
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipestat {uintptr_t addr; uintptr_t peer; int buffer_cnt; void* fs_typedep; } ;
struct TYPE_2__ {int cnt; } ;
struct pipe {TYPE_1__ pipe_buffer; scalar_t__ pipe_peer; } ;
struct filestat {uintptr_t addr; uintptr_t peer; int buffer_cnt; void* fs_typedep; } ;
typedef struct pipestat kvm_t ;


 int VAR_0 ;
 int FUNC_0 (struct pipestat*) ;
 int FUNC_1 (struct pipestat*,int) ;
 int FUNC_2 (struct pipestat*,unsigned long,struct pipe*,int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,void*) ;

__attribute__((used)) static int
FUNC_5(kvm_t *VAR_1, struct filestat *VAR_2,
    struct pipestat *VAR_3, char *VAR_4)
{
 struct pipe VAR_5;
 void *VAR_6;

 FUNC_0(VAR_1);
 FUNC_0(VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_3, sizeof(*VAR_3));
 VAR_6 = VAR_2->fs_typedep;
 if (VAR_6 == ((void*)0))
  goto fail;
 if (!FUNC_2(VAR_1, (unsigned long)VAR_6, &VAR_5, sizeof(struct pipe))) {
  FUNC_4("can't read pipe at %p", (void *)VAR_6);
  goto fail;
 }
 VAR_3->addr = (uintptr_t)VAR_6;
 VAR_3->peer = (uintptr_t)VAR_5.pipe_peer;
 VAR_3->buffer_cnt = VAR_5.pipe_buffer.cnt;
 return (0);

fail:
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_4, VAR_0, "error");
 return (1);
}
