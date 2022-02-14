
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int primes ;



__attribute__((used)) static unsigned long
FUNC_0 (unsigned long VAR_0)
{


  static const unsigned long VAR_1[] = {
    (unsigned long) 127,
    (unsigned long) 2039,
    (unsigned long) 32749,
    (unsigned long) 65521,
    (unsigned long) 131071,
    (unsigned long) 262139,
    (unsigned long) 524287,
    (unsigned long) 1048573,
    (unsigned long) 2097143,
    (unsigned long) 4194301,
    (unsigned long) 8388593,
    (unsigned long) 16777213,
    (unsigned long) 33554393,
    (unsigned long) 67108859,
    (unsigned long) 134217689,
    (unsigned long) 268435399,
    (unsigned long) 536870909,
    (unsigned long) 1073741789,
    (unsigned long) 2147483647,

    ((unsigned long) 2147483647) + ((unsigned long) 2147483644),
  };

  const unsigned long *VAR_2 = &VAR_1[0];
  const unsigned long *VAR_3 = &VAR_1[sizeof (VAR_1) / sizeof (VAR_1[0])];

  while (VAR_2 != VAR_3)
    {
      const unsigned long *VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;
      if (VAR_0 >= *VAR_4)
 VAR_2 = VAR_4 + 1;
      else
 VAR_3 = VAR_4;
    }

  if (VAR_0 >= *VAR_2)
    return 0;

  return *VAR_2;
}
