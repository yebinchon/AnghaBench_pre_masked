
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nlattr {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_helper {int dummy; } ;
struct nf_conn_help {int helper; } ;
struct TYPE_2__ {int expires; } ;
struct nf_conn {TYPE_1__ timeout; struct nf_conn* master; int status; void* mark; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct nf_conn* FUNC_0 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;
 struct nf_conntrack_helper* FUNC_2 (char*) ;
 int FUNC_3 (struct nf_conn*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_7 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_8 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_9 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_10 (struct nlattr const* const,char**) ;
 int FUNC_11 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 struct nf_conn* FUNC_12 (int *,struct nf_conntrack_tuple*,struct nf_conntrack_tuple*,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_13 (int *,struct nf_conntrack_tuple*) ;
 int FUNC_14 (struct nf_conn*) ;
 int FUNC_15 (struct nf_conn*) ;
 int FUNC_16 (struct nf_conn*,int ) ;
 int FUNC_17 (struct nf_conn*,int ) ;
 struct nf_conn_help* FUNC_18 (struct nf_conn*,int ) ;
 struct nf_conn* FUNC_19 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_20 (struct nlattr const* const) ;
 void* FUNC_21 (int ) ;
 int FUNC_22 (int ,struct nf_conntrack_helper*) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 (char*,char*) ;

__attribute__((used)) static struct nf_conn *
FUNC_26(const struct nlattr * const VAR_21[],
      struct nf_conntrack_tuple *VAR_22,
      struct nf_conntrack_tuple *VAR_23,
      u8 VAR_24)
{
 struct nf_conn *VAR_25;
 int VAR_26 = -VAR_11;
 struct nf_conntrack_helper *VAR_27;

 VAR_25 = FUNC_12(&VAR_19, VAR_22, VAR_23, VAR_15);
 if (FUNC_1(VAR_25))
  return FUNC_0(-VAR_13);

 if (!VAR_21[VAR_8])
  goto err1;
 VAR_25->timeout.expires = FUNC_21(FUNC_20(VAR_21[VAR_8]));

 VAR_25->timeout.expires = VAR_20 + VAR_25->timeout.expires * VAR_16;
 VAR_25->status |= VAR_17;

 FUNC_23();
  if (VAR_21[VAR_0]) {
  char *VAR_28 = ((void*)0);

   VAR_26 = FUNC_10(VAR_21[VAR_0], &VAR_28);
   if (VAR_26 < 0)
   goto err2;

  VAR_27 = FUNC_2(VAR_28);
  if (VAR_27 == ((void*)0)) {
   FUNC_24();
   VAR_26 = -VAR_14;
   goto err1;
  } else {
   struct nf_conn_help *VAR_29;

   VAR_29 = FUNC_18(VAR_25, VAR_15);
   if (VAR_29 == ((void*)0)) {
    VAR_26 = -VAR_13;
    goto err2;
   }


   FUNC_22(VAR_29->helper, VAR_27);
  }
 } else {

  VAR_26 = FUNC_3(VAR_25, VAR_15);
  if (VAR_26 < 0)
   goto err2;
 }

 if (VAR_21[VAR_7]) {
  VAR_26 = FUNC_9(VAR_25, VAR_21);
  if (VAR_26 < 0)
   goto err2;
 }

 if (VAR_21[VAR_5] || VAR_21[VAR_2]) {
  VAR_26 = FUNC_6(VAR_25, VAR_21);
  if (VAR_26 < 0)
   goto err2;
 }
 if (VAR_21[VAR_6]) {
  VAR_26 = FUNC_8(VAR_25, VAR_21);
  if (VAR_26 < 0)
   goto err2;
 }

 FUNC_16(VAR_25, VAR_15);
 FUNC_17(VAR_25, VAR_15);







 if (VAR_21[VAR_9]) {
  struct nf_conntrack_tuple VAR_30;
  struct nf_conntrack_tuple_hash *VAR_31;
  struct nf_conn *VAR_32;

  VAR_26 = FUNC_11(VAR_21, &VAR_30, VAR_9, VAR_24);
  if (VAR_26 < 0)
   goto err2;

  VAR_31 = FUNC_13(&VAR_19, &VAR_30);
  if (VAR_31 == ((void*)0)) {
   VAR_26 = -VAR_12;
   goto err2;
  }
  VAR_32 = FUNC_19(VAR_31);
  FUNC_4(VAR_18, &VAR_25->status);
  VAR_25->master = VAR_32;
 }

 FUNC_5(&VAR_25->timeout);
 FUNC_15(VAR_25);
 FUNC_24();

 return VAR_25;

err2:
 FUNC_24();
err1:
 FUNC_14(VAR_25);
 return FUNC_0(VAR_26);
}
