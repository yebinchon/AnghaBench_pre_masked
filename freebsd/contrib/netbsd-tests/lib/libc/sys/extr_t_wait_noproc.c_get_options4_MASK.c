
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
 int const VAR_6 ;
 int const VAR_7 ;
 size_t FUNC_0 (size_t) ;
 int const VAR_8 ;
 int const VAR_9 ;
 size_t FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(size_t VAR_10)
{
 int VAR_11 = 0;
 size_t VAR_12;

 const int VAR_13[] = {
  0,






 };

 const int VAR_14[] = {
  VAR_4,
  VAR_3,
  VAR_7,
  VAR_5,
  VAR_6,
  VAR_2
 };

 const size_t VAR_15 = (1 << FUNC_1(VAR_13)) - 1;

 if (VAR_10 < FUNC_1(VAR_13))
  return VAR_13[VAR_10];

 VAR_10 -= FUNC_1(VAR_13);

 ++VAR_10;

 if (VAR_10 > VAR_15)
  return -1;

 for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_13); VAR_12++) {
  if (VAR_10 & FUNC_0(VAR_12))
   VAR_11 |= VAR_14[VAR_12];
 }

 return VAR_11;
}
