
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int count; int arg; int (* reseed ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ isc_lfsr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned char FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(isc_lfsr_t *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 unsigned char *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 > 0);

 VAR_3 = VAR_1;
 VAR_5 = VAR_2;

 while (VAR_5--) {
  *VAR_3 = 0;
  for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
   *VAR_3 |= FUNC_2(VAR_0);
   *VAR_3 <<= 1;
  }
  *VAR_3 |= FUNC_2(VAR_0);
  VAR_3++;
 }

 if (VAR_0->count != 0 && VAR_0->reseed != ((void*)0)) {
  if (VAR_0->count <= VAR_2 * 8)
   VAR_0->reseed(VAR_0, VAR_0->arg);
  else
   VAR_0->count -= (VAR_2 * 8);
 }
}
