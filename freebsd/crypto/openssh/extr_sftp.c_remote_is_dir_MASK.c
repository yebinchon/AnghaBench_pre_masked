
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sftp_conn {int dummy; } ;
struct TYPE_3__ {int flags; int perm; } ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sftp_conn*,char const*,int) ;

__attribute__((used)) static int
FUNC_2(struct sftp_conn *VAR_1, const char *VAR_2)
{
 Attrib *VAR_3;


 if ((VAR_3 = FUNC_1(VAR_1, VAR_2, 1)) == ((void*)0))
  return(0);
 if (!(VAR_3->flags & VAR_0))
  return(0);
 return(FUNC_0(VAR_3->perm));
}
