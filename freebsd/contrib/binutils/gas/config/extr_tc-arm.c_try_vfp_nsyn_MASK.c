
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_2__ {int * error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_13 ;
 struct neon_type_el FUNC_1 (int,int,int,int,...) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3 (int VAR_14, void (*VAR_15) (enum neon_shape))
{
  enum neon_shape VAR_16;
  struct neon_type_el VAR_17;

  switch (VAR_14)
    {
    case 2:
      VAR_16 = FUNC_2 (VAR_3, VAR_1, VAR_5);
      VAR_17 = FUNC_1 (2, VAR_16,
        VAR_7 | VAR_11, VAR_8 | VAR_9 | VAR_10 | VAR_11);
      break;

    case 3:
      VAR_16 = FUNC_2 (VAR_4, VAR_2, VAR_5);
      VAR_17 = FUNC_1 (3, VAR_16,
        VAR_7 | VAR_11, VAR_7 | VAR_11, VAR_8 | VAR_9 | VAR_10 | VAR_11);
      break;

    default:
      FUNC_0 ();
    }

  if (VAR_17.type != VAR_6)
    {
      VAR_15 (VAR_16);
      return VAR_12;
    }
  else
    VAR_13.error = ((void*)0);

  return VAR_0;
}
