
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
struct connection_info {int rdomain; int lport; int laddress; int address; int host; } ;


 struct ssh* VAR_0 ;
 int FUNC_0 (struct ssh*,int) ;
 int FUNC_1 (struct ssh*) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (struct ssh*) ;
 int FUNC_4 (struct ssh*) ;

struct connection_info *
FUNC_5(int VAR_1, int VAR_2)
{
 struct ssh *VAR_3 = VAR_0;
 static struct connection_info VAR_4;

 if (!VAR_1)
  return &VAR_4;
 VAR_4.host = FUNC_0(VAR_3, VAR_2);
 VAR_4.address = FUNC_4(VAR_3);
 VAR_4.laddress = FUNC_1(VAR_3);
 VAR_4.lport = FUNC_2(VAR_3);
 VAR_4.rdomain = FUNC_3(VAR_3);
 return &VAR_4;
}
