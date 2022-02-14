
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {int data; int (* callback ) (int ) ;} ;
struct TYPE_14__ {int flags; } ;
struct TYPE_15__ {int decl; TYPE_2__ common; int name; } ;
struct TYPE_18__ {TYPE_5__ common; TYPE_4__ unnamed; TYPE_3__ named; } ;
typedef TYPE_6__ section ;
struct TYPE_13__ {int (* named_section ) (int ,int ,int ) ;} ;
struct TYPE_19__ {TYPE_1__ asm_out; } ;
struct TYPE_12__ {int unlikely_text_section_name; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_6__*) ;

 int VAR_2 ;
 TYPE_10__* VAR_3 ;
 int FUNC_1 () ;
 TYPE_6__* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_7__ VAR_5 ;

void
FUNC_5 (section *VAR_6)
{
  if (VAR_4 == VAR_6)
    return;

  if (VAR_6->common.flags & VAR_1)
    VAR_4 = ((void*)0);
  else
    VAR_4 = VAR_6;

  switch (FUNC_0 (VAR_6))
    {
    case 130:
      if (VAR_3
   && !VAR_3->unlikely_text_section_name
   && FUNC_2 (VAR_6->named.name,
       VAR_2) == 0)
 VAR_3->unlikely_text_section_name = VAR_2;

      VAR_5.asm_out.named_section (VAR_6->named.name,
         VAR_6->named.common.flags,
         VAR_6->named.decl);
      break;

    case 128:
      VAR_6->unnamed.callback (VAR_6->unnamed.data);
      break;

    case 129:
      FUNC_1 ();
      break;
    }

  VAR_6->common.flags |= VAR_0;
}
