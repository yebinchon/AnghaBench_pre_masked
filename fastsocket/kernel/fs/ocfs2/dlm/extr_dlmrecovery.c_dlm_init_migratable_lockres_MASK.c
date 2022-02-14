
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u64 ;
struct dlm_migratable_lockres {int lockname_len; void* master; void* flags; int mig_cookie; int total_locks; scalar_t__ num_locks; int lockname; } ;


 int FUNC_0 (struct dlm_migratable_lockres*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_4(struct dlm_migratable_lockres *VAR_0,
     const char *VAR_1, int VAR_2,
     int VAR_3, u64 VAR_4,
     u8 VAR_5, u8 VAR_6)
{

 FUNC_0(VAR_0);
 VAR_0->lockname_len = VAR_2;
 FUNC_3(VAR_0->lockname, VAR_1, VAR_2);
 VAR_0->num_locks = 0;
 VAR_0->total_locks = FUNC_1(VAR_3);
 VAR_0->mig_cookie = FUNC_2(VAR_4);
 VAR_0->flags = VAR_5;
 VAR_0->master = VAR_6;
}
