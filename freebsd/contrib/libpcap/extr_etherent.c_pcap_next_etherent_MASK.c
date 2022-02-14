
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_etherent {int* addr; char* name; } ;
typedef int e ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

struct pcap_etherent *
FUNC_7(FILE *VAR_1)
{
 register int VAR_2, VAR_3;
 u_char VAR_4;
 char *VAR_5;
 size_t VAR_6;
 static struct pcap_etherent VAR_7;

 FUNC_3((char *)&VAR_7, 0, sizeof(VAR_7));
 for (;;) {

  VAR_2 = FUNC_5(VAR_1);
  if (VAR_2 == VAR_0)
   return (((void*)0));
  if (VAR_2 == '\n')
   continue;



  if (!FUNC_2(VAR_2)) {
   VAR_2 = FUNC_4(VAR_1);
   if (VAR_2 == VAR_0)
    return (((void*)0));
   continue;
  }


  for (VAR_3 = 0; VAR_3 < 6; VAR_3 += 1) {
   VAR_4 = FUNC_6((u_char)VAR_2);
   VAR_2 = FUNC_0(VAR_1);
   if (VAR_2 == VAR_0)
    return (((void*)0));
   if (FUNC_2(VAR_2)) {
    VAR_4 <<= 4;
    VAR_4 |= FUNC_6((u_char)VAR_2);
    VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 == VAR_0)
     return (((void*)0));
   }
   VAR_7.addr[VAR_3] = VAR_4;
   if (VAR_2 != ':')
    break;
   VAR_2 = FUNC_0(VAR_1);
   if (VAR_2 == VAR_0)
    return (((void*)0));
  }


  if (!FUNC_1(VAR_2)) {
   VAR_2 = FUNC_4(VAR_1);
   if (VAR_2 == VAR_0)
    return (((void*)0));
   continue;
  }
  VAR_2 = FUNC_5(VAR_1);
  if (VAR_2 == VAR_0)
   return (((void*)0));


  if (VAR_2 == '\n')
   continue;

  if (VAR_2 == '#') {
   VAR_2 = FUNC_4(VAR_1);
   if (VAR_2 == VAR_0)
    return (((void*)0));
   continue;
  }


  VAR_5 = VAR_7.name;

  VAR_6 = sizeof(VAR_7.name) - 1;
  do {
   *VAR_5++ = (u_char)VAR_2;
   VAR_2 = FUNC_0(VAR_1);
   if (VAR_2 == VAR_0)
    return (((void*)0));
  } while (!FUNC_1(VAR_2) && --VAR_6 != 0);
  *VAR_5 = '\0';


  if (VAR_2 != '\n')
   (void)FUNC_4(VAR_1);

  return &VAR_7;
 }
}
