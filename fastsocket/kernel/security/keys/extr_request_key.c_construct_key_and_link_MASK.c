
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_user {int dummy; } ;
struct key_type {int dummy; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int) ;
 int FUNC_1 (struct key_type*,char const*,struct key*,unsigned long,struct key_user*,struct key**) ;
 int FUNC_2 (struct key**) ;
 int FUNC_3 (struct key*,char const*,size_t,void*,struct key*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct key*,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_9 (struct key*) ;
 int FUNC_10 (struct key*) ;
 struct key_user* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct key_user*) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static struct key *FUNC_14(struct key_type *VAR_3,
       const char *VAR_4,
       const char *VAR_5,
       size_t VAR_6,
       void *VAR_7,
       struct key *VAR_8,
       unsigned long VAR_9)
{
 struct key_user *VAR_10;
 struct key *VAR_11;
 int VAR_12;

 FUNC_7("");

 VAR_10 = FUNC_11(FUNC_4(), FUNC_5());
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 FUNC_2(&VAR_8);

 VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_8, VAR_9, VAR_10,
      &VAR_11);
 FUNC_12(VAR_10);

 if (VAR_12 == 0) {
  VAR_12 = FUNC_3(VAR_11, VAR_5, VAR_6, VAR_7,
        VAR_8);
  if (VAR_12 < 0) {
   FUNC_6("cons failed");
   goto construction_failed;
  }
 } else if (VAR_12 == -VAR_0) {
  VAR_12 = 0;
 } else {
  goto couldnt_alloc_key;
 }

 FUNC_9(VAR_8);
 FUNC_13(" = key %d", FUNC_10(VAR_11));
 return VAR_11;

construction_failed:
 FUNC_8(VAR_11, VAR_2, ((void*)0), ((void*)0));
 FUNC_9(VAR_11);
couldnt_alloc_key:
 FUNC_9(VAR_8);
 FUNC_13(" = %d", VAR_12);
 return FUNC_0(VAR_12);
}
