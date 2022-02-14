
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int oid_kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;

void
FUNC_2(struct sysctl_oid *VAR_3)
{






 FUNC_0((VAR_3->oid_kind & VAR_0) == 0,
     ("internal flag is set in oid_kind"));
 if ((VAR_3->oid_kind & VAR_1) != VAR_2)
  VAR_3->oid_kind |= VAR_0;
 FUNC_1(VAR_3);
}
