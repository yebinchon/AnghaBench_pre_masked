
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int dir; } ;
struct TYPE_3__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;
typedef enum ctattr_tuple { ____Placeholder_ctattr_tuple } ctattr_tuple ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nlattr*,struct nf_conntrack_tuple*) ;
 int FUNC_1 (struct nlattr*,struct nf_conntrack_tuple*) ;
 int FUNC_2 (struct nf_conntrack_tuple*,int ,int) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr const* const,int *) ;

__attribute__((used)) static int
FUNC_4(const struct nlattr * const VAR_7[],
        struct nf_conntrack_tuple *VAR_8,
        enum ctattr_tuple VAR_9, u_int8_t VAR_10)
{
 struct nlattr *VAR_11[VAR_1+1];
 int VAR_12;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));

 FUNC_3(VAR_11, VAR_1, VAR_7[VAR_9], ((void*)0));

 if (!VAR_11[VAR_0])
  return -VAR_4;

 VAR_8->src.l3num = VAR_10;

 VAR_12 = FUNC_0(VAR_11[VAR_0], VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_11[VAR_2])
  return -VAR_4;

 VAR_12 = FUNC_1(VAR_11[VAR_2], VAR_8);
 if (VAR_12 < 0)
  return VAR_12;


 if (VAR_9 == VAR_3)
  VAR_8->dst.dir = VAR_6;
 else
  VAR_8->dst.dir = VAR_5;

 return 0;
}
