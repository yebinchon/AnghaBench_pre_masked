
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quicklist {long nr_pages; } ;


 long FUNC_0 (unsigned long) ;
 long FUNC_1 (long,long) ;

__attribute__((used)) static long FUNC_2(struct quicklist *VAR_0,
 unsigned long VAR_1, long VAR_2)
{
 long VAR_3;

 VAR_3 = VAR_0->nr_pages - FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_2);
}
