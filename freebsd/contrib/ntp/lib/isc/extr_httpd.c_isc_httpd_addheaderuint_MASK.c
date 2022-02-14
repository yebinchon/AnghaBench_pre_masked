
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_4__ {int headerbuffer; } ;
typedef TYPE_1__ isc_httpd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,...) ;
 unsigned int FUNC_5 (char const*) ;

isc_result_t
FUNC_6(isc_httpd_t *VAR_1, const char *VAR_2, int VAR_3) {
 isc_result_t VAR_4;
 unsigned int VAR_5;
 char VAR_6[sizeof "18446744073709551616"];

 FUNC_4(VAR_6, "%d", VAR_3);

 VAR_5 = FUNC_5(VAR_2);
 VAR_5 += 2 + FUNC_5(VAR_6);
 VAR_5 += 2;

 while (FUNC_2(&VAR_1->headerbuffer) < VAR_5) {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 != VAR_0)
   return (VAR_4);
 }

 FUNC_4(FUNC_3(&VAR_1->headerbuffer),
  "%s: %s\r\n", VAR_2, VAR_6);

 FUNC_1(&VAR_1->headerbuffer, VAR_5);

 return (VAR_0);
}
