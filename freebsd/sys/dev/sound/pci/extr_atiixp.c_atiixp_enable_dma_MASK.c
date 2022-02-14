
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atiixp_chinfo {int enable_bit; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct atiixp_chinfo *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_1->parent, VAR_0);
 if (!(VAR_2 & VAR_1->enable_bit)) {
  VAR_2 |= VAR_1->enable_bit;
  FUNC_1(VAR_1->parent, VAR_0, VAR_2);
 }
}
