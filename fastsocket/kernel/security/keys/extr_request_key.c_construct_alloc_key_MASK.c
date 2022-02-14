
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_user {int cons_lock; } ;
struct key_type {int match; int name; } ;
struct key {int flags; } ;
struct cred {int fsgid; int fsuid; } ;
typedef struct key* key_ref_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*,struct key*,unsigned long*) ;
 int FUNC_3 (struct key*,struct key_type*,char const*,unsigned long*) ;
 int FUNC_4 (struct key*,struct key*) ;
 int FUNC_5 (struct key*,struct key_type*,unsigned long) ;
 struct cred* FUNC_6 () ;
 int FUNC_7 (char*,int ,char const*) ;
 struct key* FUNC_8 (struct key_type*,char const*,int ,int ,struct cred const*,int ,unsigned long) ;
 int VAR_3 ;
 int FUNC_9 (struct key*) ;
 struct key* FUNC_10 (struct key*) ;
 int FUNC_11 (struct key*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct key* FUNC_15 (struct key_type*,char const*,int ,struct cred const*) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct key_type *VAR_4,
          const char *VAR_5,
          struct key *VAR_6,
          unsigned long VAR_7,
          struct key_user *VAR_8,
          struct key **VAR_9)
{
 const struct cred *VAR_10 = FUNC_6();
 unsigned long VAR_11;
 struct key *VAR_12;
 key_ref_t VAR_13;
 int VAR_14;

 FUNC_7("%s,%s,,,", VAR_4->name, VAR_5);

 *VAR_9 = ((void*)0);
 FUNC_13(&VAR_8->cons_lock);

 VAR_12 = FUNC_8(VAR_4, VAR_5, VAR_10->fsuid, VAR_10->fsgid, VAR_10,
   VAR_2, VAR_7);
 if (FUNC_0(VAR_12))
  goto alloc_failed;

 FUNC_16(VAR_1, &VAR_12->flags);

 if (VAR_6) {
  VAR_14 = FUNC_3(VAR_6, VAR_4, VAR_5,
           &VAR_11);
  if (VAR_14 < 0)
   goto link_prealloc_failed;
 }




 FUNC_13(&VAR_3);

 VAR_13 = FUNC_15(VAR_4, VAR_5, VAR_4->match, VAR_10);
 if (!FUNC_0(VAR_13))
  goto key_already_present;

 if (VAR_6)
  FUNC_2(VAR_6, VAR_12, &VAR_11);

 FUNC_14(&VAR_3);
 if (VAR_6)
  FUNC_5(VAR_6, VAR_4, VAR_11);
 FUNC_14(&VAR_8->cons_lock);
 *VAR_9 = VAR_12;
 FUNC_12(" = 0 [%d]", FUNC_11(VAR_12));
 return 0;

key_already_present:
 FUNC_9(VAR_12);
 FUNC_14(&VAR_3);
 VAR_12 = FUNC_10(VAR_13);
 if (VAR_6) {
  VAR_14 = FUNC_4(VAR_6, VAR_12);
  if (VAR_14 == 0)
   FUNC_2(VAR_6, VAR_12, &VAR_11);
  FUNC_5(VAR_6, VAR_4, VAR_11);
  if (VAR_14 < 0)
   goto link_check_failed;
 }
 FUNC_14(&VAR_8->cons_lock);
 *VAR_9 = VAR_12;
 FUNC_12(" = -EINPROGRESS [%d]", FUNC_11(VAR_12));
 return -VAR_0;

link_check_failed:
 FUNC_14(&VAR_8->cons_lock);
 FUNC_9(VAR_12);
 FUNC_12(" = %d [linkcheck]", VAR_14);
 return VAR_14;

link_prealloc_failed:
 FUNC_14(&VAR_8->cons_lock);
 FUNC_12(" = %d [prelink]", VAR_14);
 return VAR_14;

alloc_failed:
 FUNC_14(&VAR_8->cons_lock);
 FUNC_12(" = %ld", FUNC_1(VAR_12));
 return FUNC_1(VAR_12);
}
