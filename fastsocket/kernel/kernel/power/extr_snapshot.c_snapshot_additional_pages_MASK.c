
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned int spanned_pages; } ;
struct bm_block {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;

unsigned int FUNC_1(struct zone *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2->spanned_pages, VAR_0);
 VAR_3 += FUNC_0(VAR_3 * sizeof(struct bm_block), VAR_1);
 return 2 * VAR_3;
}
