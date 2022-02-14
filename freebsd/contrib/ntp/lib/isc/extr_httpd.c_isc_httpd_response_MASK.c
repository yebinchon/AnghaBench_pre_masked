
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_4__ {char* protocol; char* retmsg; int retcode; int headerbuffer; } ;
typedef TYPE_1__ isc_httpd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*,int,char*) ;
 int FUNC_5 (char*) ;

isc_result_t
FUNC_6(isc_httpd_t *VAR_1)
{
 isc_result_t VAR_2;
 unsigned int VAR_3;

 VAR_3 = FUNC_5(VAR_1->protocol) + 1;
 VAR_3 += 3 + 1;
 VAR_3 += FUNC_5(VAR_1->retmsg) + 2;

 while (FUNC_2(&VAR_1->headerbuffer) < VAR_3) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 != VAR_0)
   return (VAR_2);
 }

 FUNC_4(FUNC_3(&VAR_1->headerbuffer), "%s %03d %s\r\n",
  VAR_1->protocol, VAR_1->retcode, VAR_1->retmsg);
 FUNC_1(&VAR_1->headerbuffer, VAR_3);

 return (VAR_0);
}
