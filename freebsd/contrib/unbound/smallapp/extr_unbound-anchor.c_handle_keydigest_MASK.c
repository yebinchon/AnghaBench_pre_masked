
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct xml_data {int use_key; scalar_t__ date; int cdigest; int cdigtype; int calgo; int ctag; } ;
typedef int XML_Char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const**,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct xml_data* VAR_1, const XML_Char **VAR_2)
{
 VAR_1->use_key = 0;
 if(FUNC_2(VAR_2, "validFrom")) {
  time_t VAR_3 = FUNC_4(FUNC_2(VAR_2, "validFrom"));
  if(VAR_3 == 0) {
   if(VAR_0) FUNC_3("error: xml cannot be parsed\n");
   FUNC_1(0);
  }
  if(VAR_1->date < VAR_3)
   return;
 }
 if(FUNC_2(VAR_2, "validUntil")) {
  time_t VAR_4 = FUNC_4(FUNC_2(VAR_2, "validUntil"));
  if(VAR_4 == 0) {
   if(VAR_0) FUNC_3("error: xml cannot be parsed\n");
   FUNC_1(0);
  }
  if(VAR_1->date > VAR_4)
   return;
 }

 VAR_1->use_key = 1;
 (void)FUNC_0(VAR_1->ctag);
 (void)FUNC_0(VAR_1->calgo);
 (void)FUNC_0(VAR_1->cdigtype);
 (void)FUNC_0(VAR_1->cdigest);
}
