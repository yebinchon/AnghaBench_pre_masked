
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*,unsigned long long,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct sbuf *VAR_4, uint64_t *VAR_5, int VAR_6)
{

 if (VAR_6)
  FUNC_1(VAR_4, "\n");
 FUNC_0(VAR_4, VAR_5[0], VAR_1);
 if (VAR_6 < (VAR_0 / 2 - 1) || VAR_5[1] != ~0ULL)
  FUNC_0(VAR_4, VAR_5[1], (VAR_5[0] & (1 << 17)) ? VAR_3 : VAR_2);
}
