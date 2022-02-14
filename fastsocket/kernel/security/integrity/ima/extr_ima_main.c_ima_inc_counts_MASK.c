
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_iint_cache {int writecount; int readcount; int opencount; int mutex; } ;
typedef int fmode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ima_iint_cache *VAR_2, fmode_t VAR_3)
{
 FUNC_0(!FUNC_1(&VAR_2->mutex));

 VAR_2->opencount++;
 if ((VAR_3 & (VAR_0 | VAR_1)) == VAR_0)
  VAR_2->readcount++;
 if (VAR_3 & VAR_1)
  VAR_2->writecount++;
}
