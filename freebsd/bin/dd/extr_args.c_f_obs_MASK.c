
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int ssize_t ;
struct TYPE_2__ {size_t dbsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(char *VAR_4)
{
 uintmax_t VAR_5;

 if (!(VAR_2 & VAR_0)) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 < 1 || VAR_5 > VAR_1)
   FUNC_0(1, "obs must be between 1 and %zd",
       (ssize_t)VAR_1);
  VAR_3.dbsz = (size_t)VAR_5;
 }
}
