
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
struct TYPE_2__ {int instruction; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct neon_type_el FUNC_1 (int,int ,int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  struct neon_type_el VAR_7 = FUNC_1 (2, VAR_0,
    VAR_2 | VAR_3, VAR_5 | VAR_4);


  VAR_6.instruction = FUNC_0 (VAR_6.instruction);
  if (VAR_7.type == VAR_1)
    VAR_6.instruction |= 0xc0;
  else
    VAR_6.instruction |= 0x80;
  FUNC_2 (0, 1, VAR_7.size / 2);
}
