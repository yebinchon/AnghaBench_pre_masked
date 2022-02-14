
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {scalar_t__ status; int maparrsz; int * rdap; int * mappings; } ;
typedef int rd_agent_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,struct proc_handle*) ;
 int * FUNC_2 (struct proc_handle*) ;

rd_agent_t *
FUNC_3(struct proc_handle *VAR_4)
{

 if (VAR_4->rdap == ((void*)0) && VAR_4->status != VAR_1 &&
     VAR_4->status != VAR_0) {
  if ((VAR_4->rdap = FUNC_2(VAR_4)) == ((void*)0))
   return (((void*)0));

  VAR_4->maparrsz = 64;
  VAR_4->mappings = FUNC_0(VAR_4->maparrsz,
      sizeof(*VAR_4->mappings));
  if (VAR_4->mappings == ((void*)0))
   return (VAR_4->rdap);
  if (FUNC_1(VAR_4->rdap, VAR_3, VAR_4) != VAR_2)
   return (((void*)0));
 }
 return (VAR_4->rdap);
}
