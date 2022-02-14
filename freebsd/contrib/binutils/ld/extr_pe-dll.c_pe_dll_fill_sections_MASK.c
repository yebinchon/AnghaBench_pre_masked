
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfd_link_info {int pie; scalar_t__ shared; } ;
typedef int bfd ;
struct TYPE_9__ {int contents; } ;
struct TYPE_6__ {int ImageBase; } ;
struct TYPE_8__ {int dll; TYPE_1__ pe_opthdr; } ;
struct TYPE_7__ {int contents; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 int VAR_3 ;
 int FUNC_3 (int *,struct bfd_link_info*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;

void
FUNC_10 (bfd *VAR_8, struct bfd_link_info *VAR_9)
{
  FUNC_9 (FUNC_0 (VAR_8));
  VAR_4 = FUNC_8 (VAR_8)->pe_opthdr.ImageBase;

  FUNC_3 (VAR_8, VAR_9);
  if (VAR_7 > 0)
    {
      FUNC_1 (VAR_3, VAR_6, VAR_7);


      FUNC_5 ();
      FUNC_6 (((void*)0), VAR_0);


      FUNC_7 ();


      FUNC_4 ();
    }

  FUNC_2 (VAR_8, VAR_9);

  if (VAR_9->shared && !VAR_9->pie)
    FUNC_8 (VAR_8)->dll = 1;

  VAR_2->contents = VAR_1;
  VAR_6->contents = VAR_5;
}
