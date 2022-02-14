
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;



void
FUNC_0 (threadref *VAR_0, int VAR_1)
{
  unsigned char *VAR_2;

  VAR_2 = (unsigned char *) VAR_0;
  {
    int VAR_3 = 4;
    while (VAR_3--)
      *VAR_2++ = 0;
  }
  *VAR_2++ = (VAR_1 >> 24) & 0xff;
  *VAR_2++ = (VAR_1 >> 16) & 0xff;
  *VAR_2++ = (VAR_1 >> 8) & 0xff;
  *VAR_2++ = (VAR_1 & 0xff);
}
