
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebuf {scalar_t__ eb_magic; scalar_t__ eb_size; scalar_t__ eb_used; scalar_t__ eb_end; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void const*,scalar_t__,size_t) ;
 int FUNC_2 (struct ebuf*,size_t) ;

int
FUNC_3(struct ebuf *VAR_1, const void *VAR_2, size_t VAR_3)
{

 FUNC_0(VAR_1 != ((void*)0) && VAR_1->eb_magic == VAR_0);

 if (VAR_3 > (size_t)(VAR_1->eb_end - (VAR_1->eb_used + VAR_1->eb_size))) {




  if (FUNC_2(VAR_1, VAR_3) == -1)
   return (-1);
 }
 FUNC_0(VAR_3 <=
     (size_t)(VAR_1->eb_end - (VAR_1->eb_used + VAR_1->eb_size)));




 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, VAR_1->eb_used + VAR_1->eb_size, VAR_3);
 VAR_1->eb_size += VAR_3;

 return (0);
}
