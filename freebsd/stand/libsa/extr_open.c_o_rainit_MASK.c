
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_raoffset; scalar_t__ f_ralen; int f_rabuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct open_file *VAR_1)
{
 VAR_1->f_rabuf = FUNC_0(VAR_0);
 VAR_1->f_ralen = 0;
 VAR_1->f_raoffset = 0;
}
