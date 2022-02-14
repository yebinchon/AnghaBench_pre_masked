
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct query_info {size_t qname_len; int * qname; int * local_alias; int qclass; int qtype; } ;
typedef int rr ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct regional*,int *,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,size_t*,size_t*,int *,int ,int *,int ) ;
 int FUNC_4 (int *,size_t,size_t) ;
 int FUNC_5 (int *,size_t,size_t) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static char*
FUNC_7(char* VAR_1, struct query_info* VAR_2, struct regional* VAR_3)
{

 char* VAR_4 = VAR_1;
 uint8_t VAR_5[VAR_0];
 size_t VAR_6 = sizeof(VAR_5), VAR_7 = 0;
 int VAR_8;


 VAR_4 = FUNC_6(VAR_1, ' ');
 if(VAR_4) VAR_4 = FUNC_6(VAR_4+1, ' ');
 if(VAR_4) VAR_4 = FUNC_6(VAR_4+1, ' ');
 if(!VAR_4) {
  FUNC_0("error line too short, %s", VAR_1);
  return ((void*)0);
 }
 VAR_4[0] = 0;
 VAR_4++;


 VAR_8 = FUNC_3(VAR_1, VAR_5, &VAR_6, &VAR_7,
  ((void*)0), 0, ((void*)0), 0);
 if(VAR_8 != 0) {
  FUNC_0("error cannot parse: %s %s",
   FUNC_2(VAR_8), VAR_1);
  return ((void*)0);
 }
 VAR_2->qtype = FUNC_5(VAR_5, VAR_6, VAR_7);
 VAR_2->qclass = FUNC_4(VAR_5, VAR_6, VAR_7);
 VAR_2->qname_len = VAR_7;
 VAR_2->qname = (uint8_t*)FUNC_1(VAR_3, VAR_5, VAR_7);
 VAR_2->local_alias = ((void*)0);
 if(!VAR_2->qname) {
  FUNC_0("error out of memory");
  return ((void*)0);
 }

 return VAR_4;
}
