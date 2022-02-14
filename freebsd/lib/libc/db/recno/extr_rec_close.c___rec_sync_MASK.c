
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct iovec {int iov_len; int * iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef int recno_t ;
typedef int off_t ;
struct TYPE_22__ {int rcursor; } ;
struct TYPE_25__ {int (* bt_irec ) (TYPE_4__*,int ) ;int bt_rfd; TYPE_1__ bt_cursor; int bt_bval; int * bt_pinned; int bt_mp; } ;
struct TYPE_24__ {int (* seq ) (TYPE_3__ const*,TYPE_2__*,TYPE_2__*,int ) ;TYPE_4__* internal; } ;
struct TYPE_23__ {int size; int * data; } ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ DB ;
typedef TYPE_4__ BTREE ;


 int FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int) ;
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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_3__ const*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;
 scalar_t__ FUNC_4 (int ,struct iovec*,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_3__ const*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_3__ const*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_3__ const*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_3__ const*,TYPE_2__*,TYPE_2__*,int ) ;

int
FUNC_13(const DB *VAR_13, u_int VAR_14)
{
 struct iovec VAR_15[2];
 BTREE *VAR_16;
 DBT VAR_17, VAR_18;
 off_t VAR_19;
 recno_t VAR_20, VAR_21;
 int VAR_22;

 VAR_16 = VAR_13->internal;


 if (VAR_16->bt_pinned != ((void*)0)) {
  FUNC_7(VAR_16->bt_mp, VAR_16->bt_pinned, 0);
  VAR_16->bt_pinned = ((void*)0);
 }

 if (VAR_14 == VAR_10)
  return (FUNC_2(VAR_13, 0));

 if (FUNC_1(VAR_16, VAR_9 | VAR_6) || !FUNC_1(VAR_16, VAR_7))
  return (VAR_2);


 if (!FUNC_1(VAR_16, VAR_3) && VAR_16->bt_irec(VAR_16, VAR_0) == VAR_1)
  return (VAR_1);


 if (FUNC_6(VAR_16->bt_rfd, (off_t)0, VAR_12) != 0)
  return (VAR_1);


 VAR_20 = VAR_16->bt_cursor.rcursor;

 VAR_18.size = sizeof(recno_t);
 VAR_18.data = &VAR_21;

 if (FUNC_1(VAR_16, VAR_5)) {





  VAR_22 = (VAR_13->seq)(VAR_13, &VAR_18, &VAR_17, VAR_4);
  while (VAR_22 == VAR_2) {
   if (FUNC_3(VAR_16->bt_rfd, VAR_17.data, VAR_17.size) !=
       (ssize_t)VAR_17.size)
    return (VAR_1);
   VAR_22 = (VAR_13->seq)(VAR_13, &VAR_18, &VAR_17, VAR_8);
  }
 } else {
  VAR_15[1].iov_base = &VAR_16->bt_bval;
  VAR_15[1].iov_len = 1;

  VAR_22 = (VAR_13->seq)(VAR_13, &VAR_18, &VAR_17, VAR_4);
  while (VAR_22 == VAR_2) {
   VAR_15[0].iov_base = VAR_17.data;
   VAR_15[0].iov_len = VAR_17.size;
   if (FUNC_4(VAR_16->bt_rfd, VAR_15, 2) != (ssize_t)(VAR_17.size + 1))
    return (VAR_1);
   VAR_22 = (VAR_13->seq)(VAR_13, &VAR_18, &VAR_17, VAR_8);
  }
 }


 VAR_16->bt_cursor.rcursor = VAR_20;

 if (VAR_22 == VAR_1)
  return (VAR_1);
 if ((VAR_19 = FUNC_6(VAR_16->bt_rfd, (off_t)0, VAR_11)) == -1)
  return (VAR_1);
 if (FUNC_5(VAR_16->bt_rfd, VAR_19))
  return (VAR_1);
 FUNC_0(VAR_16, VAR_7);
 return (VAR_2);
}
