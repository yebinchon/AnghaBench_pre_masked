
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
struct radix_node_head {int rh; scalar_t__ (* rnh_matchaddr ) (struct sockaddr*,int *) ;} ;
struct netcred {TYPE_1__* netc_rnodes; } ;
struct netexport {struct netcred ne_defexported; struct radix_node_head* ne6; struct radix_node_head* ne4; } ;
struct mount {int mnt_flag; struct netexport* mnt_export; } ;
struct TYPE_2__ {int rn_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radix_node_head*) ;
 int VAR_2 ;
 int FUNC_1 (struct radix_node_head*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sockaddr*,int *) ;

__attribute__((used)) static struct netcred *
FUNC_3(struct mount *VAR_4, struct sockaddr *VAR_5)
{
 VAR_2;
 struct netexport *VAR_6;
 struct netcred *VAR_7 = ((void*)0);
 struct radix_node_head *VAR_8;
 struct sockaddr *VAR_9;

 VAR_6 = VAR_4->mnt_export;
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 if ((VAR_4->mnt_flag & VAR_1) == 0)
  return (((void*)0));




 if (VAR_5 != ((void*)0)) {
  VAR_9 = VAR_5;
  VAR_8 = ((void*)0);
  switch (VAR_9->sa_family) {
  case 129:
   VAR_8 = VAR_6->ne4;
   break;
  case 128:
   VAR_8 = VAR_6->ne6;
   break;
  }
  if (VAR_8 != ((void*)0)) {
   FUNC_0(VAR_8);
   VAR_7 = (struct netcred *) (*VAR_8->rnh_matchaddr)(VAR_9, &VAR_8->rh);
   FUNC_1(VAR_8);
   if (VAR_7 != ((void*)0) && (VAR_7->netc_rnodes->rn_flags & VAR_3) != 0)
    return (((void*)0));
  }
 }




 if (VAR_7 == ((void*)0) && (VAR_4->mnt_flag & VAR_0) != 0)
  return (&VAR_6->ne_defexported);

 return (VAR_7);
}
