
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(int VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long VAR_8;

 if (VAR_5 == 0)
  return VAR_4;

 if (VAR_5 > 44100)
  VAR_5 = 44100;
 if (VAR_5 < 5000)
  VAR_5 = 5000;

 if (VAR_2 & 2)
 {
  VAR_6 = ((VAR_0 / 2) + (VAR_5 / 2)) / VAR_5;
  VAR_5 = ((VAR_0 / 2) + (VAR_6 / 2)) / VAR_6;
 }
 else
 {
  VAR_6 = (VAR_0 + (VAR_5 / 2)) / VAR_5;
  VAR_5 = (VAR_0 + (VAR_6 / 2)) / VAR_6;
 }

 VAR_4 = VAR_5;

 VAR_7 = FUNC_0(0x0B8A);
 VAR_7 &= 0xe0;
 if (VAR_4 >= 2 * 17897)
  VAR_7 |= 0x01;
 else if (VAR_4 >= 2 * 15909)
  VAR_7 |= 0x02;
 else if (VAR_4 >= 2 * 11931)
  VAR_7 |= 0x09;
 else if (VAR_4 >= 2 * 8948)
  VAR_7 |= 0x11;
 else if (VAR_4 >= 2 * 5965)
  VAR_7 |= 0x19;
 else if (VAR_4 >= 2 * 2982)
  VAR_7 |= 0x04;
 VAR_3 = VAR_7;


 FUNC_2(&VAR_1, VAR_8);

 FUNC_1(VAR_7 & ~(0x40 | 0x80), 0x0B8A);
 FUNC_1(0x00 | 0x30 | 0x04, 0x138B);
 FUNC_1(VAR_6 & 0xff, 0x1388);
 FUNC_1((VAR_6 >> 8) & 0xff, 0x1388);
 FUNC_1(VAR_7, 0x0B8A);

 FUNC_3(&VAR_1, VAR_8);

 return VAR_4;
}
