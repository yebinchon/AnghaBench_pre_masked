
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union savefpu {int dummy; } savefpu ;
typedef int uint64_t ;
struct xstate_hdr {int xstate_bv; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_2(struct thread *VAR_5, char *VAR_6, size_t VAR_7)
{
 struct xstate_hdr *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11;
 uint64_t VAR_12;


 if (VAR_6 == ((void*)0))
  return (0);
 if (!VAR_3)
  return (VAR_1);

 VAR_10 = VAR_7;
 if (VAR_10 < sizeof(struct xstate_hdr))
  return (VAR_0);
 VAR_11 = VAR_2 - sizeof(union savefpu);
 if (VAR_10 > VAR_11)
  return (VAR_0);

 VAR_9 = (struct xstate_hdr *)VAR_6;
 VAR_12 = VAR_9->xstate_bv;




 if (VAR_12 & ~VAR_4)
  return (VAR_0);

 VAR_8 = (struct xstate_hdr *)(FUNC_1(VAR_5) + 1);

 VAR_8->xstate_bv = VAR_12;
 FUNC_0(VAR_6 + sizeof(struct xstate_hdr),
     (char *)(VAR_8 + 1), VAR_10 - sizeof(struct xstate_hdr));

 return (0);
}
