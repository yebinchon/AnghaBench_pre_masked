
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_base {struct fs_base* parent; int name; int users_refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static void FUNC_2(struct fs_base *VAR_1,
    const char *VAR_2,
    struct fs_base *VAR_3)
{
 if (VAR_3)
  FUNC_0(&VAR_3->users_refcount);
 VAR_1->name = FUNC_1(VAR_2, VAR_0);
 VAR_1->parent = VAR_3;
}
