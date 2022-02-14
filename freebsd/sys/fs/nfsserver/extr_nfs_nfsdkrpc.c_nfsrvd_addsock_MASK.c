
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct socket {scalar_t__ so_type; } ;
struct file {struct socket* f_data; int * f_ops; } ;
struct TYPE_7__ {scalar_t__ xp_sockref; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct socket*,int,int) ;
 TYPE_1__* FUNC_3 (int ,struct socket*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__,int ,int *) ;
 TYPE_1__* FUNC_6 (int ,struct socket*,int ,int ) ;

int
FUNC_7(struct file *VAR_13)
{
 int VAR_14;
 struct socket *VAR_15;
 int VAR_16 = 0;
 SVCXPRT *VAR_17;
 static u_int64_t VAR_18 = 0;

 VAR_15 = VAR_13->f_data;

 VAR_14 = VAR_12;
 VAR_16 = FUNC_2(VAR_15, VAR_14, VAR_14);
 if (VAR_16)
  goto out;





 if (VAR_15->so_type == VAR_4)
  VAR_17 = FUNC_3(VAR_9, VAR_15, 0, 0);
 else
  VAR_17 = FUNC_6(VAR_9, VAR_15, 0, 0);
 if (VAR_17) {
  VAR_13->f_ops = &VAR_6;
  VAR_13->f_data = ((void*)0);
  VAR_17->xp_sockref = ++VAR_18;
  if (VAR_8 == VAR_1)
   FUNC_5(VAR_17, VAR_0, VAR_1, VAR_11,
       ((void*)0));
  if (VAR_8 <= VAR_2 && VAR_7 >= VAR_2)
   FUNC_5(VAR_17, VAR_0, VAR_2, VAR_11,
       ((void*)0));
  if (VAR_7 >= VAR_3)
   FUNC_5(VAR_17, VAR_0, VAR_3, VAR_11,
       ((void*)0));
  if (VAR_15->so_type == VAR_5)
   FUNC_4(VAR_17, VAR_10);
  FUNC_1(VAR_17);
 }

out:
 FUNC_0(VAR_16);
 return (VAR_16);
}
