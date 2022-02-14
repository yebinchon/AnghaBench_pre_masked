
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_1, char* VAR_2, char* VAR_3)
{
 FUNC_1(VAR_1);
 FUNC_4(VAR_1, "GET /%s HTTP/1.1\r\n", VAR_3);
 FUNC_4(VAR_1, "Host: %s\r\n", VAR_2);
 FUNC_4(VAR_1, "User-Agent: unbound/%s\r\n",
  VAR_0);



 FUNC_4(VAR_1, "\r\n");
 if(FUNC_3(VAR_1)+10 > FUNC_0(VAR_1))
  return 0;

 FUNC_2(VAR_1);
 return 1;
}
