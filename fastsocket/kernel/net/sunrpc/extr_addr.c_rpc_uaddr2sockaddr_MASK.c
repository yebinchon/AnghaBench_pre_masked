
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 void* FUNC_0 (unsigned short) ;
 int FUNC_1 (char*,char const*,size_t const) ;
 scalar_t__ FUNC_2 (char*,int ,struct sockaddr*,size_t const) ;
 scalar_t__ FUNC_3 (char*,int,unsigned long*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (int) ;

size_t FUNC_7(const char *VAR_1, const size_t VAR_2,
     struct sockaddr *VAR_3, const size_t VAR_4)
{
 char *VAR_5, VAR_6[VAR_0 + sizeof('\0')];
 unsigned long VAR_7, VAR_8;
 unsigned short VAR_9;

 if (VAR_2 > VAR_0)
  return 0;

 FUNC_1(VAR_6, VAR_1, VAR_2);

 VAR_6[VAR_2] = '\0';
 VAR_5 = FUNC_5(VAR_6, '.');
 if (FUNC_6(VAR_5 == ((void*)0)))
  return 0;
 if (FUNC_6(FUNC_3(VAR_5 + 1, 10, &VAR_7) != 0))
  return 0;
 if (FUNC_6(VAR_7 > 255))
  return 0;

 *VAR_5 = '\0';
 VAR_5 = FUNC_5(VAR_6, '.');
 if (FUNC_6(VAR_5 == ((void*)0)))
  return 0;
 if (FUNC_6(FUNC_3(VAR_5 + 1, 10, &VAR_8) != 0))
  return 0;
 if (FUNC_6(VAR_8 > 255))
  return 0;

 VAR_9 = (unsigned short)((VAR_8 << 8) | VAR_7);

 *VAR_5 = '\0';
 if (FUNC_2(VAR_6, FUNC_4(VAR_6), VAR_3, VAR_4) == 0)
  return 0;

 switch (VAR_3->sa_family) {
 case 129:
  ((struct sockaddr_in *)VAR_3)->sin_port = FUNC_0(VAR_9);
  return sizeof(struct sockaddr_in);
 case 128:
  ((struct sockaddr_in6 *)VAR_3)->sin6_port = FUNC_0(VAR_9);
  return sizeof(struct sockaddr_in6);
 }

 return 0;
}
