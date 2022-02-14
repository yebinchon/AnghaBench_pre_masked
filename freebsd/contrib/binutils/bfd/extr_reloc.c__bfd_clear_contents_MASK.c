
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dst_mask; } ;
typedef TYPE_1__ reloc_howto_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;

void
FUNC_10 (reloc_howto_type *VAR_0,
       bfd *VAR_1,
       bfd_byte *VAR_2)
{
  int VAR_3;
  bfd_vma VAR_4 = 0;


  VAR_3 = FUNC_5 (VAR_0);
  switch (VAR_3)
    {
    default:
    case 0:
      FUNC_0 ();
    case 1:
      VAR_4 = FUNC_4 (VAR_1, VAR_2);
      break;
    case 2:
      VAR_4 = FUNC_1 (VAR_1, VAR_2);
      break;
    case 4:
      VAR_4 = FUNC_2 (VAR_1, VAR_2);
      break;
    case 8:



      FUNC_0 ();

      break;
    }


  VAR_4 &= ~VAR_0->dst_mask;


  switch (VAR_3)
    {
    default:
    case 0:
      FUNC_0 ();
    case 1:
      FUNC_9 (VAR_1, VAR_4, VAR_2);
      break;
    case 2:
      FUNC_6 (VAR_1, VAR_4, VAR_2);
      break;
    case 4:
      FUNC_7 (VAR_1, VAR_4, VAR_2);
      break;
    case 8:



      FUNC_0 ();

      break;
    }
}
