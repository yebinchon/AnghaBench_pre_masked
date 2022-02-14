
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebuf {int eb_magic; scalar_t__ eb_size; int * eb_start; int * eb_used; int * eb_end; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ebuf*) ;
 void* FUNC_1 (size_t) ;

struct ebuf *
FUNC_2(size_t VAR_3)
{
 struct ebuf *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_3 += VAR_1;
 VAR_4->eb_start = FUNC_1(VAR_3);
 if (VAR_4->eb_start == ((void*)0)) {
  VAR_5 = VAR_2;
  FUNC_0(VAR_4);
  VAR_2 = VAR_5;
  return (((void*)0));
 }
 VAR_4->eb_end = VAR_4->eb_start + VAR_3;




 VAR_4->eb_used = VAR_4->eb_start + VAR_1 / 4;
 VAR_4->eb_size = 0;
 VAR_4->eb_magic = VAR_0;

 return (VAR_4);
}
