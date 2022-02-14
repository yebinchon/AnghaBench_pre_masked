
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static void
FUNC_0(
 uint64_t VAR_0, uint64_t VAR_1,
 uint64_t VAR_2, uint64_t VAR_3,
 uint64_t *VAR_4, uint64_t *VAR_5)
{
 uint64_t VAR_6, VAR_7;
 uint64_t VAR_8, VAR_9;
 uint64_t VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13;


 VAR_10 = VAR_0;
 VAR_11 = VAR_1;


 VAR_6 = 0;
 VAR_7 = 1;
 VAR_8 = 1;
 VAR_9 = 0;

 while (VAR_11 != 0 && VAR_8 < VAR_2 && VAR_9 < VAR_3) {

  VAR_13 = VAR_10 / VAR_11;


  VAR_12 = VAR_11;
  VAR_11 = VAR_10 % VAR_11;
  VAR_10 = VAR_12;


  VAR_12 = VAR_6 + VAR_13 * VAR_8;
  VAR_6 = VAR_8;
  VAR_8 = VAR_12;


  VAR_12 = VAR_7 + VAR_13 * VAR_9;
  VAR_7 = VAR_9;
  VAR_9 = VAR_12;
 }

 if (VAR_8 > VAR_2 || VAR_9 > VAR_3) {
  *VAR_4 = VAR_6;
  *VAR_5 = VAR_7;
 } else {
  *VAR_4 = VAR_8;
  *VAR_5 = VAR_9;
 }
}
