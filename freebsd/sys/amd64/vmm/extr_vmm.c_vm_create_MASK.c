
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct vm {int sockets; int maxcpus; int threads; int cores; int rendezvous_mtx; struct vmspace* vmspace; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vmspace* FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct vm* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int VAR_11 ;
 int FUNC_5 (struct vm*,int) ;
 int VAR_12 ;

int
FUNC_6(const char *VAR_13, struct vm **VAR_14)
{
 struct vm *VAR_15;
 struct vmspace *VAR_16;





 if (!VAR_12)
  return (VAR_2);

 if (VAR_13 == ((void*)0) || FUNC_4(VAR_13) >= VAR_9)
  return (VAR_0);

 VAR_16 = FUNC_0(0, VAR_8);
 if (VAR_16 == ((void*)0))
  return (VAR_1);

 VAR_15 = FUNC_1(sizeof(struct vm), VAR_4, VAR_5 | VAR_6);
 FUNC_3(VAR_15->name, VAR_13);
 VAR_15->vmspace = VAR_16;
 FUNC_2(&VAR_15->rendezvous_mtx, "vm rendezvous lock", 0, VAR_3);

 VAR_15->sockets = 1;
 VAR_15->cores = VAR_10;
 VAR_15->threads = VAR_11;
 VAR_15->maxcpus = VAR_7;

 FUNC_5(VAR_15, 1);

 *VAR_14 = VAR_15;
 return (0);
}
