
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int ntids; int hftid_cv; int hftid_lock; int * hftid_hash_4t; int hftid_4t_mask; int * hftid_hash_tid; int hftid_tid_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 void* FUNC_3 (int,int ,int *,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct tid_info *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3->ntids > 0);
 FUNC_0(VAR_3->hftid_hash_4t == ((void*)0));
 FUNC_0(VAR_3->hftid_hash_tid == ((void*)0));

 VAR_5 = FUNC_4(VAR_3->ntids / 1024, 16);
 VAR_3->hftid_hash_4t = FUNC_3(VAR_5, VAR_2, &VAR_3->hftid_4t_mask, VAR_4);
 if (VAR_3->hftid_hash_4t == ((void*)0))
  return (VAR_0);
 VAR_3->hftid_hash_tid = FUNC_3(VAR_5, VAR_2, &VAR_3->hftid_tid_mask,
     VAR_4);
 if (VAR_3->hftid_hash_tid == ((void*)0)) {
  FUNC_2(VAR_3->hftid_hash_4t, VAR_2, VAR_3->hftid_4t_mask);
  VAR_3->hftid_hash_4t = ((void*)0);
  return (VAR_0);
 }

 FUNC_5(&VAR_3->hftid_lock, "T4 hashfilters", 0, VAR_1);
 FUNC_1(&VAR_3->hftid_cv, "t4hfcv");

 return (0);
}
