
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int td_ucred; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int name ;
typedef int * hook_p ;
struct TYPE_4__ {int flags; int * hook; int so; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__* const,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 struct thread* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (int,int *,int,int,int ,struct thread*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_10, hook_p VAR_11, const char *VAR_12)
{
 struct thread *VAR_13 = VAR_5;
 const priv_p VAR_14 = FUNC_2(VAR_10);
 char *VAR_15, *VAR_16, VAR_17[VAR_4];
 int VAR_18, VAR_19, VAR_20, VAR_21;


 if (VAR_14->hook != ((void*)0))
  return (VAR_1);

 if (VAR_14->flags & VAR_2) {
  if (VAR_14->flags & VAR_3) {

   FUNC_0(VAR_14, VAR_9);
   VAR_14->flags &= ~VAR_3;
  }
 } else {

  FUNC_4(VAR_17, sizeof(VAR_17), "%s", VAR_12);
  VAR_15 = VAR_17;
  if ((VAR_16 = FUNC_6(VAR_15, '/')) == ((void*)0))
   return (VAR_0);
  *VAR_16++ = '\0';
  VAR_18 = FUNC_3(VAR_6, VAR_15, 0);
  if (VAR_18 == -1)
   return (VAR_0);
  VAR_15 = VAR_16;
  if ((VAR_16 = FUNC_6(VAR_15, '/')) == ((void*)0))
   return (VAR_0);
  *VAR_16++ = '\0';
  VAR_19 = FUNC_3(VAR_8, VAR_15, 0);
  if (VAR_19 == -1)
   return (VAR_0);
  VAR_15 = VAR_16;
  VAR_20 = FUNC_3(VAR_7, VAR_15, VAR_18);
  if (VAR_20 == -1)
   return (VAR_0);


  VAR_21 = FUNC_5(VAR_18, &VAR_14->so, VAR_19, VAR_20,
     VAR_13->td_ucred, VAR_13);
  if (VAR_21 != 0)
   return (VAR_21);



 }


 VAR_14->hook = VAR_11;






 FUNC_1(VAR_11);

 return(0);
}
