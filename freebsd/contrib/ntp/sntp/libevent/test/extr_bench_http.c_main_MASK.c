
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct evhttp {int dummy; } ;
struct event_config {int dummy; } ;
struct event_base {int dummy; } ;
typedef int WSADATA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct event_base*) ;
 char* FUNC_3 (struct event_base*) ;
 int FUNC_4 (struct event_base*,struct timeval*) ;
 struct event_base* FUNC_5 (struct event_config*) ;
 struct event_config* FUNC_6 () ;
 int FUNC_7 (struct event_config*,int ) ;
 int FUNC_8 (struct evhttp*,char*,unsigned short) ;
 struct evhttp* FUNC_9 (struct event_base*) ;
 int FUNC_10 (struct evhttp*,char*,int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_16 (char*,char**,int) ;

int
FUNC_17(int VAR_9, char **VAR_10)
{
 struct event_config *VAR_11 = FUNC_6();
 struct event_base *VAR_12;
 struct evhttp *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 unsigned short VAR_17 = 8080;
 char *VAR_18 = ((void*)0);





 if (FUNC_15(VAR_1, VAR_3) == VAR_2)
  return (1);


 for (VAR_14 = 1; VAR_14 < VAR_9; ++VAR_14) {
  if (*VAR_10[VAR_14] != '-')
   continue;

  VAR_15 = VAR_10[VAR_14][1];

  if ((VAR_15 == 'p' || VAR_15 == 'l') && VAR_14 + 1 >= VAR_9) {
   FUNC_13(VAR_8, "-%c requires argument.\n", VAR_15);
   FUNC_12(1);
  }

  switch (VAR_15) {
  case 'p':
   if (VAR_14+1 >= VAR_9 || !VAR_10[VAR_14+1]) {
    FUNC_13(VAR_8, "Missing port\n");
    FUNC_12(1);
   }
   VAR_17 = (int)FUNC_16(VAR_10[VAR_14+1], &VAR_18, 10);
   if (*VAR_18 != '\0') {
    FUNC_13(VAR_8, "Bad port\n");
    FUNC_12(1);
   }
   break;
  case 'l':
   if (VAR_14+1 >= VAR_9 || !VAR_10[VAR_14+1]) {
    FUNC_13(VAR_8, "Missing content length\n");
    FUNC_12(1);
   }
   VAR_5 = (size_t)FUNC_16(VAR_10[VAR_14+1], &VAR_18, 10);
   if (*VAR_18 != '\0' || VAR_5 == 0) {
    FUNC_13(VAR_8, "Bad content length\n");
    FUNC_12(1);
   }
   break;







  default:
   FUNC_13(VAR_8, "Illegal argument \"%c\"\n", VAR_15);
   FUNC_12(1);
  }
 }

 VAR_12 = FUNC_5(VAR_11);
 if (!VAR_12) {
  FUNC_13(VAR_8, "creating event_base failed. Exiting.\n");
  return 1;
 }

 VAR_13 = FUNC_9(VAR_12);

 VAR_4 = FUNC_14(VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_13(VAR_8, "Cannot allocate content\n");
  FUNC_12(1);
 } else {
  int VAR_19 = 0;
  for (VAR_19 = 0; VAR_19 < (int)VAR_5; ++VAR_19)
   VAR_4[VAR_19] = (VAR_19 & 255);
 }

 FUNC_10(VAR_13, "/ind", VAR_6, ((void*)0));
 FUNC_13(VAR_8, "/ind - basic content (memory copy)\n");

 FUNC_10(VAR_13, "/ref", VAR_7, ((void*)0));
 FUNC_13(VAR_8, "/ref - basic content (reference)\n");

 FUNC_13(VAR_8, "Serving %d bytes on port %d using %s\n",
     (int)VAR_5, VAR_17,
     VAR_16? "IOCP" : FUNC_3(VAR_12));

 FUNC_8(VAR_13, "0.0.0.0", VAR_17);







 FUNC_2(VAR_12);






 return (0);
}
