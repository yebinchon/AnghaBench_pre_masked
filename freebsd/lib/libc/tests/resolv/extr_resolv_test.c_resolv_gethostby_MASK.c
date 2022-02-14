
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; int h_addrtype; int h_length; int h_addr; } ;
typedef int pthread_t ;
typedef int buf ;


 int VAR_0 ;
 struct hostent* FUNC_0 (char*,int ,int ) ;
 struct hostent* FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int,char*,int ,char*,...) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(pthread_t VAR_1, char *VAR_2)
{
 char VAR_3[1024];
 struct hostent *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_2);
 VAR_6 = FUNC_3(VAR_3, sizeof(VAR_3), "%p: host %s %s\n",
     VAR_1, VAR_2, (VAR_4 == ((void*)0)) ? "not found" : "ok");
 (void)FUNC_4(VAR_0, VAR_3, VAR_6);
 if (VAR_4) {
  FUNC_2(VAR_3, VAR_4->h_addr, VAR_4->h_length);
  VAR_5 = FUNC_0(VAR_3, VAR_4->h_length, VAR_4->h_addrtype);
  if (VAR_5) {
   VAR_6 = FUNC_3(VAR_3, sizeof(VAR_3),
       "%p: reverse %s\n", VAR_1, VAR_5->h_name);
   (void)FUNC_4(VAR_0, VAR_3, VAR_6);
  }
 }
 return VAR_4 ? 0 : -1;
}
