
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int dummy; } ;
typedef int kmem_bufctl_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,size_t) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_3, size_t VAR_4,
      size_t VAR_5, int VAR_6, size_t *VAR_7,
      unsigned int *VAR_8)
{
 int VAR_9;
 size_t VAR_10;
 size_t VAR_11 = VAR_1 << VAR_3;
 if (VAR_6 & VAR_0) {
  VAR_10 = 0;
  VAR_9 = VAR_11 / VAR_4;

  if (VAR_9 > VAR_2)
   VAR_9 = VAR_2;
 } else {
  VAR_9 = (VAR_11 - sizeof(struct slab)) /
     (VAR_4 + sizeof(kmem_bufctl_t));





  if (FUNC_0(VAR_9, VAR_5) + VAR_9*VAR_4
         > VAR_11)
   VAR_9--;

  if (VAR_9 > VAR_2)
   VAR_9 = VAR_2;

  VAR_10 = FUNC_0(VAR_9, VAR_5);
 }
 *VAR_8 = VAR_9;
 *VAR_7 = VAR_11 - VAR_9*VAR_4 - VAR_10;
}
