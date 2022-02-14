
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int p_proto; } ;
struct in_addr {void* s_addr; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,struct in_addr,struct in_addr,struct in_addr,int) ;
 int FUNC_1 (char*,struct in_addr*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*) ;
 struct protoent* FUNC_4 (char*) ;
 int VAR_1 ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*) ;

void
FUNC_7(const char* VAR_2)
{
 char *VAR_3;
 char* VAR_4;
 struct in_addr VAR_5;
 struct in_addr VAR_6;
 struct in_addr VAR_7;
 int VAR_8;
 char* VAR_9;
 struct protoent *VAR_10;

 VAR_3 = FUNC_5 (VAR_2);
 if (!VAR_3)
  FUNC_2 (1, "redirect_port: strdup() failed");



 VAR_9 = FUNC_6(VAR_3, " \t");
 if (!VAR_9)
  FUNC_2(1, "redirect_proto: missing protocol");

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 == ((void*)0))
  FUNC_2(1, "redirect_proto: unknown protocol %s", VAR_9);
 else
  VAR_8 = VAR_10->p_proto;



 VAR_4 = FUNC_6(((void*)0), " \t");
 if (!VAR_4)
  FUNC_2(1, "redirect_proto: missing local address");
 else
  FUNC_1(VAR_4, &VAR_5);



 VAR_4 = FUNC_6(((void*)0), " \t");
 if (VAR_4)
  FUNC_1(VAR_4, &VAR_6);
 else
  VAR_6.s_addr = VAR_0;



 VAR_4 = FUNC_6(((void*)0), " \t");
 if (VAR_4)
  FUNC_1(VAR_4, &VAR_7);
 else
  VAR_7.s_addr = VAR_0;



 (void)FUNC_0(VAR_1, VAR_5, VAR_7, VAR_6,
           VAR_8);

 FUNC_3 (VAR_3);
}
