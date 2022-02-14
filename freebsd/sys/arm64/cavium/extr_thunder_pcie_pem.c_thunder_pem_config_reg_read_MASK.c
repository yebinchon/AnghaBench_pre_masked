
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thunder_pem_softc {int reg_bsh; int reg_bst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static uint64_t
FUNC_5(struct thunder_pem_softc *VAR_3, int VAR_4)
{
 uint64_t VAR_5;


 FUNC_4(VAR_3->reg_bst, VAR_3->reg_bsh, VAR_2,
     FUNC_0(VAR_4));
 FUNC_2(VAR_3->reg_bst, VAR_3->reg_bsh, VAR_2, 8,
     VAR_0 | VAR_1);

 VAR_5 = FUNC_1(FUNC_3(VAR_3->reg_bst, VAR_3->reg_bsh,
     VAR_2));

 return (VAR_5);
}
