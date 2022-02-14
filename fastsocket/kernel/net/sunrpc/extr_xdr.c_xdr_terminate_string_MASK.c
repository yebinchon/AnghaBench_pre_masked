
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xdr_buf {size_t const page_base; int * pages; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(struct xdr_buf *VAR_1, const u32 VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_0(VAR_1->pages[0], VAR_0);
 VAR_3[VAR_1->page_base + VAR_2] = '\0';
 FUNC_1(VAR_3, VAR_0);
}
