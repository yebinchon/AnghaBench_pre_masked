
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(size_t VAR_6)
{
 int VAR_7 = 0;
 size_t VAR_8;







 const int VAR_9[] = {
  VAR_2,
  VAR_1,
  VAR_5,
  VAR_3,
  VAR_4,
  VAR_0
 };

 const size_t VAR_10 = (1 << FUNC_1(VAR_9)) - 1;


 VAR_6+=2;

 if (VAR_6 > VAR_10)
  return -1;

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_9); VAR_8++) {
  if (VAR_6 & FUNC_0(VAR_8))
   VAR_7 |= VAR_9[VAR_8];
 }

 return VAR_7;
}
