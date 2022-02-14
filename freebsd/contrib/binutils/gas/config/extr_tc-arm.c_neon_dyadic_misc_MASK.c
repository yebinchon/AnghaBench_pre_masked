
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
typedef enum neon_el_type { ____Placeholder_neon_el_type } neon_el_type ;
struct TYPE_2__ {int instruction; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct neon_type_el FUNC_2 (int,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static void
FUNC_6 (enum neon_el_type VAR_7, unsigned VAR_8,
                  unsigned VAR_9)
{
  enum neon_shape VAR_10 = FUNC_4 (VAR_0, VAR_2, VAR_1);
  struct neon_type_el VAR_11 = FUNC_2 (3, VAR_10, VAR_4 | VAR_9, VAR_4,
                                            VAR_8 | VAR_5);
  if (VAR_11.type == VAR_3)
    {
      VAR_6.instruction = FUNC_0 (VAR_6.instruction);
      FUNC_5 (FUNC_3 (VAR_10), 0, -1);
    }
  else
    {
      VAR_6.instruction = FUNC_1 (VAR_6.instruction);
      FUNC_5 (FUNC_3 (VAR_10), VAR_11.type == VAR_7, VAR_11.size);
    }
}
