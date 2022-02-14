
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct ksem {int ks_gid; int ks_uid; int ks_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucred*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_2(struct ksem *VAR_4, struct ucred *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_4->ks_mode, VAR_4->ks_uid, VAR_4->ks_gid,
     VAR_1 | VAR_3, VAR_5, ((void*)0));
 if (VAR_6)
  VAR_6 = FUNC_0(VAR_5, VAR_0);
 return (VAR_6);
}
