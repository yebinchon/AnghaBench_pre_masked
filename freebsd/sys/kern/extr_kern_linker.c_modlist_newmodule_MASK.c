
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct modlist {int dummy; } ;
typedef TYPE_1__* modlist_t ;
typedef int linker_file_t ;
struct TYPE_5__ {char const* name; int version; int container; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static modlist_t
FUNC_3(const char *VAR_5, int VAR_6, linker_file_t VAR_7)
{
 modlist_t VAR_8;

 VAR_8 = FUNC_1(sizeof(struct modlist), VAR_0, VAR_1 | VAR_2);
 if (VAR_8 == ((void*)0))
  FUNC_2("no memory for module list");
 VAR_8->container = VAR_7;
 VAR_8->name = VAR_5;
 VAR_8->version = VAR_6;
 FUNC_0(&VAR_3, VAR_8, VAR_4);
 return (VAR_8);
}
