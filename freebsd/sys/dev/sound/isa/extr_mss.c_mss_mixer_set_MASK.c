
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct mss_info {int bd_id; } ;
typedef TYPE_1__** mixer_tab ;
struct TYPE_6__ {scalar_t__ nbits; int regno; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;


 size_t VAR_1 ;
 int FUNC_1 (struct mss_info*,int) ;
 int FUNC_2 (struct mss_info*,int,int) ;
 int FUNC_3 (TYPE_1__***,int*,int,size_t,int) ;
 TYPE_1__** VAR_2 ;
 TYPE_1__** VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int
FUNC_5(struct mss_info *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
     int VAR_9;
     mixer_tab *VAR_10;
     u_char VAR_11, VAR_12;

 switch (VAR_5->bd_id) {
  case 128:
   VAR_10 = &VAR_4;
   break;
  case 129:
   VAR_10 = &VAR_3;
   break;
  default:
   VAR_10 = &VAR_2;
 }

     if ((*VAR_10)[VAR_6][VAR_0].nbits == 0) {
  FUNC_0(FUNC_4("nbits = 0 for dev %d\n", VAR_6));
  return -1;
     }

     if ((*VAR_10)[VAR_6][VAR_1].nbits == 0) VAR_8 = VAR_7;



     VAR_9 = (*VAR_10)[VAR_6][VAR_0].regno;
     VAR_11 = VAR_12 = FUNC_1(VAR_5, VAR_9);

     if (VAR_9 != 0) VAR_12 = (VAR_7 == 0)? VAR_11 | 0x80 : VAR_11 & 0x7f;
     FUNC_3(VAR_10, &VAR_12, VAR_6, VAR_0, VAR_7);
     FUNC_2(VAR_5, VAR_9, VAR_12);

     FUNC_0(FUNC_4("LEFT: dev %d reg %d old 0x%02x new 0x%02x\n",
  VAR_6, VAR_9, VAR_11, VAR_12));

     if ((*VAR_10)[VAR_6][VAR_1].nbits != 0) {

  VAR_9 = (*VAR_10)[VAR_6][VAR_1].regno;
  VAR_11 = VAR_12 = FUNC_1(VAR_5, VAR_9);
  if (VAR_9 != 1) VAR_12 = (VAR_8 == 0)? VAR_11 | 0x80 : VAR_11 & 0x7f;
  FUNC_3(VAR_10, &VAR_12, VAR_6, VAR_1, VAR_8);
  FUNC_2(VAR_5, VAR_9, VAR_12);

  FUNC_0(FUNC_4("RIGHT: dev %d reg %d old 0x%02x new 0x%02x\n",
      VAR_6, VAR_9, VAR_11, VAR_12));
     }
     return 0;
}
