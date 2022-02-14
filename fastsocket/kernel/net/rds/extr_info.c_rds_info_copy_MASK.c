
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_info_iterator {scalar_t__ offset; int * pages; int * addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void*,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (char*,int ,int *,scalar_t__,unsigned long,void*,unsigned long) ;

void FUNC_5(struct rds_info_iterator *VAR_2, void *VAR_3,
     unsigned long VAR_4)
{
 unsigned long VAR_5;

 while (VAR_4) {
  if (!VAR_2->addr)
   VAR_2->addr = FUNC_0(*VAR_2->pages, VAR_0);

  VAR_5 = FUNC_3(VAR_4, VAR_1 - VAR_2->offset);

  FUNC_4("page %p addr %p offset %lu this %lu data %p "
     "bytes %lu\n", *VAR_2->pages, VAR_2->addr,
     VAR_2->offset, VAR_5, VAR_3, VAR_4);

  FUNC_2(VAR_2->addr + VAR_2->offset, VAR_3, VAR_5);

  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
  VAR_2->offset += VAR_5;

  if (VAR_2->offset == VAR_1) {
   FUNC_1(VAR_2->addr, VAR_0);
   VAR_2->addr = ((void*)0);
   VAR_2->offset = 0;
   VAR_2->pages++;
  }
 }
}
