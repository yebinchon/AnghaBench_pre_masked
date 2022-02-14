
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct suj_ino {int si_skipparent; int si_ino; } ;
typedef int ino_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_1(struct suj_ino *VAR_1, ino_t VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_1->si_ino, VAR_0, VAR_2, &VAR_4, &VAR_3))
  VAR_1->si_skipparent = 1;
}
