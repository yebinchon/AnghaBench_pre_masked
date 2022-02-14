
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*) ;
 scalar_t__ FUNC_1 (size_t,unsigned char const* const,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 (size_t,unsigned char* const,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char* VAR_6 ;
 int FUNC_4 (unsigned char const*) ;

int FUNC_5(const unsigned char *VAR_7, size_t VAR_8,
   unsigned char *VAR_9, size_t *VAR_10)
{
 const unsigned char * const VAR_11 = VAR_7 + VAR_8;
 unsigned char * const VAR_12 = VAR_9 + *VAR_10;
 const unsigned char *VAR_13 = VAR_7, *VAR_14;
 unsigned char *VAR_15 = VAR_9;
 size_t VAR_16;

 *VAR_10 = 0;

 if (*VAR_13 > 17) {
  VAR_16 = *VAR_13++ - 17;
  if (VAR_16 < 4)
   goto match_next;
  if (FUNC_3(VAR_16, VAR_12, VAR_15))
   goto output_overrun;
  if (FUNC_1(VAR_16 + 1, VAR_11, VAR_13))
   goto input_overrun;
  do {
   *VAR_15++ = *VAR_13++;
  } while (--VAR_16 > 0);
  goto first_literal_run;
 }

 while ((VAR_13 < VAR_11)) {
  VAR_16 = *VAR_13++;
  if (VAR_16 >= 16)
   goto match;
  if (VAR_16 == 0) {
   if (FUNC_1(1, VAR_11, VAR_13))
    goto input_overrun;
   while (*VAR_13 == 0) {
    VAR_16 += 255;
    VAR_13++;
    if (FUNC_1(1, VAR_11, VAR_13))
     goto input_overrun;
   }
   VAR_16 += 15 + *VAR_13++;
  }
  if (FUNC_3(VAR_16 + 3, VAR_12, VAR_15))
   goto output_overrun;
  if (FUNC_1(VAR_16 + 4, VAR_11, VAR_13))
   goto input_overrun;

  FUNC_0(VAR_15, VAR_13);
  VAR_15 += 4;
  VAR_13 += 4;
  if (--VAR_16 > 0) {
   if (VAR_16 >= 4) {
    do {
     FUNC_0(VAR_15, VAR_13);
     VAR_15 += 4;
     VAR_13 += 4;
     VAR_16 -= 4;
    } while (VAR_16 >= 4);
    if (VAR_16 > 0) {
     do {
      *VAR_15++ = *VAR_13++;
     } while (--VAR_16 > 0);
    }
   } else {
    do {
     *VAR_15++ = *VAR_13++;
    } while (--VAR_16 > 0);
   }
  }

first_literal_run:
  VAR_16 = *VAR_13++;
  if (VAR_16 >= 16)
   goto match;
  VAR_14 = VAR_15 - (1 + VAR_6);
  VAR_14 -= VAR_16 >> 2;
  VAR_14 -= *VAR_13++ << 2;

  if (FUNC_2(VAR_14, VAR_9, VAR_15))
   goto lookbehind_overrun;

  if (FUNC_3(3, VAR_12, VAR_15))
   goto output_overrun;
  *VAR_15++ = *VAR_14++;
  *VAR_15++ = *VAR_14++;
  *VAR_15++ = *VAR_14;

  goto match_done;

  do {
match:
   if (VAR_16 >= 64) {
    VAR_14 = VAR_15 - 1;
    VAR_14 -= (VAR_16 >> 2) & 7;
    VAR_14 -= *VAR_13++ << 3;
    VAR_16 = (VAR_16 >> 5) - 1;
    if (FUNC_2(VAR_14, VAR_9, VAR_15))
     goto lookbehind_overrun;
    if (FUNC_3(VAR_16 + 3 - 1, VAR_12, VAR_15))
     goto output_overrun;
    goto copy_match;
   } else if (VAR_16 >= 32) {
    VAR_16 &= 31;
    if (VAR_16 == 0) {
     if (FUNC_1(1, VAR_11, VAR_13))
      goto input_overrun;
     while (*VAR_13 == 0) {
      VAR_16 += 255;
      VAR_13++;
      if (FUNC_1(1, VAR_11, VAR_13))
       goto input_overrun;
     }
     VAR_16 += 31 + *VAR_13++;
    }
    VAR_14 = VAR_15 - 1;
    VAR_14 -= FUNC_4(VAR_13) >> 2;
    VAR_13 += 2;
   } else if (VAR_16 >= 16) {
    VAR_14 = VAR_15;
    VAR_14 -= (VAR_16 & 8) << 11;

    VAR_16 &= 7;
    if (VAR_16 == 0) {
     if (FUNC_1(1, VAR_11, VAR_13))
      goto input_overrun;
     while (*VAR_13 == 0) {
      VAR_16 += 255;
      VAR_13++;
      if (FUNC_1(1, VAR_11, VAR_13))
       goto input_overrun;
     }
     VAR_16 += 7 + *VAR_13++;
    }
    VAR_14 -= FUNC_4(VAR_13) >> 2;
    VAR_13 += 2;
    if (VAR_14 == VAR_15)
     goto eof_found;
    VAR_14 -= 0x4000;
   } else {
    VAR_14 = VAR_15 - 1;
    VAR_14 -= VAR_16 >> 2;
    VAR_14 -= *VAR_13++ << 2;

    if (FUNC_2(VAR_14, VAR_9, VAR_15))
     goto lookbehind_overrun;
    if (FUNC_3(2, VAR_12, VAR_15))
     goto output_overrun;

    *VAR_15++ = *VAR_14++;
    *VAR_15++ = *VAR_14;
    goto match_done;
   }

   if (FUNC_2(VAR_14, VAR_9, VAR_15))
    goto lookbehind_overrun;
   if (FUNC_3(VAR_16 + 3 - 1, VAR_12, VAR_15))
    goto output_overrun;

   if (VAR_16 >= 2 * 4 - (3 - 1) && (VAR_15 - VAR_14) >= 4) {
    FUNC_0(VAR_15, VAR_14);
    VAR_15 += 4;
    VAR_14 += 4;
    VAR_16 -= 4 - (3 - 1);
    do {
     FUNC_0(VAR_15, VAR_14);
     VAR_15 += 4;
     VAR_14 += 4;
     VAR_16 -= 4;
    } while (VAR_16 >= 4);
    if (VAR_16 > 0)
     do {
      *VAR_15++ = *VAR_14++;
     } while (--VAR_16 > 0);
   } else {
copy_match:
    *VAR_15++ = *VAR_14++;
    *VAR_15++ = *VAR_14++;
    do {
     *VAR_15++ = *VAR_14++;
    } while (--VAR_16 > 0);
   }
match_done:
   VAR_16 = VAR_13[-2] & 3;
   if (VAR_16 == 0)
    break;
match_next:
   if (FUNC_3(VAR_16, VAR_12, VAR_15))
    goto output_overrun;
   if (FUNC_1(VAR_16 + 1, VAR_11, VAR_13))
    goto input_overrun;

   *VAR_15++ = *VAR_13++;
   if (VAR_16 > 1) {
    *VAR_15++ = *VAR_13++;
    if (VAR_16 > 2)
     *VAR_15++ = *VAR_13++;
   }

   VAR_16 = *VAR_13++;
  } while (VAR_13 < VAR_11);
 }

 *VAR_10 = VAR_15 - VAR_9;
 return VAR_0;

eof_found:
 *VAR_10 = VAR_15 - VAR_9;
 return (VAR_13 == VAR_11 ? VAR_4 :
  (VAR_13 < VAR_11 ? VAR_1 : VAR_2));
input_overrun:
 *VAR_10 = VAR_15 - VAR_9;
 return VAR_2;

output_overrun:
 *VAR_10 = VAR_15 - VAR_9;
 return VAR_5;

lookbehind_overrun:
 *VAR_10 = VAR_15 - VAR_9;
 return VAR_3;
}
