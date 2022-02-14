
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1(int VAR_7, int VAR_8, int VAR_9)
{
 static const int VAR_10[] = {

  0x1c , 0x1d , 0x35 ,

  0x37 | 128,

  0x38, 0x47, 0x48, 0x49, 0x4b, 0x4d, 0x4f,

  0x50, 0x51, 0x52, 0x53,

  0x46,




  0x5b, 0x5c, 0x5d,


  0x68, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63,

  0x64, 0x65, 0x66, 0x67, 0x25, 0x1f, 0x1e,

  0x20
 };
 int VAR_11;

 VAR_11 = VAR_7;
 if ((VAR_7 >= 89) && (VAR_7 < 89 + FUNC_0(VAR_10)))
 VAR_11 = VAR_10[VAR_7 - 89] | VAR_2;

 if ((VAR_7 == 104) && !(VAR_8 & VAR_0))
  VAR_11 = 0x45 | VAR_3 | VAR_1;
 if (VAR_8 & VAR_6)
  VAR_11 &= ~128;
 return (VAR_11 | (VAR_9 ? VAR_5 : VAR_4));
}
