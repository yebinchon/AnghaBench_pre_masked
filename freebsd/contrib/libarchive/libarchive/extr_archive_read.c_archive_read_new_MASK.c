
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {int vtable; int state; int magic; } ;
struct TYPE_2__ {int first; int * last; } ;
struct archive_read {struct archive archive; TYPE_1__ passphrases; int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;

struct archive *
FUNC_3(void)
{
 struct archive_read *VAR_2;

 VAR_2 = (struct archive_read *)FUNC_2(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_2->archive.magic = VAR_0;

 VAR_2->archive.state = VAR_1;
 VAR_2->entry = FUNC_0(&VAR_2->archive);
 VAR_2->archive.vtable = FUNC_1();

 VAR_2->passphrases.last = &VAR_2->passphrases.first;

 return (&VAR_2->archive);
}
