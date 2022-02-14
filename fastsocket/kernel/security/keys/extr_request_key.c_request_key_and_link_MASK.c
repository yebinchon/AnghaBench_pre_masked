
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int match; int name; } ;
struct key {int dummy; } ;
struct cred {int dummy; } ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int ) ;
 struct key* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct key**) ;
 struct key* FUNC_5 (struct key_type*,char const*,void const*,size_t,void*,struct key*,unsigned long) ;
 struct cred* FUNC_6 () ;
 int FUNC_7 (char*,int ,char const*,void const*,size_t,void*,struct key*,unsigned long) ;
 int FUNC_8 (struct key*,struct key*) ;
 int FUNC_9 (struct key*) ;
 struct key* FUNC_10 (int ) ;
 int FUNC_11 (char*,struct key*) ;
 int FUNC_12 (struct key_type*,char const*,int ,struct cred const*) ;

struct key *FUNC_13(struct key_type *VAR_2,
     const char *VAR_3,
     const void *VAR_4,
     size_t VAR_5,
     void *VAR_6,
     struct key *VAR_7,
     unsigned long VAR_8)
{
 const struct cred *VAR_9 = FUNC_6();
 struct key *VAR_10;
 key_ref_t VAR_11;

 FUNC_7("%s,%s,%p,%zu,%p,%p,%lx",
        VAR_2->name, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8);


 VAR_11 = FUNC_12(VAR_2, VAR_3, VAR_2->match, VAR_9);

 if (!FUNC_2(VAR_11)) {
  VAR_10 = FUNC_10(VAR_11);
  if (VAR_7) {
   FUNC_4(&VAR_7);
   FUNC_8(VAR_7, VAR_10);
   FUNC_9(VAR_7);
  }
 } else if (FUNC_3(VAR_11) != -VAR_0) {
  VAR_10 = FUNC_0(VAR_11);
 } else {


  VAR_10 = FUNC_1(-VAR_1);
  if (!VAR_4)
   goto error;

  VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7,
          VAR_8);
 }

error:
 FUNC_11(" = %p", VAR_10);
 return VAR_10;
}
