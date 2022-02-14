
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intrupt {scalar_t__ inuse; int new_pmhandler; int old_pmhandler; int new_rmhandler; int old_rmhandler; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned char VAR_1 ;
 unsigned char FUNC_6 (int ) ;
 struct intrupt* VAR_2 ;
 int FUNC_7 (int ,unsigned char) ;

__attribute__((used)) static void
FUNC_8 (struct intrupt *VAR_3)
{
  unsigned int VAR_4, VAR_5;
  unsigned char VAR_6;

  VAR_4 = VAR_3 - VAR_2;
  VAR_5 = 0x08 + VAR_4;


  VAR_6 = 1 << VAR_4;
  FUNC_4 ();
  FUNC_7 (VAR_0, FUNC_6 (VAR_0) | (VAR_6 & VAR_1));
  FUNC_5 ();


  FUNC_3 (VAR_5, &VAR_3->old_rmhandler);
  FUNC_1 (&VAR_3->new_rmhandler);


  FUNC_2 (VAR_5, &VAR_3->old_pmhandler);
  FUNC_0 (&VAR_3->new_pmhandler);
  VAR_3->inuse = 0;
}
