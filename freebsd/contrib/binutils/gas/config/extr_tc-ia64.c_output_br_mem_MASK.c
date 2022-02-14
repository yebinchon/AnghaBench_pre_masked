
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int brmask; TYPE_4__* next; } ;
struct TYPE_9__ {TYPE_1__ p; } ;
struct TYPE_10__ {TYPE_2__ record; } ;
struct TYPE_11__ {TYPE_3__ r; } ;
typedef TYPE_4__ unw_rec_list ;
struct TYPE_12__ {TYPE_1__* pending_saves; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static unw_rec_list *
FUNC_1 (unsigned int VAR_2)
{
  unw_rec_list *VAR_3 = FUNC_0 (VAR_0);
  unw_rec_list *VAR_4 = VAR_3;

  VAR_3->r.record.p.brmask = VAR_2;
  VAR_1.pending_saves = &VAR_3->r.record.p;
  for (;;)
    {
      unw_rec_list *VAR_5 = VAR_4;


      VAR_2 &= ~(VAR_2 & (~VAR_2 + 1));
      if (!VAR_2)
 return VAR_3;
      VAR_4 = FUNC_0 (VAR_0);
      VAR_4->r.record.p.brmask = VAR_2;

      VAR_5->r.record.p.brmask ^= VAR_2;
      VAR_5->r.record.p.next = VAR_4;
    }
}
