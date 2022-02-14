
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lockdep_map {char* name; TYPE_1__* key; } ;
struct TYPE_2__ {int subkeys; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(struct lockdep_map *VAR_1)
{
 const char *VAR_2;
 char VAR_3[VAR_0];

 VAR_2 = VAR_1->name;
 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_1->key->subkeys, VAR_3);

 FUNC_1("%s", VAR_2);
}
