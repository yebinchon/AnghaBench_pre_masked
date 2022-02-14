
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct mibif {int index; } ;
struct TYPE_2__ {int len; int* subs; } ;
struct mibarp {int physlen; int phys; TYPE_1__ index; scalar_t__ flags; } ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (struct mibarp*,int *) ;
 struct mibarp* FUNC_1 (int) ;
 int FUNC_2 (int ,int const*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

struct mibarp *
FUNC_4(const struct mibif *VAR_1, struct in_addr VAR_2, const u_char *VAR_3,
    size_t VAR_4)
{
 struct mibarp *VAR_5;
 uint32_t VAR_6 = FUNC_3(VAR_2.s_addr);

 if ((VAR_5 = FUNC_1(sizeof(*VAR_5))) == ((void*)0))
  return (((void*)0));
 VAR_5->flags = 0;

 VAR_5->index.len = 5;
 VAR_5->index.subs[0] = VAR_1->index;
 VAR_5->index.subs[1] = (VAR_6 >> 24) & 0xff;
 VAR_5->index.subs[2] = (VAR_6 >> 16) & 0xff;
 VAR_5->index.subs[3] = (VAR_6 >> 8) & 0xff;
 VAR_5->index.subs[4] = (VAR_6 >> 0) & 0xff;
 if ((VAR_5->physlen = VAR_4) > sizeof(VAR_5->phys))
  VAR_5->physlen = sizeof(VAR_5->phys);
 FUNC_2(VAR_5->phys, VAR_3, VAR_5->physlen);

 FUNC_0(VAR_5, &VAR_0);

 return (VAR_5);
}
