
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lock {int lock_object; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct lock*,int,int ,char const*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int *,int ,int ,char const*,int) ;
 int FUNC_3 (struct lock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct lock *VAR_3, int VAR_4,
    uint64_t VAR_5, const char *VAR_6, int VAR_7, int VAR_8)
{

 FUNC_1(VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_0);
 FUNC_2("SLOCK", &VAR_3->lock_object, 0, 0, VAR_6, VAR_7);
 FUNC_6(&VAR_3->lock_object, FUNC_0(VAR_8), VAR_6, VAR_7);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_3(VAR_3);
}
