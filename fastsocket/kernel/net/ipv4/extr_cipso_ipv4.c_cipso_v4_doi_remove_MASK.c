
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_audit {int dummy; } ;
struct cipso_v4_doi {int rcu; int list; int refcount; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 struct cipso_v4_doi* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct audit_buffer* FUNC_7 (int ,struct netlbl_audit*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(u32 VAR_5, struct netlbl_audit *VAR_6)
{
 int VAR_7;
 struct cipso_v4_doi *VAR_8;
 struct audit_buffer *VAR_9;

 FUNC_8(&VAR_4);
 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_9(&VAR_4);
  VAR_7 = -VAR_2;
  goto doi_remove_return;
 }
 if (!FUNC_0(&VAR_8->refcount)) {
  FUNC_9(&VAR_4);
  VAR_7 = -VAR_1;
  goto doi_remove_return;
 }
 FUNC_6(&VAR_8->list);
 FUNC_9(&VAR_4);

 FUNC_4();
 FUNC_3(&VAR_8->rcu, VAR_3);
 VAR_7 = 0;

doi_remove_return:
 VAR_9 = FUNC_7(VAR_0, VAR_6);
 if (VAR_9 != ((void*)0)) {
  FUNC_2(VAR_9,
     " cipso_doi=%u res=%u",
     VAR_5, VAR_7 == 0 ? 1 : 0);
  FUNC_1(VAR_9);
 }

 return VAR_7;
}
