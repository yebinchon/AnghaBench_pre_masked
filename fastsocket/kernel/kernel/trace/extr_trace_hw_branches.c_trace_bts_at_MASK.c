
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bts_trace {int (* read ) (int ,void*,struct bts_struct*) ;} ;
struct TYPE_4__ {int to; int from; } ;
struct TYPE_3__ {TYPE_2__ lbr; } ;
struct bts_struct {int qualifier; TYPE_1__ variant; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*,struct bts_struct*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct bts_trace *VAR_1, void *VAR_2)
{
 struct bts_struct VAR_3;
 int VAR_4 = 0;

 FUNC_0(!VAR_1->read);
 if (!VAR_1->read)
  return;

 VAR_4 = VAR_1->read(VAR_0, VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return;

 switch (VAR_3.qualifier) {
 case 128:
  FUNC_2(VAR_3.variant.lbr.from, VAR_3.variant.lbr.to);
  break;
 }
}
