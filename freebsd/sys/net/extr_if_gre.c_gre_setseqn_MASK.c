
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct grehdr {int gre_flags; int * gre_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct grehdr *VAR_3, uint32_t VAR_4)
{
 uint32_t *VAR_5;
 uint16_t VAR_6;

 VAR_5 = VAR_3->gre_opts;
 VAR_6 = FUNC_2(VAR_3->gre_flags);
 FUNC_0((VAR_6 & VAR_2) != 0,
     ("gre_setseqn called, but GRE_FLAGS_SP isn't set "));
 if (VAR_6 & VAR_0)
  VAR_5++;
 if (VAR_6 & VAR_1)
  VAR_5++;
 *VAR_5 = FUNC_1(VAR_4);
}
