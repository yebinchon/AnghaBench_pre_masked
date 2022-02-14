
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebuf {scalar_t__ eb_magic; unsigned char* eb_end; unsigned char* eb_start; unsigned char* eb_used; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct ebuf *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 size_t VAR_5;

 FUNC_0(VAR_2 != ((void*)0) && VAR_2->eb_magic == VAR_0);

 VAR_5 = VAR_2->eb_end - VAR_2->eb_start + VAR_3 + ((3 * VAR_1) / 4);

 VAR_4 = FUNC_1(VAR_2->eb_start, VAR_5);
 if (VAR_4 == ((void*)0))
  return (-1);

 VAR_2->eb_used = VAR_4 + (VAR_2->eb_used - VAR_2->eb_start);
 VAR_2->eb_start = VAR_4;
 VAR_2->eb_end = VAR_4 + VAR_5;

 return (0);
}
