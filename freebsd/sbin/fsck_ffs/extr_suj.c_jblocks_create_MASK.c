
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jextent {int dummy; } ;
struct jblocks {int jb_avail; void* jb_extent; scalar_t__ jb_off; scalar_t__ jb_head; scalar_t__ jb_used; } ;


 int FUNC_0 (void*,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static struct jblocks *
FUNC_2(void)
{
 struct jblocks *VAR_0;
 int VAR_1;

 VAR_0 = FUNC_1(sizeof(*VAR_0));
 VAR_0->jb_avail = 10;
 VAR_0->jb_used = 0;
 VAR_0->jb_head = 0;
 VAR_0->jb_off = 0;
 VAR_1 = sizeof(struct jextent) * VAR_0->jb_avail;
 VAR_0->jb_extent = FUNC_1(VAR_1);
 FUNC_0(VAR_0->jb_extent, VAR_1);

 return (VAR_0);
}
