
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_word ;


 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(BF_word *VAR_0, const char *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)VAR_0;
 unsigned char *VAR_4 = VAR_3 + VAR_2;
 const unsigned char *VAR_5 = (const unsigned char *)VAR_1;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 do {
  FUNC_0(VAR_7, *VAR_5++);
  FUNC_0(VAR_8, *VAR_5++);
  *VAR_3++ = (VAR_7 << 2) | ((VAR_8 & 0x30) >> 4);
  if (VAR_3 >= VAR_4) break;

  FUNC_0(VAR_9, *VAR_5++);
  *VAR_3++ = ((VAR_8 & 0x0F) << 4) | ((VAR_9 & 0x3C) >> 2);
  if (VAR_3 >= VAR_4) break;

  FUNC_0(VAR_10, *VAR_5++);
  *VAR_3++ = ((VAR_9 & 0x03) << 6) | VAR_10;
 } while (VAR_3 < VAR_4);

 return 0;
}
