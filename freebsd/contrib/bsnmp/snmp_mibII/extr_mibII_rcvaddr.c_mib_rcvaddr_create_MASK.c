
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef size_t u_char ;
struct TYPE_2__ {size_t len; size_t* subs; } ;
struct mibrcvaddr {size_t ifindex; size_t addrlen; TYPE_1__ index; scalar_t__ flags; int addr; } ;
struct mibif {size_t index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mibrcvaddr*,int *) ;
 scalar_t__ VAR_1 ;
 struct mibrcvaddr* FUNC_1 (int) ;
 int FUNC_2 (int ,size_t const*,size_t) ;
 int VAR_2 ;

struct mibrcvaddr *
FUNC_3(struct mibif *VAR_3, const u_char *VAR_4, size_t VAR_5)
{
 struct mibrcvaddr *VAR_6;
 u_int VAR_7;

 if (VAR_5 + VAR_1 + 1 > VAR_0)
  return (((void*)0));

 if ((VAR_6 = FUNC_1(sizeof(*VAR_6))) == ((void*)0))
  return (((void*)0));
 VAR_6->ifindex = VAR_3->index;
 VAR_6->addrlen = VAR_5;
 FUNC_2(VAR_6->addr, VAR_4, VAR_5);
 VAR_6->flags = 0;

 VAR_6->index.len = VAR_5 + 2;
 VAR_6->index.subs[0] = VAR_3->index;
 VAR_6->index.subs[1] = VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_6->index.subs[VAR_7 + 2] = VAR_4[VAR_7];

 FUNC_0(VAR_6, &VAR_2);

 return (VAR_6);
}
