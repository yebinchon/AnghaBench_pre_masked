
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 struct archive* FUNC_2 () ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct archive*,int,char*) ;

__attribute__((used)) static void
FUNC_7(int VAR_2)
{
 struct archive* VAR_3 = FUNC_2();
 int VAR_4 = VAR_2 ? VAR_0 : VAR_1;
 int VAR_5 = VAR_2 ? VAR_0 : VAR_1;

 if (!VAR_2) {
  FUNC_3(VAR_3);
  FUNC_4(VAR_3);
 }



 FUNC_6(VAR_3, VAR_1, ((void*)0));
 FUNC_6(VAR_3, VAR_1, "");


 FUNC_6(VAR_3, VAR_0, "fubar:snafu");
 FUNC_5("Unknown module name: `fubar'",
     FUNC_0(VAR_3));
 FUNC_6(VAR_3, VAR_0, "fubar:snafu=betcha");
 FUNC_5("Unknown module name: `fubar'",
     FUNC_0(VAR_3));


 FUNC_6(VAR_3, VAR_0, "snafu");
 FUNC_5("Undefined option: `snafu'",
     FUNC_0(VAR_3));
 FUNC_6(VAR_3, VAR_0, "snafu=betcha");
 FUNC_5("Undefined option: `snafu'",
     FUNC_0(VAR_3));


 FUNC_6(VAR_3, VAR_5, "iso9660:joliet");
 if (VAR_2) {
  FUNC_5("Unknown module name: `iso9660'",
      FUNC_0(VAR_3));
 }
 FUNC_6(VAR_3, VAR_5, "iso9660:joliet");
 if (VAR_2) {
  FUNC_5("Unknown module name: `iso9660'",
      FUNC_0(VAR_3));
 }
 FUNC_6(VAR_3, VAR_5, "joliet");
 if (VAR_2) {
  FUNC_5("Undefined option: `joliet'",
      FUNC_0(VAR_3));
 }
 FUNC_6(VAR_3, VAR_5, "!joliet");
 if (VAR_2) {
  FUNC_5("Undefined option: `joliet'",
      FUNC_0(VAR_3));
 }

 FUNC_6(VAR_3, VAR_1, ",");
 FUNC_6(VAR_3, VAR_1, ",,");

 FUNC_6(VAR_3, VAR_4, ",joliet");
 if (VAR_2) {
  FUNC_5("Undefined option: `joliet'",
      FUNC_0(VAR_3));
 }
 FUNC_6(VAR_3, VAR_4, "joliet,");
 if (VAR_2) {
  FUNC_5("Undefined option: `joliet'",
      FUNC_0(VAR_3));
 }

 FUNC_6(VAR_3, VAR_0, "joliet,snafu");
 if (VAR_2) {
  FUNC_5("Undefined option: `joliet'",
      FUNC_0(VAR_3));
 } else {
  FUNC_5("Undefined option: `snafu'",
      FUNC_0(VAR_3));
 }

 FUNC_6(VAR_3, VAR_0, "iso9660:snafu");
 if (VAR_2) {
  FUNC_5("Unknown module name: `iso9660'",
      FUNC_0(VAR_3));
 } else {
  FUNC_5("Undefined option: `iso9660:snafu'",
      FUNC_0(VAR_3));
 }

 FUNC_1(VAR_3);
}
