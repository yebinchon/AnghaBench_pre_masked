
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpo_nibble {int l; int h; } ;



__attribute__((used)) static int
FUNC_0 (void *VAR_0, char *VAR_1)
{
 struct vpo_nibble *VAR_2 = (struct vpo_nibble *)VAR_0;


 *VAR_1++ = ((VAR_2->l >> 4) & 0x0f) + (VAR_2->h & 0xf0);

 return (0);
}
