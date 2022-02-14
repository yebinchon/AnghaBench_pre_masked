
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_bitmap {int dummy; } ;


 int FUNC_0 (struct memory_bitmap*,unsigned long,void**,unsigned int*) ;
 int FUNC_1 (unsigned int,void*) ;

__attribute__((used)) static int FUNC_2(struct memory_bitmap *VAR_0, unsigned long VAR_1)
{
 void *VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3);
 if (!VAR_4)
  FUNC_1(VAR_3, VAR_2);
 return VAR_4;
}
