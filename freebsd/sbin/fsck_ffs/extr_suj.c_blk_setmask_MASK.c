
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jblkrec {int jb_oldfrags; int jb_frags; } ;



__attribute__((used)) static void
FUNC_0(struct jblkrec *VAR_0, int *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0->jb_oldfrags; VAR_2 < VAR_0->jb_oldfrags + VAR_0->jb_frags; VAR_2++)
  *VAR_1 |= 1 << VAR_2;
}
