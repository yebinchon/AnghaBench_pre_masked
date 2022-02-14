
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * qpage_count; int * max_qentries; int * max_qcount; } ;
struct TYPE_5__ {TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;
typedef size_t sli4_qtype_e ;
typedef int ocs_textbuf_t ;







 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_3(ocs_textbuf_t *VAR_0, sli4_t *VAR_1, sli4_qtype_e VAR_2)
{
 char * VAR_3;

 switch(VAR_2) {
 case 131: VAR_3 = "EQ"; break;
 case 132: VAR_3 = "CQ"; break;
 case 130: VAR_3 = "MQ"; break;
 case 128: VAR_3 = "WQ"; break;
 case 129: VAR_3 = "RQ"; break;
 default: VAR_3 = "unknown"; break;
 }

 FUNC_1(VAR_0, VAR_3, VAR_2);

 FUNC_2(VAR_0, "max_qcount", "%d", VAR_1->config.max_qcount[VAR_2]);
 FUNC_2(VAR_0, "max_qentries", "%d", VAR_1->config.max_qentries[VAR_2]);
 FUNC_2(VAR_0, "qpage_count", "%d", VAR_1->config.qpage_count[VAR_2]);
 FUNC_0(VAR_0, VAR_3, VAR_2);
}
