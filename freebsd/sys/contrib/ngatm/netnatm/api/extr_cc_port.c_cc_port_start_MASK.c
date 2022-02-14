
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ccport {scalar_t__ admin; int uarg; } ;
struct ccdata {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* send_uni_glob ) (struct ccport*,int ,int ,int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ccport* FUNC_0 (struct ccdata*,int ) ;
 int FUNC_1 (struct ccport*,int ,int ,int ,int *) ;

int
FUNC_2(struct ccdata *VAR_5, u_int VAR_6)
{
 struct ccport *VAR_7;

 if ((VAR_7 = FUNC_0(VAR_5, VAR_6)) == ((void*)0))
  return (VAR_3);
 if (VAR_7->admin != VAR_1)
  return (VAR_2);

 VAR_5->funcs->send_uni_glob(VAR_7, VAR_7->uarg,
     VAR_4, 0, ((void*)0));
 VAR_7->admin = VAR_0;

 return (0);
}
