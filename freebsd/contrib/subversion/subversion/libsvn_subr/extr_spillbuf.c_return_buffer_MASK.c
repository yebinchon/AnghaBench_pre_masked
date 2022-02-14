
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct memblock_t* avail; } ;
typedef TYPE_1__ svn_spillbuf_t ;
struct memblock_t {struct memblock_t* next; } ;



__attribute__((used)) static void
FUNC_0(svn_spillbuf_t *VAR_0,
              struct memblock_t *VAR_1)
{
  VAR_1->next = VAR_0->avail;
  VAR_0->avail = VAR_1;
}
