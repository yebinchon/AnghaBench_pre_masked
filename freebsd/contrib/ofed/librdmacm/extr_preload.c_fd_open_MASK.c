
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd_info {int dupfd; int refcnt; } ;
struct TYPE_2__ {int (* close ) (int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 struct fd_info* FUNC_2 (int,int) ;
 int FUNC_3 (struct fd_info*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int,struct fd_info*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(void)
{
 struct fd_info *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_2(1, sizeof(*VAR_5));
 if (!VAR_5)
  return FUNC_0(VAR_0);

 VAR_7 = FUNC_5("/dev/null", VAR_1);
 if (VAR_7 < 0) {
  VAR_6 = VAR_7;
  goto err1;
 }

 VAR_5->dupfd = -1;
 FUNC_1(&VAR_5->refcnt, 1);
 FUNC_6(&VAR_3);
 VAR_6 = FUNC_4(&VAR_2, VAR_7, VAR_5);
 FUNC_7(&VAR_3);
 if (VAR_6 < 0)
  goto err2;

 return VAR_7;

err2:
 VAR_4.close(VAR_7);
err1:
 FUNC_3(VAR_5);
 return VAR_6;
}
