
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int offset; int* dlt_list; int dlt_count; int errbuf; void* linktype; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int) ;

int
FUNC_2(pcap_t *VAR_9, u_int VAR_10)
{
 int VAR_11 = 0;

 switch (VAR_10) {

 case 135:
 case 134:
  VAR_9->linktype = VAR_1;
  VAR_9->offset = 2;
  VAR_9->dlt_list = (u_int *)FUNC_0(sizeof(u_int) * 2);



  if (VAR_9->dlt_list != ((void*)0)) {
   VAR_9->dlt_list[0] = VAR_1;
   VAR_9->dlt_list[1] = VAR_0;
   VAR_9->dlt_count = 2;
  }
  break;

 case 133:
  VAR_9->linktype = VAR_2;
  VAR_9->offset = 3;
  break;

 case 128:

  VAR_9->linktype = VAR_3;
  VAR_9->offset = 2;
  break;
 case 130:
  VAR_9->linktype = VAR_4;
  VAR_9->offset = 0;
  break;



 case 129:
  VAR_9->linktype = VAR_5;
  VAR_9->offset = 0;
  break;



 case 131:
  VAR_9->linktype = VAR_6;
  VAR_9->offset = 0;
  break;


 default:
  FUNC_1(VAR_9->errbuf, VAR_8, "unknown mactype 0x%x",
      VAR_10);
  VAR_11 = -1;
 }

 return (VAR_11);
}
