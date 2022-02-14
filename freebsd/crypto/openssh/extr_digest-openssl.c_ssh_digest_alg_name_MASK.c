
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_digest {char const* name; } ;


 struct ssh_digest* FUNC_0 (int) ;

const char *
FUNC_1(int VAR_0)
{
 const struct ssh_digest *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 == ((void*)0) ? ((void*)0) : VAR_1->name;
}
