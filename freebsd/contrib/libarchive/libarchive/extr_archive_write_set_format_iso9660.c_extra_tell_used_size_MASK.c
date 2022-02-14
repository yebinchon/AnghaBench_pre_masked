
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct extr_rec* current; } ;
struct isoent {TYPE_2__ extr_rec_list; } ;
struct extr_rec {int offset; } ;
struct ctl_extr_rec {int cur_len; TYPE_1__* isoent; scalar_t__ use_extr; } ;
struct TYPE_3__ {struct isoent* parent; } ;



__attribute__((used)) static void
FUNC_0(struct ctl_extr_rec *VAR_0, int VAR_1)
{
 struct isoent *VAR_2;
 struct extr_rec *VAR_3;

 if (VAR_0->use_extr) {
  VAR_2 = VAR_0->isoent->parent;
  VAR_3 = VAR_2->extr_rec_list.current;
  if (VAR_3 != ((void*)0))
   VAR_3->offset += VAR_1;
 }
 VAR_0->cur_len += VAR_1;
}
