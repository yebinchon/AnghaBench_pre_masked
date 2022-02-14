
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {unsigned long start; unsigned long size; unsigned long async_size; unsigned long prev_pos; int ra_pages; } ;
struct file {int dummy; } ;
struct address_space {int page_tree; } ;
typedef unsigned long pgoff_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct address_space*,struct file*,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 void* FUNC_2 (struct file_ra_state*,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 unsigned long FUNC_4 (struct file_ra_state*,struct address_space*,struct file*) ;
 unsigned long FUNC_5 (int *,unsigned long,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct address_space*,struct file_ra_state*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_9(struct address_space *VAR_1,
     struct file_ra_state *VAR_2, struct file *VAR_3,
     bool VAR_4, pgoff_t VAR_5,
     unsigned long VAR_6)
{
 unsigned long VAR_7 = FUNC_3(VAR_2->ra_pages);




 if (!VAR_5)
  goto initial_readahead;





 if ((VAR_5 == (VAR_2->start + VAR_2->size - VAR_2->async_size) ||
      VAR_5 == (VAR_2->start + VAR_2->size))) {
  VAR_2->start += VAR_2->size;
  VAR_2->size = FUNC_2(VAR_2, VAR_7);
  VAR_2->async_size = VAR_2->size;
  goto readit;
 }







 if (VAR_4) {
  pgoff_t VAR_8;

  FUNC_6();
  VAR_8 = FUNC_5(&VAR_1->page_tree, VAR_5+1,VAR_7);
  FUNC_7();

  if (!VAR_8 || VAR_8 - VAR_5 > VAR_7)
   return 0;

  VAR_2->start = VAR_8;
  VAR_2->size = VAR_8 - VAR_5;
  VAR_2->size += VAR_6;
  VAR_2->size = FUNC_2(VAR_2, VAR_7);
  VAR_2->async_size = VAR_2->size;
  goto readit;
 }




 if (VAR_6 > VAR_7)
  goto initial_readahead;




 if (VAR_5 - (VAR_2->prev_pos >> VAR_0) <= 1UL)
  goto initial_readahead;





 if (FUNC_8(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7))
  goto readit;





 return FUNC_0(VAR_1, VAR_3, VAR_5, VAR_6, 0);

initial_readahead:
 VAR_2->start = VAR_5;
 VAR_2->size = FUNC_1(VAR_6, VAR_7);
 VAR_2->async_size = VAR_2->size > VAR_6 ? VAR_2->size - VAR_6 : VAR_2->size;

readit:





 if (VAR_5 == VAR_2->start && VAR_2->size == VAR_2->async_size) {
  VAR_2->async_size = FUNC_2(VAR_2, VAR_7);
  VAR_2->size += VAR_2->async_size;
 }

 return FUNC_4(VAR_2, VAR_1, VAR_3);
}
