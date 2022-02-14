
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct cuse_server {int refs; TYPE_1__ selinfo; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cuse_server*) ;
 int FUNC_2 (struct cuse_server*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(struct cuse_server *VAR_0)
{
 int VAR_1;

 FUNC_0();
 FUNC_1(VAR_0);

 FUNC_2(VAR_0);

 FUNC_4(&VAR_0->selinfo.si_note, 1);

 VAR_1 = VAR_0->refs;
 FUNC_3();

 return (VAR_1);
}
