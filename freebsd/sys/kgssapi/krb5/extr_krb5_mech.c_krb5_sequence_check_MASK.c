
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct krb5_msg_order {int km_flags; int km_length; scalar_t__* km_elem; } ;
struct krb5_context {int kc_lock; struct krb5_msg_order kc_msg_order; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct krb5_msg_order*,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static OM_uint32
FUNC_3(struct krb5_context *VAR_8, uint32_t VAR_9)
{
 OM_uint32 VAR_10 = VAR_4;
 struct krb5_msg_order *VAR_11 = &VAR_8->kc_msg_order;
 int VAR_12 = VAR_11->km_flags & VAR_1;
 int VAR_13 = VAR_11->km_flags & VAR_0;
 int VAR_14;

 FUNC_1(&VAR_8->kc_lock);




 if (VAR_11->km_length == 0 || VAR_9 == VAR_11->km_elem[0] + 1) {



  FUNC_0(VAR_11, VAR_9, 0);
  VAR_10 = VAR_2;
  goto out;
 }

 if (VAR_9 > VAR_11->km_elem[0]) {



  FUNC_0(VAR_11, VAR_9, 0);
  if (VAR_12)
   VAR_10 = VAR_5;
  else
   VAR_10 = VAR_2;
  goto out;
 }

 if (VAR_9 < VAR_11->km_elem[VAR_11->km_length - 1]) {
  if (VAR_13 && !VAR_12)
   VAR_10 = VAR_6;
  else
   VAR_10 = VAR_7;
  goto out;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11->km_length; VAR_14++) {
  if (VAR_11->km_elem[VAR_14] == VAR_9) {
   VAR_10 = VAR_3;
   goto out;
  }
  if (VAR_11->km_elem[VAR_14] < VAR_9) {



   FUNC_0(VAR_11, VAR_9, VAR_14);
   if (VAR_13 && !VAR_12)
    VAR_10 = VAR_2;
   else
    VAR_10 = VAR_7;
   goto out;
  }
 }

out:
 FUNC_2(&VAR_8->kc_lock);

 return (VAR_10);
}
