
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OtherType ;
typedef int ChunkType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




__attribute__((used)) static ChunkType
FUNC_0(int VAR_11, OtherType VAR_12)
{
    ChunkType VAR_13 = VAR_10;

    switch (VAR_11) {
    case 'c':
 if (VAR_12 == 128)
     VAR_13 = VAR_1;
 else
     VAR_13 = VAR_3;
 break;
    case 'd':
    case 'i':
    case 'X':
    case 'x':
 switch (VAR_12) {
 case 128:
     VAR_13 = VAR_5;
     break;
 case 129:
     VAR_13 = VAR_8;
     break;
 case 130:
     VAR_13 = VAR_6;
     break;
 }
 break;
    case 'E':
    case 'e':
    case 'f':
    case 'g':
 switch (VAR_12) {
 case 128:
     VAR_13 = VAR_4;
     break;
 case 129:
     VAR_13 = VAR_3;
     break;
 case 130:
     VAR_13 = VAR_2;
     break;
 }
 break;
    case 'n':
 if (VAR_12 == 128)
     VAR_13 = VAR_0;
 else
     VAR_13 = VAR_3;
 break;
    case 'p':
 if (VAR_12 == 128)
     VAR_13 = VAR_7;
 else
     VAR_13 = VAR_3;
 break;
    case 's':
 if (VAR_12 == 128)
     VAR_13 = VAR_9;
 else
     VAR_13 = VAR_3;
 break;
    }
    return VAR_13;
}
