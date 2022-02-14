
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebuf {scalar_t__ eb_magic; unsigned char* eb_end; unsigned char* eb_start; unsigned char* eb_used; int eb_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;
 unsigned char* FUNC_2 (size_t) ;

__attribute__((used)) static int
FUNC_3(struct ebuf *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4, *VAR_5;
 size_t VAR_6;

 FUNC_0(VAR_2 != ((void*)0) && VAR_2->eb_magic == VAR_0);

 VAR_6 = VAR_2->eb_end - VAR_2->eb_start + (VAR_1 / 4) + VAR_3;

 VAR_4 = FUNC_2(VAR_6);
 if (VAR_4 == ((void*)0))
  return (-1);
 VAR_5 =
     VAR_4 + (VAR_1 / 4) + VAR_3 + (VAR_2->eb_used - VAR_2->eb_start);

 FUNC_1(VAR_2->eb_used, VAR_5, VAR_2->eb_size);

 VAR_2->eb_start = VAR_4;
 VAR_2->eb_used = VAR_5;
 VAR_2->eb_end = VAR_4 + VAR_6;

 return (0);
}
