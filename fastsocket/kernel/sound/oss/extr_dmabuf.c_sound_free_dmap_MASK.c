
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_buffparms {int mapping_flags; int buffsize; int * raw_buf; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,int) ;
 struct page* FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct dma_buffparms *VAR_2)
{
 int VAR_3, VAR_4;
 struct page *VAR_5;
 unsigned long VAR_6, VAR_7;

 if (VAR_2->raw_buf == ((void*)0))
  return;
 if (VAR_2->mapping_flags & VAR_0)
  return;
 for (VAR_3 = 0, VAR_4 = VAR_1; VAR_4 < VAR_2->buffsize; VAR_3++, VAR_4 <<= 1);

 VAR_6 = (unsigned long) VAR_2->raw_buf;
 VAR_7 = VAR_6 + VAR_2->buffsize;

 for (VAR_5 = FUNC_2(VAR_6); VAR_5 <= FUNC_2(VAR_7); VAR_5++)
  FUNC_0(VAR_5);

 FUNC_1((unsigned long) VAR_2->raw_buf, VAR_3);
 VAR_2->raw_buf = ((void*)0);
}
