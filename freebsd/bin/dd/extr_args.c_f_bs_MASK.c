
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int ssize_t ;
struct TYPE_4__ {size_t dbsz; } ;
struct TYPE_3__ {size_t dbsz; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(char *VAR_3)
{
 uintmax_t VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 1 || VAR_4 > VAR_0)
  FUNC_0(1, "bs must be between 1 and %zd", (ssize_t)VAR_0);
 VAR_1.dbsz = VAR_2.dbsz = (size_t)VAR_4;
}
