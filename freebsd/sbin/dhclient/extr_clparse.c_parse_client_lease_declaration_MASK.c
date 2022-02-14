
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface_info {int dummy; } ;
struct client_lease {int is_bootp; int options; void* expiry; void* rebind; void* renewal; void* server_name; int nextserver; void* filename; int medium; int address; } ;
typedef int FILE ;
 int VAR_0 ;

 int VAR_1 ;
 struct interface_info* FUNC_0 (char*) ;
 int FUNC_1 (char**,int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(FILE *VAR_2, struct client_lease *VAR_3,
    struct interface_info **VAR_4)
{
 int VAR_5;
 char *VAR_6;
 struct interface_info *VAR_7;

 switch (FUNC_1(&VAR_6, VAR_2)) {
 case 138:
  VAR_3->is_bootp = 1;
  break;
 case 134:
  VAR_5 = FUNC_1(&VAR_6, VAR_2);
  if (VAR_5 != VAR_1) {
   FUNC_7("expecting interface name (in quotes).");
   FUNC_8(VAR_2);
   break;
  }
  VAR_7 = FUNC_0(VAR_6);
  *VAR_4 = VAR_7;
  break;
 case 135:
  if (!FUNC_3(VAR_2, &VAR_3->address))
   return;
  break;
 case 133:
  FUNC_6(VAR_2, &VAR_3->medium, 0);
  return;
 case 136:
  VAR_3->filename = FUNC_5(VAR_2);
  return;
 case 132:
  if (!FUNC_3(VAR_2, &VAR_3->nextserver))
   return;
  break;
 case 128:
  VAR_3->server_name = FUNC_5(VAR_2);
  return;
 case 129:
  VAR_3->renewal = FUNC_2(VAR_2);
  return;
 case 130:
  VAR_3->rebind = FUNC_2(VAR_2);
  return;
 case 137:
  VAR_3->expiry = FUNC_2(VAR_2);
  return;
 case 131:
  FUNC_4(VAR_2, VAR_3->options);
  return;
 default:
  FUNC_7("expecting lease declaration.");
  FUNC_8(VAR_2);
  break;
 }
 VAR_5 = FUNC_1(&VAR_6, VAR_2);
 if (VAR_5 != VAR_0) {
  FUNC_7("expecting semicolon.");
  FUNC_8(VAR_2);
 }
}
