
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_exec {int dummy; } ;
struct external_exec {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int exec_hdr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct internal_exec,long) ;
 int FUNC_1 (struct internal_exec,int ) ;
 int FUNC_2 (struct internal_exec,int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,struct internal_exec*) ;
 TYPE_1__* FUNC_4 (int *) ;



 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;





 int FUNC_8 (int *) ;
 struct internal_exec* FUNC_9 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd *VAR_9)
{
  struct external_exec VAR_10;
  struct internal_exec *VAR_11 = FUNC_9 (VAR_9);


  switch (FUNC_5 (VAR_9))
    {
    case 134:
      switch (FUNC_7 (VAR_9))
 {
 case 132:
   FUNC_2 (*VAR_11, VAR_7);
   break;
 case 131:
   FUNC_2 (*VAR_11, VAR_2);
   break;
 default:
 case 130:
   FUNC_2 (*VAR_11, VAR_3);
   break;
 }
      break;
    case 133:
      switch (FUNC_7 (VAR_9))
 {
 case 129:
   FUNC_2 (*VAR_11, VAR_5);
   break;
 case 128:
   FUNC_2 (*VAR_11, VAR_6);
   break;
 default:
   FUNC_2 (*VAR_11, VAR_4);
   break;
 }
      break;
    case 135:
      FUNC_2 (*VAR_11, VAR_1);
      break;
    default:
      FUNC_2 (*VAR_11, VAR_7);
    }

  FUNC_8 (VAR_9);

  FUNC_1 (*VAR_11, FUNC_4 (VAR_9)->exec_hdr_flags);

  FUNC_0 (*VAR_11, (long)(FUNC_6 (VAR_9) & VAR_0));

  FUNC_3 (VAR_9, VAR_11);

  return VAR_8;
}
