
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u_int32_t ;
struct TYPE_3__ {unsigned int (* hash ) (char*,int) ;unsigned int HIGH_MASK; unsigned int MAX_BUCKET; unsigned int LOW_MASK; } ;
typedef TYPE_1__ HTAB ;


 unsigned int FUNC_0 (char*,int) ;

u_int32_t
FUNC_1(HTAB *VAR_0, char *VAR_1, int VAR_2)
{
 unsigned int VAR_3, VAR_4;

 VAR_3 = VAR_0->hash(VAR_1, VAR_2);
 VAR_4 = VAR_3 & VAR_0->HIGH_MASK;
 if (VAR_4 > VAR_0->MAX_BUCKET)
  VAR_4 = VAR_4 & VAR_0->LOW_MASK;
 return (VAR_4);
}
