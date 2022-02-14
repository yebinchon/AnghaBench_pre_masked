
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsizes {scalar_t__ ts_strsz; scalar_t__ ts_symsz; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct tsizes*) ;

__attribute__((used)) static void
FUNC_1(struct tsizes *VAR_1)
{

 VAR_1->ts_symsz = 0;
 VAR_1->ts_strsz = 0;

 (void)FUNC_0(VAR_0, VAR_1);
}
