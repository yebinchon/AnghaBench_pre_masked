
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typecookie; int token; int cmd; scalar_t__ cmdstr; int flags; int version; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,char const*,struct ng_mesg*,void const*,size_t) ;
 int FUNC_1 (int *,int) ;
 int VAR_4 ;
 int FUNC_2 (struct ng_mesg*,int ,int) ;
 int FUNC_3 (char*,int ,char*,int) ;

int
FUNC_4(int VAR_5, const char *VAR_6,
   int VAR_7, int VAR_8, const void *VAR_9, size_t VAR_10)
{
 struct ng_mesg VAR_11;


 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.header.version = VAR_3;
 VAR_11.header.typecookie = VAR_7;
 VAR_11.header.token = FUNC_1(&VAR_4, 1) & VAR_0;
 VAR_11.header.flags = VAR_1;
 VAR_11.header.cmd = VAR_8;
 FUNC_3((char *)VAR_11.header.cmdstr, VAR_2, "cmd%d", VAR_8);


 if (FUNC_0(VAR_5, VAR_6, &VAR_11, VAR_9, VAR_10) < 0)
  return (-1);
 return (VAR_11.header.token);
}
