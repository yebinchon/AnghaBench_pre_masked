
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * prev; } ;
struct parsefile {int fd; TYPE_1__ basestrpush; int * strpush; struct parsefile* prev; int linno; int nextc; int lleft; int nleft; } ;


 scalar_t__ FUNC_0 (int) ;
 struct parsefile* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct parsefile *VAR_5;

 VAR_0->nleft = VAR_3;
 VAR_0->lleft = VAR_1;
 VAR_0->nextc = VAR_2;
 VAR_0->linno = VAR_4;
 VAR_5 = (struct parsefile *)FUNC_0(sizeof (struct parsefile));
 VAR_5->prev = VAR_0;
 VAR_5->fd = -1;
 VAR_5->strpush = ((void*)0);
 VAR_5->basestrpush.prev = ((void*)0);
 VAR_0 = VAR_5;
}
