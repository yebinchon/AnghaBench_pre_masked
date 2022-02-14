
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fb_info {scalar_t__ fb_size; scalar_t__ fb_vbase; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(struct fb_info *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{

 FUNC_0((VAR_1 < VAR_0->fb_size), ("Offset %#08x out of fb size", VAR_1));
 *(uint32_t *)(VAR_0->fb_vbase + VAR_1) = VAR_2;
}
