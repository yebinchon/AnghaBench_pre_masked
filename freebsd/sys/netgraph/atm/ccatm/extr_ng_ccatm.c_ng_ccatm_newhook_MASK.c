
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct ccuser {int dummy; } ;
typedef struct ccuser ccport ;
struct ccnode {int hook_cnt; int data; void* manage; void* dump; } ;
struct cchook {int is_uni; struct ccuser* inst; void* hook; struct ccnode* node; } ;
typedef int node_p ;
typedef void* hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,struct cchook*) ;
 int FUNC_3 (void*,int ) ;
 struct ccnode* FUNC_4 (int ) ;
 struct ccuser* FUNC_5 (int ,struct cchook*,int ) ;
 struct ccuser* FUNC_6 (int ,struct cchook*,int ) ;
 int FUNC_7 (struct cchook*,int ) ;
 struct cchook* FUNC_8 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 int FUNC_11 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_12(node_p VAR_7, hook_p VAR_8, const char *VAR_9)
{
 struct ccnode *VAR_10 = FUNC_4(VAR_7);
 struct ccport *VAR_11;
 struct ccuser *VAR_12;
 struct cchook *VAR_13;
 u_long VAR_14;
 char *VAR_15;

 if (FUNC_10(VAR_9, "uni", 3) == 0) {



  if (VAR_9[3] == '\0')
   return (VAR_0);
  VAR_14 = FUNC_11(VAR_9 + 3, &VAR_15, 10);
  if (*VAR_15 != '\0' || VAR_14 == 0 || VAR_14 > 0xffffffff)
   return (VAR_0);

  VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_2, VAR_3);
  if (VAR_13 == ((void*)0))
   return (VAR_1);
  VAR_13->is_uni = 1;
  VAR_13->node = VAR_10;
  VAR_13->hook = VAR_8;

  VAR_11 = FUNC_5(VAR_10->data, VAR_13, (u_int)VAR_14);
  if (VAR_11 == ((void*)0)) {
   FUNC_7(VAR_13, VAR_2);
   return (VAR_1);
  }
  VAR_13->inst = VAR_11;

  FUNC_2(VAR_8, VAR_13);
  FUNC_3(VAR_8, VAR_6);
  FUNC_0(VAR_8);

  VAR_10->hook_cnt++;

  return (0);
 }

 if (FUNC_9(VAR_9, "dump") == 0) {
  VAR_10->dump = VAR_8;
  FUNC_3(VAR_8, VAR_4);
  return (0);
 }

 if (FUNC_9(VAR_9, "manage") == 0) {
  VAR_10->manage = VAR_8;
  FUNC_3(VAR_8, VAR_5);
  return (0);
 }




 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_2, VAR_3);
 if (VAR_13 == ((void*)0))
  return (VAR_1);
 VAR_13->is_uni = 0;
 VAR_13->node = VAR_10;
 VAR_13->hook = VAR_8;

 VAR_12 = FUNC_6(VAR_10->data, VAR_13, FUNC_1(VAR_8));
 if (VAR_12 == ((void*)0)) {
  FUNC_7(VAR_13, VAR_2);
  return (VAR_1);
 }

 VAR_13->inst = VAR_12;
 FUNC_2(VAR_8, VAR_13);
 FUNC_0(VAR_8);

 VAR_10->hook_cnt++;

 return (0);
}
