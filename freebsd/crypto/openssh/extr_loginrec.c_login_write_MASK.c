
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logininfo {scalar_t__ type; int username; int line; int hostname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct logininfo*) ;
 int FUNC_1 (struct logininfo*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct logininfo*) ;
 int FUNC_4 (struct logininfo*) ;
 int VAR_2 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (struct logininfo*) ;
 int FUNC_8 (struct logininfo*) ;
 int FUNC_9 (struct logininfo*) ;
 int FUNC_10 (struct logininfo*) ;
 int FUNC_11 (struct logininfo*) ;

int
FUNC_12(struct logininfo *VAR_3)
{

 if (FUNC_2() != 0) {
  FUNC_5("Attempt to write login records by non-root user (aborting)");
  return (1);
 }



 FUNC_4(VAR_3);
 return (0);
}
