
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; int h_addrtype; int h_length; int h_addr; } ;
typedef int pthread_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostent*) ;
 struct hostent* FUNC_1 (char*,int ,int ,int*) ;
 struct hostent* FUNC_2 (char*,int ,int ,int*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int,char*,int ,char*,...) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(pthread_t VAR_2, char *VAR_3)
{
 char VAR_4[1024];
 struct hostent *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_2(VAR_3, VAR_0, 0, &VAR_8);
 VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), "%p: host %s %s\n",
     VAR_2, VAR_3, (VAR_5 == ((void*)0)) ? "not found" : "ok");
 (void)FUNC_5(VAR_1, VAR_4, VAR_7);
 if (VAR_5) {
  FUNC_3(VAR_4, VAR_5->h_addr, VAR_5->h_length);
  VAR_6 = FUNC_1(VAR_4, VAR_5->h_length, VAR_5->h_addrtype,
      &VAR_8);
  if (VAR_6) {
   VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4),
       "%p: reverse %s\n", VAR_2, VAR_6->h_name);
   (void)FUNC_5(VAR_1, VAR_4, VAR_7);
  }
  if (VAR_6)
   FUNC_0(VAR_6);
 }
 if (VAR_5)
  FUNC_0(VAR_5);
 return VAR_5 ? 0 : -1;
}
