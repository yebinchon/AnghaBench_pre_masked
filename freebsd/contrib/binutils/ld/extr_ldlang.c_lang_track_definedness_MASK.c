
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char const*,int ,int ) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_2 ;

void
FUNC_3 (const char *VAR_3)
{
  if (FUNC_1 (&VAR_2, VAR_3, VAR_1, VAR_0) == ((void*)0))
    FUNC_2 (FUNC_0("%P%F: bfd_hash_lookup failed creating symbol %s\n"), VAR_3);
}
