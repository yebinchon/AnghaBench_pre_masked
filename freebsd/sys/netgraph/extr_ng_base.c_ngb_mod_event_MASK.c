
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int dummy; } ;
struct ng_item {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,struct proc**,struct thread**,int ,int ,char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(module_t VAR_18, int VAR_19, void *VAR_20)
{
 struct proc *VAR_21;
 struct thread *VAR_22;
 int VAR_23, VAR_24 = 0;

 switch (VAR_19) {
 case 129:

  FUNC_0();
  FUNC_3(&VAR_14, "netgraph types");
  FUNC_3(&VAR_8, "netgraph idhash");
  FUNC_3(&VAR_9, "netgraph namehash");
  FUNC_3(&VAR_13, "netgraph topology mutex");






  VAR_12 = FUNC_4("NetGraph items", sizeof(struct ng_item),
      ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_4, 0);
  FUNC_5(VAR_12, VAR_5);
  VAR_11 = FUNC_4("NetGraph data items",
      sizeof(struct ng_item), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      VAR_4, 0);
  FUNC_5(VAR_11, VAR_6);

  if (VAR_17 <= 0)
   VAR_17 = VAR_7;

      VAR_21 = ((void*)0);
  for (VAR_23 = 0; VAR_23 < VAR_17; VAR_23++) {
   if (FUNC_1(VAR_16, ((void*)0), &VAR_21, &VAR_22,
       VAR_3, 0, "ng_queue", "ng_queue%d", VAR_23)) {
    VAR_17 = VAR_23;
    break;
   }
  }
  break;
 case 128:

  VAR_24 = VAR_0;
  break;
 default:
  VAR_24 = VAR_1;
  break;
 }
 return (VAR_24);
}
