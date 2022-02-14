
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct xml_data {void* ds; void* cdigest; void* cdigtype; void* czone; void* calgo; void* ctag; int date; int parser; } ;
typedef int buf ;
typedef int XML_Parser ;


 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (void*,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct xml_data*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct xml_data*,int ,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int,char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_13(XML_Parser VAR_5, struct xml_data* VAR_6, time_t VAR_7)
{
 char VAR_8[1024];
 FUNC_9(VAR_6, 0, sizeof(*VAR_6));
 FUNC_6(VAR_5, VAR_6);
 VAR_6->parser = VAR_5;
 VAR_6->date = VAR_7;
 VAR_6->ds = FUNC_0(FUNC_1());
 VAR_6->ctag = FUNC_0(FUNC_1());
 VAR_6->czone = FUNC_0(FUNC_1());
 VAR_6->calgo = FUNC_0(FUNC_1());
 VAR_6->cdigtype = FUNC_0(FUNC_1());
 VAR_6->cdigest = FUNC_0(FUNC_1());
 if(!VAR_6->ds || !VAR_6->ctag || !VAR_6->calgo || !VAR_6->czone ||
  !VAR_6->cdigtype || !VAR_6->cdigest) {
  if(VAR_0) FUNC_10("out of memory\n");
  FUNC_8(0);
 }
 FUNC_11(VAR_8, sizeof(VAR_8), "; created by unbound-anchor on %s",
  FUNC_7(&VAR_7));
 if(FUNC_2(VAR_6->ds, VAR_8, (int)FUNC_12(VAR_8)) < 0) {
  if(VAR_0) FUNC_10("out of memory\n");
  FUNC_8(0);
 }
 FUNC_5(VAR_5, VAR_3);
 FUNC_4(VAR_5, VAR_4, VAR_2);
 FUNC_3(VAR_5, VAR_1);
}
