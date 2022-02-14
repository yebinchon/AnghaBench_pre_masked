
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {unsigned long size; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct file_ra_state *VAR_0,
      unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_0->size;
 unsigned long VAR_3;

 if (VAR_2 < VAR_1 / 16)
  VAR_3 = 4 * VAR_2;
 else
  VAR_3 = 2 * VAR_2;

 return FUNC_0(VAR_3, VAR_1);
}
