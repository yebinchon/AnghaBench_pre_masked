
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int ,char*) ;
 scalar_t__ VAR_5 ;

int
FUNC_3(void)
{
 off_t VAR_6;





 VAR_5 = 0;




 if (VAR_3 != VAR_0)
  return(0);





 if (((VAR_6 = FUNC_1(VAR_2, (off_t)0L, VAR_1)) < 0) ||
     (FUNC_0(VAR_2, VAR_6) < 0)) {
  FUNC_2(1, VAR_4, "Unable to truncate archive file");
  return(-1);
 }
 return(0);
}
