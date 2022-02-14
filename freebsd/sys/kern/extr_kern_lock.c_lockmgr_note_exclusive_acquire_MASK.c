
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lock {int lock_object; int lk_recurse; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct lock*,int,int ,char const*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int *,int ,int ,char const*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct lock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(struct lock *VAR_4, int VAR_5,
    uint64_t VAR_6, const char *VAR_7, int VAR_8, int VAR_9)
{

 FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8, VAR_0);
 FUNC_2("XLOCK", &VAR_4->lock_object, 0, VAR_4->lk_recurse, VAR_7, VAR_8);
 FUNC_5(&VAR_4->lock_object, VAR_1 | FUNC_0(VAR_9), VAR_7,
     VAR_8);
 FUNC_4(VAR_2);
 FUNC_3(VAR_4);
}
