
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_3__ {int linktype; int dlt_count; int offset; void** dlt_list; } ;
typedef TYPE_1__ pcap_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int,char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_3(pcap_t *VAR_25, int VAR_26, int VAR_27,
         const char *VAR_28, int VAR_29)
{
 static const char VAR_30[] = "cdma_rmnet";

 switch (VAR_27) {

 case 155:
  if (FUNC_2(VAR_28, VAR_30, sizeof VAR_30 - 1) == 0) {
   VAR_25->linktype = VAR_23;
   return;
  }
  if (!FUNC_0(VAR_26, VAR_28)) {



   VAR_25->dlt_list = (u_int *) FUNC_1(sizeof(u_int) * 2);



   if (VAR_25->dlt_list != ((void*)0)) {
    VAR_25->dlt_list[0] = VAR_5;
    VAR_25->dlt_list[1] = VAR_4;
    VAR_25->dlt_count = 2;
   }
  }


 case 138:
 case 139:
  VAR_25->linktype = VAR_5;
  VAR_25->offset = 2;
  break;

 case 156:
  VAR_25->linktype = VAR_6;
  break;

 case 163:
  VAR_25->linktype = VAR_1;
  break;

 case 134:
  VAR_25->linktype = VAR_22;
  break;

 case 161:
  VAR_25->linktype = VAR_2;
  break;



 case 162:







  VAR_25->linktype = VAR_18;
  break;




 case 143:
 case 148:
  VAR_25->linktype = VAR_11;
  VAR_25->offset = 2;
  break;

 case 165:
  VAR_25->linktype = VAR_0;
  break;




 case 150:
  VAR_25->linktype = VAR_9;
  VAR_25->offset = 3;
  break;




 case 164:
  if (VAR_29)
   VAR_25->linktype = VAR_18;
  else
   VAR_25->linktype = -1;
  break;




 case 147:
  VAR_25->linktype = VAR_12;
  break;




 case 146:
  VAR_25->linktype = VAR_21;
  break;




 case 145:
  VAR_25->linktype = VAR_13;
  break;

 case 135:
  if (VAR_29)
   VAR_25->linktype = VAR_18;
  else {
   VAR_25->linktype = VAR_23;
  }
  break;




 case 160:
  VAR_25->linktype = VAR_3;
  break;



 case 129:



 case 132:
 case 159:
 case 130:
 case 158:
 case 166:
 case 131:



 case 133:



 case 157:




  VAR_25->linktype = VAR_23;
  break;




 case 149:
  VAR_25->linktype = VAR_10;
  break;

 case 140:
  VAR_25->linktype = VAR_19;
  break;

 case 18:
  VAR_25->linktype = VAR_15;
  break;




 case 151:



 case 154:



 case 152:



 case 153:
  VAR_25->dlt_list = (u_int *) FUNC_1(sizeof(u_int) * 3);



  if (VAR_25->dlt_list != ((void*)0)) {
   VAR_25->dlt_list[0] = VAR_7;
   VAR_25->dlt_list[1] = VAR_8;
   VAR_25->dlt_list[2] = VAR_15;
   VAR_25->dlt_count = 3;
  }
  VAR_25->linktype = VAR_7;
  break;




 case 142:

  VAR_25->linktype = VAR_16;





  break;






 case 141:

  VAR_25->linktype = VAR_17;
  break;




 case 136:




  VAR_25->linktype = VAR_23;
  break;




       case 144:
               VAR_25->linktype = VAR_14;
               break;




 case 137:
  VAR_25->linktype = VAR_20;
  break;




 case 128:
  VAR_25->linktype = VAR_24;
  break;

 default:
  VAR_25->linktype = -1;
  break;
 }
}
