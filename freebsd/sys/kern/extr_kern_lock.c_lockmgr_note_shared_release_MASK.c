
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock {int lock_object; } ;


 int FUNC_0 (int ,struct lock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,int ,int ,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct lock *VAR_3, const char *VAR_4, int VAR_5)
{

 FUNC_0(VAR_2, VAR_3, VAR_0);
 FUNC_4(&VAR_3->lock_object, 0, VAR_4, VAR_5);
 FUNC_1("SUNLOCK", &VAR_3->lock_object, 0, 0, VAR_4, VAR_5);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
