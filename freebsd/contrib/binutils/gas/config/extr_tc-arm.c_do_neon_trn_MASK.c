
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neon_type_el {int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_2__ {int instruction; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 struct neon_type_el FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  enum neon_shape VAR_9 = FUNC_3 (VAR_0, VAR_2, VAR_1);
  struct neon_type_el VAR_10 = FUNC_1 (2, VAR_9,
    VAR_6, VAR_5 | VAR_3 | VAR_4 | VAR_7);
  VAR_8.instruction = FUNC_0 (VAR_8.instruction);
  FUNC_4 (FUNC_2 (VAR_9), 1, VAR_10.size);
}
