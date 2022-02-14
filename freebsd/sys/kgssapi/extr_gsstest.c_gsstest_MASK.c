
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int dummy; } ;
struct gsstest_args {int a_op; int a_res; int a_args; } ;
struct TYPE_8__ {int length; int value; } ;
struct TYPE_7__ {int length; int value; } ;
struct gsstest_2_res {TYPE_2__ output_token; int min_stat; int maj_stat; int step; TYPE_1__ input_token; } ;
struct gsstest_2_args {TYPE_2__ output_token; int min_stat; int maj_stat; int step; TYPE_1__ input_token; } ;
typedef int res ;
struct TYPE_9__ {int length; struct gsstest_2_res* value; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef int args ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct gsstest_2_res*,int) ;
 int FUNC_1 (struct gsstest_2_res*,int ,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ,TYPE_3__*,int *,int *,TYPE_3__*) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;
 struct gsstest_2_res* FUNC_7 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_4, struct gsstest_args *VAR_5)
{
 int VAR_6;

 switch (VAR_5->a_op) {
 case 1:
                return (FUNC_3(VAR_4));

 case 2: {
  struct gsstest_2_args VAR_7;
  struct gsstest_2_res VAR_8;
  gss_buffer_desc VAR_9, VAR_10;
  OM_uint32 VAR_11;

  VAR_6 = FUNC_0(VAR_5->a_args, &VAR_7, sizeof(VAR_7));
  if (VAR_6)
   return (VAR_6);
  VAR_9.length = VAR_7.input_token.length;
  VAR_9.value = FUNC_7(VAR_9.length, VAR_2,
      VAR_3);
  VAR_6 = FUNC_0(VAR_7.input_token.value, VAR_9.value,
      VAR_9.length);
  if (VAR_6) {
   FUNC_2(&VAR_11, &VAR_9);
   return (VAR_6);
  }
  VAR_10.length = 0;
  VAR_10.value = ((void*)0);
  FUNC_4(VAR_4, VAR_7.step, &VAR_9,
      &VAR_8.maj_stat, &VAR_8.min_stat, &VAR_10);
  FUNC_2(&VAR_11, &VAR_9);
  if (VAR_10.length > VAR_7.output_token.length) {
   FUNC_2(&VAR_11, &VAR_10);
   return (VAR_1);
  }
  VAR_8.output_token.length = VAR_10.length;
  VAR_8.output_token.value = VAR_7.output_token.value;
  VAR_6 = FUNC_1(VAR_10.value, VAR_8.output_token.value,
      VAR_10.length);
  FUNC_2(&VAR_11, &VAR_10);
  if (VAR_6)
   return (VAR_6);

  return (FUNC_1(&VAR_8, VAR_5->a_res, sizeof(VAR_8)));

  break;
 }
 case 3:
  return (FUNC_5(VAR_4));
 case 4:
  return (FUNC_6(VAR_4));
 }

        return (VAR_0);
}
