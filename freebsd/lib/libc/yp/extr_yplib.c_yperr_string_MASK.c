
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[80];

 switch (VAR_0) {
 case 0:
  return ("Success");
 case 142:
  return ("Request arguments bad");
 case 132:
  return ("RPC failure");
 case 139:
  return ("Can't bind to server which serves this domain");
 case 137:
  return ("No such map in server's domain");
 case 138:
  return ("No such key in map");
 case 129:
  return ("YP server error");
 case 133:
  return ("Local resource allocation failure");
 case 135:
  return ("No more records in map database");
 case 134:
  return ("Can't communicate with portmapper");
 case 130:
  return ("Can't communicate with ypbind");
 case 128:
  return ("Can't communicate with ypserv");
 case 136:
  return ("Local domain name not set");
 case 141:
  return ("Server data base is bad");
 case 131:
  return ("YP server version mismatch - server can't supply service.");
 case 143:
  return ("Access violation");
 case 140:
  return ("Database is busy");
 }
 FUNC_0(VAR_1, "YP unknown error %d\n", VAR_0);
 return (VAR_1);
}
