
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct ng_mesg {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int,char const*,struct ng_mesg*,void const*,size_t) ;

int
FUNC_1(int VAR_1, const char *VAR_2,
 const struct ng_mesg *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct ng_mesg VAR_6;


 VAR_6 = *VAR_3;
 VAR_6.header.flags = VAR_0;


 return (FUNC_0(VAR_1, VAR_2, &VAR_6, VAR_4, VAR_5));
}
