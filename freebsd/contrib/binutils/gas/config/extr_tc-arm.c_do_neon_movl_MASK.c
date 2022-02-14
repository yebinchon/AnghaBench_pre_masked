
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neon_type_el {int size; scalar_t__ type; } ;
struct TYPE_2__ {unsigned int instruction; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct neon_type_el FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct neon_type_el VAR_7 = FUNC_0 (2, VAR_0,
    VAR_3 | VAR_2, VAR_5 | VAR_4);
  unsigned VAR_8 = VAR_7.size >> 3;
  VAR_6.instruction |= VAR_8 << 19;
  FUNC_1 (0, VAR_7.type == VAR_1, -1);
}
