
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_bitmap {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct memory_bitmap*) ;
 int FUNC_1 (struct memory_bitmap*) ;
 int FUNC_2 (struct memory_bitmap*,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct memory_bitmap *VAR_1, struct memory_bitmap *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 while (VAR_3 != VAR_0) {
  FUNC_2(VAR_1, VAR_3);
  VAR_3 = FUNC_0(VAR_2);
 }
}
