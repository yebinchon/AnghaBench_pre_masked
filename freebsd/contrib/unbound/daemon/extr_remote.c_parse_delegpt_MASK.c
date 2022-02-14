
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct delegpt {int has_parent_side_NS; } ;
typedef int socklen_t ;
typedef int RES ;


 int FUNC_0 (char*,struct sockaddr_storage*,int *,char**) ;
 int FUNC_1 (struct delegpt*,struct sockaddr_storage*,int ,int ,int ,char*) ;
 int FUNC_2 (struct delegpt*,int *,int ) ;
 struct delegpt* FUNC_3 (int *) ;
 int FUNC_4 (struct delegpt*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,int **,size_t*,int*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int *,char*,...) ;
 char* FUNC_10 (char*,char) ;

__attribute__((used)) static struct delegpt*
FUNC_11(RES* VAR_0, char* VAR_1, uint8_t* VAR_2, int VAR_3)
{

 char* VAR_4 = VAR_1;
 char* VAR_5;
 struct delegpt* VAR_6 = FUNC_3(VAR_2);
 struct sockaddr_storage VAR_7;
 socklen_t VAR_8;
 char* VAR_9;
 if(!VAR_6) {
  (void)FUNC_9(VAR_0, "error out of memory\n");
  return ((void*)0);
 }
 while(VAR_4) {
  VAR_5 = VAR_4;
  VAR_4 = FUNC_10(VAR_4, ' ');
  if(VAR_4) {
   *VAR_4++ = 0;
   VAR_4 = FUNC_8(VAR_4);
  }

  if(!FUNC_0(VAR_5, &VAR_7, &VAR_8, &VAR_9)) {
   if(VAR_3) {
    uint8_t* VAR_10 = ((void*)0);
    size_t VAR_11;
    int VAR_12;
    if(!FUNC_7(VAR_0, VAR_5, &VAR_10, &VAR_11, &VAR_12)) {
     (void)FUNC_9(VAR_0, "error cannot "
      "parse IP address or name "
      "'%s'\n", VAR_5);
     FUNC_4(VAR_6);
     return ((void*)0);
    }
    if(!FUNC_2(VAR_6, VAR_10, 0)) {
     (void)FUNC_9(VAR_0, "error out of memory\n");
     FUNC_5(VAR_10);
     FUNC_4(VAR_6);
     return ((void*)0);
    }
    FUNC_5(VAR_10);

   } else {
    (void)FUNC_9(VAR_0, "error cannot parse"
     " IP address '%s'\n", VAR_5);
    FUNC_4(VAR_6);
    return ((void*)0);
   }
  } else {

   if(VAR_9)
     FUNC_6("no name verification functionality in "
    "ssl library, ignored name for %s", VAR_5);


   if(!FUNC_1(VAR_6, &VAR_7, VAR_8, 0, 0,
    VAR_9)) {
    (void)FUNC_9(VAR_0, "error out of memory\n");
    FUNC_4(VAR_6);
    return ((void*)0);
   }
  }
 }
 VAR_6->has_parent_side_NS = 1;
 return VAR_6;
}
