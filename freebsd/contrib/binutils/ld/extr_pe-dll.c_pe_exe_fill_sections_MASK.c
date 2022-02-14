
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef int bfd ;
struct TYPE_5__ {int ImageBase; } ;
struct TYPE_7__ {TYPE_1__ pe_opthdr; } ;
struct TYPE_6__ {int contents; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_9 (bfd *VAR_6, struct bfd_link_info *VAR_7)
{
  FUNC_8 (FUNC_0 (VAR_6));
  VAR_2 = FUNC_7 (VAR_6)->pe_opthdr.ImageBase;

  FUNC_2 (VAR_6, VAR_7);
  if (VAR_5 > 0)
    {
      FUNC_1 (VAR_1, VAR_4, VAR_5);


      FUNC_4 ();
      FUNC_5 (((void*)0), VAR_0);


      FUNC_6 ();


      FUNC_3 ();
    }
  VAR_4->contents = VAR_3;
}
