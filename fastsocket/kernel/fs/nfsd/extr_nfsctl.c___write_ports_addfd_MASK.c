
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {int sv_nrthreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static ssize_t FUNC_4(char *VAR_3)
{
 char *VAR_4 = VAR_3;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(&VAR_4, &VAR_5);
 if (VAR_6 != 0 || VAR_5 < 0)
  return -VAR_0;

 VAR_6 = FUNC_1();
 if (VAR_6 != 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_3, VAR_1);
 if (VAR_6 < 0) {
  FUNC_3(VAR_2);
  return VAR_6;
 }


 VAR_2->sv_nrthreads--;
 return VAR_6;
}
