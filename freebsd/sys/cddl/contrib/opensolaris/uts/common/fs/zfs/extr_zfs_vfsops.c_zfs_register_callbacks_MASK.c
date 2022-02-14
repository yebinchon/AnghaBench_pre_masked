
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int * z_os; struct TYPE_21__* vfs_data; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef TYPE_1__ vfs_t ;
typedef void* uint64_t ;
struct dsl_dataset {int dummy; } ;
typedef int objset_t ;
typedef void* boolean_t ;


 int FUNC_0 (TYPE_1__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 struct dsl_dataset* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (struct dsl_dataset*,char*,void**) ;
 int FUNC_13 (struct dsl_dataset*,int ,int (*) (TYPE_1__*,void*),TYPE_1__*) ;
 int FUNC_14 (struct dsl_dataset*,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,void*) ;
 int FUNC_16 (TYPE_1__*,void*) ;
 int FUNC_17 (TYPE_1__*,void*) ;
 int FUNC_18 (TYPE_1__*,void*) ;
 int FUNC_19 (TYPE_1__*,void*) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (TYPE_1__*,int ,int *) ;
 int FUNC_22 (TYPE_1__*,void*) ;
 int FUNC_23 (TYPE_1__*,void*) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static int
FUNC_25(vfs_t *VAR_28)
{
 struct dsl_dataset *VAR_29 = ((void*)0);
 objset_t *VAR_30 = ((void*)0);
 zfsvfs_t *VAR_31 = ((void*)0);
 uint64_t VAR_32;
 boolean_t VAR_33 = VAR_0;
 boolean_t VAR_34 = VAR_0;
 boolean_t VAR_35 = VAR_0;
 boolean_t VAR_36 = VAR_0;
 boolean_t VAR_37 = VAR_0;
 boolean_t VAR_38 = VAR_0;




 boolean_t VAR_39 = VAR_0;
 boolean_t VAR_40 = VAR_0;
 boolean_t VAR_41 = VAR_0;
 boolean_t VAR_42 = VAR_0;
 int VAR_43 = 0;

 FUNC_0(VAR_28);
 VAR_31 = VAR_28->vfs_data;
 FUNC_0(VAR_31);
 VAR_30 = VAR_31->z_os;





 if (FUNC_7(VAR_30))
  return (VAR_2);







 if (FUNC_21(VAR_28, VAR_13, ((void*)0)) ||
     !FUNC_20(FUNC_9(VAR_30))) {
  VAR_33 = VAR_1;
  VAR_34 = VAR_1;
 } else if (FUNC_21(VAR_28, VAR_14, ((void*)0))) {
  VAR_33 = VAR_0;
  VAR_34 = VAR_1;
 }
 if (FUNC_21(VAR_28, VAR_11, ((void*)0))) {
  VAR_35 = VAR_0;
  VAR_36 = VAR_1;
 } else {
  if (FUNC_21(VAR_28, VAR_10, ((void*)0))) {
   VAR_35 = VAR_0;
   VAR_36 = VAR_1;
  } else if (FUNC_21(VAR_28, VAR_15, ((void*)0))) {
   VAR_35 = VAR_1;
   VAR_36 = VAR_1;
  }
 }
 if (FUNC_21(VAR_28, VAR_8, ((void*)0))) {
  VAR_37 = VAR_0;
  VAR_38 = VAR_1;
 } else if (FUNC_21(VAR_28, VAR_5, ((void*)0))) {
  VAR_37 = VAR_1;
  VAR_38 = VAR_1;
 }
 if (FUNC_21(VAR_28, VAR_12, ((void*)0))) {
  VAR_39 = VAR_0;
  VAR_40 = VAR_1;
 } else if (FUNC_21(VAR_28, VAR_16, ((void*)0))) {
  VAR_39 = VAR_1;
  VAR_40 = VAR_1;
 }
 if (FUNC_21(VAR_28, VAR_7, ((void*)0))) {
  VAR_41 = VAR_0;
  VAR_42 = VAR_1;
 } else if (FUNC_21(VAR_28, VAR_4, ((void*)0))) {
  VAR_41 = VAR_1;
  VAR_42 = VAR_1;
 }
 VAR_29 = FUNC_6(VAR_30);
 FUNC_10(FUNC_8(VAR_30), VAR_3);
 if (FUNC_21(VAR_28, VAR_9, ((void*)0))) {
  VAR_32 = VAR_0;
 } else if (FUNC_21(VAR_28, VAR_6, ((void*)0))) {
  VAR_32 = VAR_1;
 } else if ((VAR_43 = FUNC_12(VAR_29, "nbmand", &VAR_32) != 0)) {
  FUNC_11(FUNC_8(VAR_30), VAR_3);
  return (VAR_43);
 }
 VAR_43 = FUNC_13(VAR_29,
     FUNC_24(VAR_19), FUNC_3, VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_27), FUNC_23, VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_23), FUNC_4, VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_22), FUNC_17, VAR_31);




 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_24), FUNC_18, VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_21), FUNC_15, VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_25), FUNC_19, VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_18), FUNC_2, VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_17), FUNC_1,
     VAR_31);
 VAR_43 = VAR_43 ? VAR_43 : FUNC_13(VAR_29,
     FUNC_24(VAR_26), FUNC_22, VAR_31);
 FUNC_11(FUNC_8(VAR_30), VAR_3);
 if (VAR_43)
  goto unregister;




 if (VAR_34)
  FUNC_17(VAR_31, VAR_33);
 if (VAR_36)
  FUNC_18(VAR_31, VAR_35);
 if (VAR_38)
  FUNC_15(VAR_31, VAR_37);
 if (VAR_40)
  FUNC_23(VAR_31, VAR_39);
 if (VAR_42)
  FUNC_3(VAR_31, VAR_41);

 FUNC_16(VAR_31, VAR_32);

 return (0);

unregister:
 FUNC_14(VAR_29, VAR_31);
 return (VAR_43);
}
