
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v6only ;
struct thread {int * td_retval; } ;
struct linux_socket_args {int type; int protocol; int domain; } ;
typedef int hdrincl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int*,int ,int) ;
 int FUNC_1 (struct thread*,int,int,int ) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct thread *VAR_13, struct linux_socket_args *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;

 VAR_17 = VAR_14->type & VAR_8;
 if (VAR_17 < 0 || VAR_17 > VAR_7)
  return (VAR_1);
 VAR_16 = FUNC_2(VAR_14->type & ~VAR_8,
  &VAR_17);
 if (VAR_16 != 0)
  return (VAR_16);
 VAR_15 = FUNC_3(VAR_14->domain);
 if (VAR_15 == -1)
  return (VAR_0);

 VAR_16 = FUNC_1(VAR_13, VAR_15, VAR_17, VAR_14->protocol);
 if (VAR_16)
  return (VAR_16);

 if (VAR_17 == VAR_11
     && (VAR_14->protocol == VAR_4 || VAR_14->protocol == 0)
     && VAR_15 == VAR_9) {

  int VAR_18;

  VAR_18 = 1;

  FUNC_0(VAR_13, VAR_13->td_retval[0], VAR_2, VAR_6,
      &VAR_18, VAR_12, sizeof(VAR_18));
 }
 return (VAR_16);
}
