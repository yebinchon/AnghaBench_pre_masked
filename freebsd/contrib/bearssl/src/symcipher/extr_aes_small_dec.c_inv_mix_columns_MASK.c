
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static void
FUNC_1(unsigned *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1 += 4) {
  unsigned VAR_2, VAR_3, VAR_4, VAR_5;
  unsigned VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_2 = VAR_0[VAR_1 + 0];
  VAR_3 = VAR_0[VAR_1 + 1];
  VAR_4 = VAR_0[VAR_1 + 2];
  VAR_5 = VAR_0[VAR_1 + 3];
  VAR_6 = (VAR_2 << 1) ^ (VAR_2 << 2) ^ (VAR_2 << 3)
   ^ VAR_3 ^ (VAR_3 << 1) ^ (VAR_3 << 3)
   ^ VAR_4 ^ (VAR_4 << 2) ^ (VAR_4 << 3)
   ^ VAR_5 ^ (VAR_5 << 3);
  VAR_7 = VAR_2 ^ (VAR_2 << 3)
   ^ (VAR_3 << 1) ^ (VAR_3 << 2) ^ (VAR_3 << 3)
   ^ VAR_4 ^ (VAR_4 << 1) ^ (VAR_4 << 3)
   ^ VAR_5 ^ (VAR_5 << 2) ^ (VAR_5 << 3);
  VAR_8 = VAR_2 ^ (VAR_2 << 2) ^ (VAR_2 << 3)
   ^ VAR_3 ^ (VAR_3 << 3)
   ^ (VAR_4 << 1) ^ (VAR_4 << 2) ^ (VAR_4 << 3)
   ^ VAR_5 ^ (VAR_5 << 1) ^ (VAR_5 << 3);
  VAR_9 = VAR_2 ^ (VAR_2 << 1) ^ (VAR_2 << 3)
   ^ VAR_3 ^ (VAR_3 << 2) ^ (VAR_3 << 3)
   ^ VAR_4 ^ (VAR_4 << 3)
   ^ (VAR_5 << 1) ^ (VAR_5 << 2) ^ (VAR_5 << 3);
  VAR_0[VAR_1 + 0] = FUNC_0(VAR_6);
  VAR_0[VAR_1 + 1] = FUNC_0(VAR_7);
  VAR_0[VAR_1 + 2] = FUNC_0(VAR_8);
  VAR_0[VAR_1 + 3] = FUNC_0(VAR_9);
 }
}
