
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct xml_data {int num_keys; int * ds; int * cdigest; int * cdigtype; int * calgo; int * ctag; int * czone; int tag; } ;
typedef int XML_Parser ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,size_t,int,int ) ;
 int FUNC_12 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (int ,struct xml_data*,int ) ;

__attribute__((used)) static BIO*
FUNC_14(BIO* VAR_3, time_t VAR_4)
{
 char* VAR_5;
 int VAR_6;
 XML_Parser VAR_7;
 struct xml_data VAR_8;

 VAR_7 = FUNC_6(((void*)0));
 if(!VAR_7) {
  if(VAR_2) FUNC_12("could not XML_ParserCreate\n");
  FUNC_8(0);
 }


 FUNC_13(VAR_7, &VAR_8, VAR_4);


 (void)FUNC_2(VAR_3, 0);
 VAR_6 = (int)FUNC_1(VAR_3, &VAR_5);
 if(!VAR_6 || !VAR_5) {
  if(VAR_2) FUNC_12("out of memory\n");
  FUNC_8(0);
 }
 if(!FUNC_5(VAR_7, VAR_5, VAR_6, 1 )) {
  const char *VAR_9 = FUNC_3(FUNC_4(VAR_7));
  if(VAR_2) FUNC_12("XML_Parse failure %s\n", VAR_9?VAR_9:"");
  FUNC_8(0);
 }


 if(VAR_2) FUNC_12("XML was parsed successfully, %d keys\n",
   VAR_8.num_keys);
 FUNC_10(VAR_8.tag);
 FUNC_7(VAR_7);

 if(VAR_2 >= 4) {
  (void)FUNC_2(VAR_8.ds, 0);
  VAR_6 = FUNC_1(VAR_8.ds, &VAR_5);
  FUNC_12("got DS bio %d: '", VAR_6);
  if(!FUNC_11(VAR_5, (size_t)VAR_6, 1, VAR_1))

   FUNC_9(VAR_0, "error writing to stdout\n");
  FUNC_12("'\n");
 }
 FUNC_0(VAR_8.czone);
 FUNC_0(VAR_8.ctag);
 FUNC_0(VAR_8.calgo);
 FUNC_0(VAR_8.cdigtype);
 FUNC_0(VAR_8.cdigest);

 if(VAR_8.num_keys == 0) {

  FUNC_0(VAR_8.ds);
  return ((void*)0);
 } else {
  return VAR_8.ds;
 }
}
