
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uid_t ;
typedef int mode_t ;
typedef int caddr_t ;
struct TYPE_9__ {int a_type; int a_perm; void* a_id; } ;
typedef TYPE_1__ aclent_t ;
struct TYPE_10__ {int a_flags; void* a_who; void* a_access_mask; int a_type; } ;
typedef TYPE_2__ ace_t ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (void**,int) ;
 int VAR_18 ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (TYPE_1__*,int,int*,int*,int*,int*,int*) ;
 void* FUNC_5 (int,int,int,int) ;

__attribute__((used)) static int
FUNC_6(aclent_t *VAR_19, int VAR_20, ace_t **VAR_21, int *VAR_22, int VAR_23)
{
 int VAR_24 = 0;
 mode_t VAR_25;
 int VAR_26, VAR_27, VAR_28;
 int VAR_29 = 0;
 int VAR_30, VAR_31 = 0, VAR_32;
 ace_t *VAR_33, *VAR_34 = ((void*)0);
 int VAR_35;

 VAR_24 = FUNC_4(VAR_19, VAR_20, &VAR_35, &VAR_25,
     &VAR_26, &VAR_27, &VAR_28);
 if (VAR_24 != 0)
  goto out;


 VAR_29 = VAR_20 * 2;
 if (VAR_35) {





  VAR_29 += VAR_26 + VAR_27;

  VAR_29 -= 2;
 }


 if (VAR_28)
  FUNC_3((caddr_t)VAR_19, VAR_20, sizeof (aclent_t), VAR_18);

 if (FUNC_2((void **)&VAR_34, VAR_29 * sizeof (ace_t)) != 0)
  goto out;

 VAR_33 = VAR_34;

 for (VAR_30 = 0; VAR_30 < VAR_20; VAR_30++) {




  if (VAR_19[VAR_30].a_type & VAR_11)
   continue;


  if ((VAR_35) &&
      (VAR_19[VAR_30].a_type & (VAR_16 | VAR_13 | VAR_14))) {
   VAR_33->a_type = VAR_0;
   VAR_33->a_flags = 0;
   if (VAR_19[VAR_30].a_type & VAR_14) {
    VAR_33->a_who = (uid_t)-1;
    VAR_33->a_flags |=
        (VAR_5|VAR_4);
   } else if (VAR_19[VAR_30].a_type & VAR_16) {
    VAR_33->a_who = VAR_19[VAR_30].a_id;
   } else {
    VAR_33->a_who = VAR_19[VAR_30].a_id;
    VAR_33->a_flags |= VAR_5;
   }
   if (VAR_19[VAR_30].a_type & VAR_8) {
    VAR_33->a_flags |= VAR_6 |
        VAR_3 |
        VAR_1;
   }






   VAR_33->a_access_mask = FUNC_5((VAR_25 ^ 07),
       VAR_23, 0, 0);
   VAR_33 += 1;
  }


  VAR_33->a_access_mask = FUNC_5(VAR_19[VAR_30].a_perm,
      VAR_23, VAR_19[VAR_30].a_type & VAR_17, 1);


  if (VAR_19[VAR_30].a_type & VAR_8) {
   VAR_33->a_flags |= VAR_6 |
       VAR_3 |
       VAR_1;
  }
  if (VAR_19[VAR_30].a_type & VAR_17) {
   VAR_33->a_who = (uid_t)-1;
   VAR_33->a_flags |= VAR_7;
   FUNC_0(VAR_33, VAR_33 + 1, VAR_23, VAR_10);
   VAR_33 += 2;
  } else if (VAR_19[VAR_30].a_type & VAR_16) {
   VAR_33->a_who = VAR_19[VAR_30].a_id;
   FUNC_0(VAR_33, VAR_33 + 1, VAR_23, VAR_9);
   VAR_33 += 2;
  } else if (VAR_19[VAR_30].a_type & (VAR_14 | VAR_13)) {
   if (VAR_19[VAR_30].a_type & VAR_14) {
    VAR_33->a_who = (uid_t)-1;
    VAR_33->a_flags |= VAR_4;
   } else {
    VAR_33->a_who = VAR_19[VAR_30].a_id;
   }
   VAR_33->a_flags |= VAR_5;
   VAR_32 = (2 * VAR_27) - 1 - VAR_31;
   FUNC_0(VAR_33, VAR_33 + VAR_32, VAR_23, VAR_9);




   if (++VAR_31 >= VAR_27)
    VAR_33 += VAR_27 + 1;
   else
    VAR_33 += 1;
  } else if (VAR_19[VAR_30].a_type & VAR_15) {
   VAR_33->a_who = (uid_t)-1;
   VAR_33->a_flags |= VAR_2;
   FUNC_0(VAR_33, VAR_33 + 1, VAR_23, VAR_9);
   VAR_33 += 2;
  } else {
   VAR_24 = VAR_12;
   goto out;
  }
 }

 *VAR_21 = VAR_34;
 *VAR_22 = VAR_29;

out:
 if (VAR_24 != 0) {
  if ((VAR_34 != ((void*)0)) && (VAR_29 > 0)) {
   FUNC_1(VAR_34, VAR_29 * sizeof (ace_t));
  }
 }

 return (VAR_24);
}
