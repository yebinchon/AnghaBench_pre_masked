
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ address; scalar_t__ addend; scalar_t__ h; } ;
struct score_got_entry {scalar_t__ abfd; scalar_t__ symndx; TYPE_1__ d; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct score_got_entry *VAR_2 = (struct score_got_entry *)VAR_0;
  const struct score_got_entry *VAR_3 = (struct score_got_entry *)VAR_1;

  return VAR_2->abfd == VAR_3->abfd && VAR_2->symndx == VAR_3->symndx
    && (! VAR_2->abfd ? VAR_2->d.address == VAR_3->d.address
 : VAR_2->symndx >= 0 ? VAR_2->d.addend == VAR_3->d.addend
 : VAR_2->d.h == VAR_3->d.h);
}
