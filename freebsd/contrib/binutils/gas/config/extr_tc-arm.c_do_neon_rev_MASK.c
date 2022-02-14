
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neon_type_el {unsigned int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_2__ {int instruction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__ VAR_8 ;
 struct neon_type_el FUNC_3 (int,int,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int,unsigned int) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  enum neon_shape VAR_9 = FUNC_5 (VAR_0, VAR_2, VAR_1);
  struct neon_type_el VAR_10 = FUNC_3 (2, VAR_9,
    VAR_6, VAR_5 | VAR_3 | VAR_4 | VAR_7);
  unsigned VAR_11 = (VAR_8.instruction >> 7) & 3;



  unsigned VAR_12 = (VAR_11 == 2) ? 16 : (VAR_11 == 1) ? 32 : (VAR_11 == 0) ? 64 : 0;
  FUNC_1 (VAR_12 != 0);
  FUNC_2 (VAR_10.size >= VAR_12,
              FUNC_0("elements must be smaller than reversal region"));
  FUNC_6 (FUNC_4 (VAR_9), 1, VAR_10.size);
}
