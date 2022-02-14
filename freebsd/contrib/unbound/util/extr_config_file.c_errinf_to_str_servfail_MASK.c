
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct TYPE_2__ {int qname; int qclass; int qtype; } ;
struct module_qstate {struct config_strlist* errinf; TYPE_1__ qinfo; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;
typedef int c ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;

char* FUNC_7(struct module_qstate* VAR_1)
{
 char VAR_2[20480];
 char* VAR_3 = VAR_2;
 size_t VAR_4 = sizeof(VAR_2);
 struct config_strlist* VAR_5;
 char VAR_6[VAR_0+1];
 char VAR_7[16], VAR_8[16];
 FUNC_3(VAR_1->qinfo.qtype, VAR_7, sizeof(VAR_7));
 FUNC_2(VAR_1->qinfo.qclass, VAR_8, sizeof(VAR_8));
 FUNC_0(VAR_1->qinfo.qname, VAR_6);
 FUNC_4(VAR_3, VAR_4, "SERVFAIL <%s %s %s>:", VAR_6, VAR_7, VAR_8);
 VAR_4 -= FUNC_6(VAR_3); VAR_3 += FUNC_6(VAR_3);
 if(!VAR_1->errinf)
  FUNC_4(VAR_3, VAR_4, " misc failure");
 else for(VAR_5=VAR_1->errinf; VAR_5; VAR_5=VAR_5->next) {
  FUNC_4(VAR_3, VAR_4, " %s", VAR_5->str);
  VAR_4 -= FUNC_6(VAR_3); VAR_3 += FUNC_6(VAR_3);
 }
 VAR_3 = FUNC_5(VAR_2);
 if(!VAR_3)
  FUNC_1("malloc failure in errinf_to_str");
 return VAR_3;
}
