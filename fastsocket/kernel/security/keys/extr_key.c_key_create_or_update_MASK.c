
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {scalar_t__ update; scalar_t__ read; struct key_type* type; int instantiate; int match; } ;
struct key {scalar_t__ update; scalar_t__ read; struct key* type; int instantiate; int match; } ;
struct cred {int fsgid; int fsuid; } ;
typedef struct key_type* key_ref_t ;
typedef int key_perm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key_type* FUNC_0 (struct key_type*) ;
 struct key_type* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct key_type*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct key_type*,void const*,size_t,struct key_type*,int *,unsigned long*) ;
 int FUNC_4 (struct key_type*,struct key_type*,char const*,unsigned long*) ;
 int FUNC_5 (struct key_type*,struct key_type*,unsigned long) ;
 struct key_type* FUNC_6 (struct key_type*,void const*,size_t) ;
 struct key_type* FUNC_7 (struct key_type*,struct key_type*,char const*,int ) ;
 struct cred* FUNC_8 () ;
 int FUNC_9 (struct key_type*) ;
 struct key_type* FUNC_10 (struct key_type*,char const*,int ,int ,struct cred const*,int,unsigned long) ;
 int FUNC_11 (struct key_type*) ;
 int FUNC_12 (struct key_type*,int ) ;
 int FUNC_13 (struct key_type*) ;
 struct key_type* FUNC_14 (struct key_type*) ;
 struct key_type VAR_16 ;
 struct key_type* FUNC_15 (char const*) ;
 int FUNC_16 (struct key_type*) ;
 struct key_type* FUNC_17 (struct key_type*,int ) ;

key_ref_t FUNC_18(key_ref_t VAR_17,
          const char *VAR_18,
          const char *VAR_19,
          const void *VAR_20,
          size_t VAR_21,
          key_perm_t VAR_22,
          unsigned long VAR_23)
{
 unsigned long VAR_24;
 const struct cred *VAR_25 = FUNC_8();
 struct key_type *VAR_26;
 struct key *VAR_27, *VAR_28 = ((void*)0);
 key_ref_t VAR_29;
 int VAR_30;



 VAR_26 = FUNC_15(VAR_18);
 if (FUNC_2(VAR_26)) {
  VAR_29 = FUNC_1(-VAR_1);
  goto error;
 }

 VAR_29 = FUNC_1(-VAR_0);
 if (!VAR_26->match || !VAR_26->instantiate)
  goto error_2;

 VAR_27 = FUNC_14(VAR_17);

 FUNC_11(VAR_27);

 VAR_29 = FUNC_1(-VAR_2);
 if (VAR_27->type != &VAR_16)
  goto error_2;

 VAR_30 = FUNC_4(VAR_27, VAR_26, VAR_19, &VAR_24);
 if (VAR_30 < 0)
  goto error_2;



 VAR_30 = FUNC_12(VAR_17, VAR_15);
 if (VAR_30 < 0) {
  VAR_29 = FUNC_1(VAR_30);
  goto error_3;
 }





 if (VAR_26->update) {
  VAR_29 = FUNC_7(VAR_17, VAR_26, VAR_19,
            0);
  if (!FUNC_2(VAR_29))
   goto found_matching_key;
 }


 if (VAR_22 == VAR_3) {
  VAR_22 = VAR_8 | VAR_6 | VAR_4 | VAR_7;
  VAR_22 |= VAR_13 | VAR_11 | VAR_9 | VAR_12;

  if (VAR_26->read)
   VAR_22 |= VAR_5 | VAR_10;

  if (VAR_26 == &VAR_16 || VAR_26->update)
   VAR_22 |= VAR_14;
 }


 VAR_28 = FUNC_10(VAR_26, VAR_19, VAR_25->fsuid, VAR_25->fsgid, VAR_25,
   VAR_22, VAR_23);
 if (FUNC_2(VAR_28)) {
  VAR_29 = FUNC_0(VAR_28);
  goto error_3;
 }


 VAR_30 = FUNC_3(VAR_28, VAR_20, VAR_21, VAR_27, ((void*)0),
      &VAR_24);
 if (VAR_30 < 0) {
  FUNC_13(VAR_28);
  VAR_29 = FUNC_1(VAR_30);
  goto error_3;
 }

 VAR_29 = FUNC_17(VAR_28, FUNC_9(VAR_17));

 error_3:
 FUNC_5(VAR_27, VAR_26, VAR_24);
 error_2:
 FUNC_16(VAR_26);
 error:
 return VAR_29;

 found_matching_key:



 FUNC_5(VAR_27, VAR_26, VAR_24);
 FUNC_16(VAR_26);

 VAR_29 = FUNC_6(VAR_29, VAR_20, VAR_21);
 goto error;
}
