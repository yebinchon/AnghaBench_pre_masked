
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 (char*,int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int
FUNC_3(u_char *VAR_9, u_char *VAR_10)
{
 int VAR_11;
 u_char VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_10[0] = VAR_10[1] = VAR_10[2] = VAR_10[3] = VAR_10[4] = VAR_10[5] = VAR_10[6] =
     VAR_10[7] = 0;

 VAR_12 = 0;
 VAR_13 = VAR_9[1];
 VAR_14 = VAR_9[2];
 VAR_15 = VAR_9[3];

 VAR_11 = 0;

restart:



 switch (VAR_9[0]) {
 case 141:
 case 144:
 case 145:
 case 142:
 case 143:
  VAR_10[0] = VAR_9[0];
  VAR_10[1] = VAR_9[1];
  VAR_10[2] = VAR_9[2];
  VAR_10[3] = VAR_9[3];
  VAR_10[4] = VAR_9[4];
  VAR_10[5] = VAR_9[5];
  VAR_10[6] = VAR_9[6];
  VAR_10[7] = VAR_9[7];
  VAR_11 += 8;
  break;
 case 134:
  VAR_10[0] = 144;
  VAR_10[1] = VAR_12;
  VAR_10[2] = VAR_1;
  VAR_10[3] = VAR_13;
  VAR_10[4] = VAR_14;
  VAR_10[5] = 255;
  VAR_11 += 4;
  break;

 case 133:
  VAR_10[0] = 144;
  VAR_10[1] = VAR_12;
  VAR_10[2] = VAR_2;
  VAR_10[3] = VAR_13;
  VAR_10[4] = VAR_14;
  VAR_10[5] = VAR_15;
  VAR_11 += 4;
  break;





 case 132:
  VAR_10[0] = 145;
  VAR_10[1] = VAR_12;
  VAR_10[2] = VAR_3;
  VAR_10[3] = VAR_13;
  VAR_10[4] = VAR_14;
  VAR_10[5] = VAR_15;
  VAR_11 += 4;
  break;
 case 135:
  FUNC_0(4,
      FUNC_1("seq_playevent: put data 0x%02x, unit %d.\n",
      VAR_9[1], VAR_9[2]));





  VAR_10[0] = 135;
  VAR_10[1] = VAR_12;
  VAR_10[2] = VAR_13;
  VAR_11 += 4;
  break;
 case 136:
  switch (VAR_9[1]) {
  case 134:
  case 133:
  case 132:
   VAR_9++;
   VAR_11 = 4;
   goto restart;
   break;
  case 140:



  case 139:



  case 138:



  case 129:



  default:
   FUNC_0(2,
       FUNC_1("seq_convertold: SEQ_EXTENDED type %d"
       "not handled\n", VAR_9[1]));
   break;
  }
  break;
 case 128:
  VAR_10[0] = 141;
  VAR_10[1] = VAR_6;
  VAR_10[4] = VAR_9[2];
  VAR_10[5] = VAR_9[3];
  VAR_10[6] = VAR_9[4];

  FUNC_0(5, FUNC_1("SEQ_WAIT %d",
      VAR_9[2] + (VAR_9[3] << 8) + (VAR_9[4] << 24)));

  VAR_11 += 4;
  break;

 case 137:
 case 130:
 case 131:
 default:
  FUNC_0(2,
    FUNC_1("seq_convertold: event type %d not handled %d %d %d\n",
      VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3]));
  break;
 }
 return VAR_11;
}
