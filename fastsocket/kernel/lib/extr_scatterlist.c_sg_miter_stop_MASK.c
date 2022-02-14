
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {scalar_t__ consumed; scalar_t__ length; int __flags; int * addr; int * page; int __offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct sg_mapping_iter *VAR_3)
{
 FUNC_0(VAR_3->consumed > VAR_3->length);


 if (VAR_3->addr) {
  VAR_3->__offset += VAR_3->consumed;

  if (VAR_3->__flags & VAR_2)
   FUNC_1(VAR_3->page);

  if (VAR_3->__flags & VAR_1) {
   FUNC_0(!FUNC_2());
   FUNC_4(VAR_3->addr, VAR_0);
  } else
   FUNC_3(VAR_3->page);

  VAR_3->page = ((void*)0);
  VAR_3->addr = ((void*)0);
  VAR_3->length = 0;
  VAR_3->consumed = 0;
 }
}
