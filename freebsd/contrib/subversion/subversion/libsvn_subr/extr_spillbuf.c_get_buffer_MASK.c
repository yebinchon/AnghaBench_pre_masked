
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blocksize; struct memblock_t* avail; int pool; struct memblock_t* out_for_reading; } ;
typedef TYPE_1__ svn_spillbuf_t ;
struct memblock_t {struct memblock_t* next; void* data; } ;


 void* FUNC_0 (int ,int) ;

__attribute__((used)) static struct memblock_t *
FUNC_1(svn_spillbuf_t *VAR_0)
{
  struct memblock_t *VAR_1 = VAR_0->out_for_reading;

  if (VAR_1 != ((void*)0))
    {
      VAR_0->out_for_reading = ((void*)0);
      return VAR_1;
    }

  if (VAR_0->avail == ((void*)0))
    {
      VAR_1 = FUNC_0(VAR_0->pool, sizeof(*VAR_1));
      VAR_1->data = FUNC_0(VAR_0->pool, VAR_0->blocksize);
      return VAR_1;
    }

  VAR_1 = VAR_0->avail;
  VAR_0->avail = VAR_1->next;
  return VAR_1;
}
